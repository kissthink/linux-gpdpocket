cmd_net/netfilter/xt_owner.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/xt_owner.ko net/netfilter/xt_owner.o net/netfilter/xt_owner.mod.o ;  true
