cmd_net/netfilter/nf_nat_tftp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/nf_nat_tftp.ko net/netfilter/nf_nat_tftp.o net/netfilter/nf_nat_tftp.mod.o ;  true
