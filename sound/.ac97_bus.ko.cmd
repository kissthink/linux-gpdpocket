cmd_sound/ac97_bus.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o ;  true
