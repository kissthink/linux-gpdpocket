cmd_drivers/block/skd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/skd.ko drivers/block/skd.o drivers/block/skd.mod.o ;  true
