cmd_drivers/i2c/i2c-stub.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/i2c/i2c-stub.ko drivers/i2c/i2c-stub.o drivers/i2c/i2c-stub.mod.o ;  true
