cmd_drivers/mmc/host/wbsd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/host/wbsd.ko drivers/mmc/host/wbsd.o drivers/mmc/host/wbsd.mod.o ;  true
