cmd_crypto/crypto_user.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/crypto_user.ko crypto/crypto_user.o crypto/crypto_user.mod.o ;  true
