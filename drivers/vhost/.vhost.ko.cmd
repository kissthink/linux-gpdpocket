cmd_drivers/vhost/vhost.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/vhost/vhost.ko drivers/vhost/vhost.o drivers/vhost/vhost.mod.o ;  true
