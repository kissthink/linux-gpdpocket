cmd_drivers/vhost/vhost_net.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/vhost/vhost_net.ko drivers/vhost/vhost_net.o drivers/vhost/vhost_net.mod.o ;  true
