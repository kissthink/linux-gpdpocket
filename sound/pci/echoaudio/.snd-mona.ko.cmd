cmd_sound/pci/echoaudio/snd-mona.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o sound/pci/echoaudio/snd-mona.ko sound/pci/echoaudio/snd-mona.o sound/pci/echoaudio/snd-mona.mod.o ;  true