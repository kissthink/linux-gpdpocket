cmd_net/netfilter/xt_sctp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/xt_sctp.ko net/netfilter/xt_sctp.o net/netfilter/xt_sctp.mod.o ;  true
