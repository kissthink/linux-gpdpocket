cmd_net/netfilter/nft_ct.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nft_ct.ko net/netfilter/nft_ct.o net/netfilter/nft_ct.mod.o ;  true
