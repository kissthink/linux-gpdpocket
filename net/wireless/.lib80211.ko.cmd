cmd_net/wireless/lib80211.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/wireless/lib80211.ko net/wireless/lib80211.o net/wireless/lib80211.mod.o ;  true
