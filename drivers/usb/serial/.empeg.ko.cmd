cmd_drivers/usb/serial/empeg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/empeg.ko drivers/usb/serial/empeg.o drivers/usb/serial/empeg.mod.o ;  true
