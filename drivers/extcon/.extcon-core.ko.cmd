cmd_drivers/extcon/extcon-core.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/extcon/extcon-core.ko drivers/extcon/extcon-core.o drivers/extcon/extcon-core.mod.o ;  true