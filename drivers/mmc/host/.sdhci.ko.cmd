cmd_drivers/mmc/host/sdhci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mmc/host/sdhci.ko drivers/mmc/host/sdhci.o drivers/mmc/host/sdhci.mod.o ;  true
