cmd_drivers/misc/mic/bus/cosm_bus.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/mic/bus/cosm_bus.ko drivers/misc/mic/bus/cosm_bus.o drivers/misc/mic/bus/cosm_bus.mod.o ;  true