cmd_net/rfkill/rfkill.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/rfkill/rfkill.ko net/rfkill/rfkill.o net/rfkill/rfkill.mod.o ;  true
