cmd_drivers/power/supply/smb347-charger.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/supply/smb347-charger.ko drivers/power/supply/smb347-charger.o drivers/power/supply/smb347-charger.mod.o ;  true