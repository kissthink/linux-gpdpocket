cmd_net/netfilter/nft_hash.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nft_hash.ko net/netfilter/nft_hash.o net/netfilter/nft_hash.mod.o ;  true
