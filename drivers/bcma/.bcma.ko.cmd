cmd_drivers/bcma/bcma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/bcma/bcma.ko drivers/bcma/bcma.o drivers/bcma/bcma.mod.o ;  true
