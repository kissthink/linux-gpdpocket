cmd_arch/x86/kvm/kvm-amd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/kvm/kvm-amd.ko arch/x86/kvm/kvm-amd.o arch/x86/kvm/kvm-amd.mod.o ;  true
