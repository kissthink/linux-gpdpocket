cmd_drivers/char/ipmi/ipmi_ssif.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/char/ipmi/ipmi_ssif.ko drivers/char/ipmi/ipmi_ssif.o drivers/char/ipmi/ipmi_ssif.mod.o ;  true