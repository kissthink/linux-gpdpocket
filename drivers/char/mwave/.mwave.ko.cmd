cmd_drivers/char/mwave/mwave.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/mwave/mwave.ko drivers/char/mwave/mwave.o drivers/char/mwave/mwave.mod.o ;  true
