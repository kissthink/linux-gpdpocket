cmd_drivers/input/misc/xen-kbdfront.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/misc/xen-kbdfront.ko drivers/input/misc/xen-kbdfront.o drivers/input/misc/xen-kbdfront.mod.o ;  true