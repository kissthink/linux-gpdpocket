cmd_net/netfilter/nft_nat.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nft_nat.ko net/netfilter/nft_nat.o net/netfilter/nft_nat.mod.o ;  true
