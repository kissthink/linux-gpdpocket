cmd_net/bridge/netfilter/ebt_pkttype.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/bridge/netfilter/ebt_pkttype.ko net/bridge/netfilter/ebt_pkttype.o net/bridge/netfilter/ebt_pkttype.mod.o ;  true