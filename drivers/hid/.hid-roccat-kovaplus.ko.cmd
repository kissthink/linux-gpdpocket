cmd_drivers/hid/hid-roccat-kovaplus.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-roccat-kovaplus.ko drivers/hid/hid-roccat-kovaplus.o drivers/hid/hid-roccat-kovaplus.mod.o ;  true