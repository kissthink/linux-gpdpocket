cmd_drivers/message/fusion/mptsas.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/message/fusion/mptsas.ko drivers/message/fusion/mptsas.o drivers/message/fusion/mptsas.mod.o ;  true