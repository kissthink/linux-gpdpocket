cmd_drivers/input/touchscreen/mcs5000_ts.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/touchscreen/mcs5000_ts.ko drivers/input/touchscreen/mcs5000_ts.o drivers/input/touchscreen/mcs5000_ts.mod.o ;  true