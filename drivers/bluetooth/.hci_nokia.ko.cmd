cmd_drivers/bluetooth/hci_nokia.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/hci_nokia.ko drivers/bluetooth/hci_nokia.o drivers/bluetooth/hci_nokia.mod.o ;  true