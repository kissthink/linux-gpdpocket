cmd_drivers/ssb/ssb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/ssb/ssb.ko drivers/ssb/ssb.o drivers/ssb/ssb.mod.o ;  true
