cmd_drivers/pps/pps_core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/pps/pps_core.ko drivers/pps/pps_core.o drivers/pps/pps_core.mod.o ;  true
