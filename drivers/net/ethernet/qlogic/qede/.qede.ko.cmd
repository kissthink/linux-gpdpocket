cmd_drivers/net/ethernet/qlogic/qede/qede.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/qlogic/qede/qede.ko drivers/net/ethernet/qlogic/qede/qede.o drivers/net/ethernet/qlogic/qede/qede.mod.o ;  true