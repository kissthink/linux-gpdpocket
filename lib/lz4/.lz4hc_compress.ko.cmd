cmd_lib/lz4/lz4hc_compress.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/lz4/lz4hc_compress.ko lib/lz4/lz4hc_compress.o lib/lz4/lz4hc_compress.mod.o ;  true
