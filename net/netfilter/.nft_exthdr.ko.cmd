cmd_net/netfilter/nft_exthdr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nft_exthdr.ko net/netfilter/nft_exthdr.o net/netfilter/nft_exthdr.mod.o ;  true
