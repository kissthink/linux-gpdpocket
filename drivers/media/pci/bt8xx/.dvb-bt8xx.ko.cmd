cmd_drivers/media/pci/bt8xx/dvb-bt8xx.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/pci/bt8xx/dvb-bt8xx.ko drivers/media/pci/bt8xx/dvb-bt8xx.o drivers/media/pci/bt8xx/dvb-bt8xx.mod.o ;  true