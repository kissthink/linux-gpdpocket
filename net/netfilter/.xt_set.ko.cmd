cmd_net/netfilter/xt_set.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/xt_set.ko net/netfilter/xt_set.o net/netfilter/xt_set.mod.o ;  true
