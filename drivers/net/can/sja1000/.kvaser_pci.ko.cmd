cmd_drivers/net/can/sja1000/kvaser_pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/can/sja1000/kvaser_pci.ko drivers/net/can/sja1000/kvaser_pci.o drivers/net/can/sja1000/kvaser_pci.mod.o ;  true