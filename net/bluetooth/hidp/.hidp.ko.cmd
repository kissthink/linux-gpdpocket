cmd_net/bluetooth/hidp/hidp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/bluetooth/hidp/hidp.ko net/bluetooth/hidp/hidp.o net/bluetooth/hidp/hidp.mod.o ;  true
