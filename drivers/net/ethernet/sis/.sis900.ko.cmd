cmd_drivers/net/ethernet/sis/sis900.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/sis/sis900.ko drivers/net/ethernet/sis/sis900.o drivers/net/ethernet/sis/sis900.mod.o ;  true