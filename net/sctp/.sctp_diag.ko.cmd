cmd_net/sctp/sctp_diag.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/sctp/sctp_diag.ko net/sctp/sctp_diag.o net/sctp/sctp_diag.mod.o ;  true
