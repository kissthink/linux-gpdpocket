cmd_drivers/cpufreq/amd_freq_sensitivity.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/cpufreq/amd_freq_sensitivity.ko drivers/cpufreq/amd_freq_sensitivity.o drivers/cpufreq/amd_freq_sensitivity.mod.o ;  true