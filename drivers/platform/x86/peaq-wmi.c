/*
 * PEAQ 2-in-1 WMI hotkey driver
 * Copyright (C) 2017 Hans de Goede <hdegoede@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/acpi.h>
#include <linux/input-polldev.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define PEAQ_DOLBY_BUTTON_GUID		"ABBC0F6F-8EA1-11D1-00A0-C90629100000"
#define PEAQ_DOLBY_BUTTON_METHOD_ID	5
#define PEAQ_POLL_INTERVAL_MS		250
#define PEAQ_POLL_IGNORE_MS		500
#define PEAQ_POLL_MAX_MS		1000

MODULE_ALIAS("wmi:"PEAQ_DOLBY_BUTTON_GUID);

static struct input_polled_dev *peaq_poll_dev;
static unsigned int peaq_ignore_events_counter;

/*
 * The Dolby button (yes really a Dolby button) causes an ACPI variable to get
 * set on both press and release. The WMI method checks and clears that flag.
 * So for a press + release we will get back One from the WMI method either once
 * (if polling after the release) or twice (polling between press and release).
 * We ignore events for 0.5s after the first event to avoid reporting 2 presses.
 */
static void peaq_wmi_poll(struct input_polled_dev *dev)
{
	u32 dummy = 0;
	union acpi_object obj;
	struct acpi_buffer input = { sizeof(dummy), &dummy };
	struct acpi_buffer output = { sizeof(obj), &obj };
	acpi_status status;

	status = wmi_evaluate_method(PEAQ_DOLBY_BUTTON_GUID, 1,
				     PEAQ_DOLBY_BUTTON_METHOD_ID,
				     &input, &output);
	if (ACPI_FAILURE(status))
		return;

	if (obj.type != ACPI_TYPE_INTEGER) {
		dev_err(&peaq_poll_dev->input->dev,
			"Error WMBC did not return an integer\n");
		return;
	}

	if (peaq_ignore_events_counter && --peaq_ignore_events_counter > 0)
		return;

	if (obj.integer.value) {
		input_event(peaq_poll_dev->input, EV_KEY, KEY_SOUND, 1);
		input_sync(peaq_poll_dev->input);
		input_event(peaq_poll_dev->input, EV_KEY, KEY_SOUND, 0);
		input_sync(peaq_poll_dev->input);
		peaq_ignore_events_counter = max(1u,
			PEAQ_POLL_IGNORE_MS / peaq_poll_dev->poll_interval);
	}
}

static int __init peaq_wmi_init(void)
{
	if (!wmi_has_guid(PEAQ_DOLBY_BUTTON_GUID))
		return -ENODEV;

	peaq_poll_dev = input_allocate_polled_device();
	if (!peaq_poll_dev)
		return -ENOMEM;

	peaq_poll_dev->poll = peaq_wmi_poll;
	peaq_poll_dev->poll_interval = PEAQ_POLL_INTERVAL_MS;
	peaq_poll_dev->poll_interval_max = PEAQ_POLL_MAX_MS;
	peaq_poll_dev->input->name = "PEAQ WMI hotkeys";
	peaq_poll_dev->input->phys = "wmi/input0";
	peaq_poll_dev->input->id.bustype = BUS_HOST;
	input_set_capability(peaq_poll_dev->input, EV_KEY, KEY_SOUND);

	return input_register_polled_device(peaq_poll_dev);
}

static void __exit peaq_wmi_exit(void)
{
	if (!wmi_has_guid(PEAQ_DOLBY_BUTTON_GUID))
		return;

	input_unregister_polled_device(peaq_poll_dev);
}

module_init(peaq_wmi_init);
module_exit(peaq_wmi_exit);

MODULE_DESCRIPTION("PEAQ 2-in-1 WMI hotkey driver");
MODULE_AUTHOR("Hans de Goede <hdegoede@redhat.com>");
MODULE_LICENSE("GPL");