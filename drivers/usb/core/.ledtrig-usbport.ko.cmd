cmd_drivers/usb/core/ledtrig-usbport.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/core/ledtrig-usbport.ko drivers/usb/core/ledtrig-usbport.o drivers/usb/core/ledtrig-usbport.mod.o ;  true