cmd_drivers/infiniband/hw/ocrdma/ocrdma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/infiniband/hw/ocrdma/ocrdma.ko drivers/infiniband/hw/ocrdma/ocrdma.o drivers/infiniband/hw/ocrdma/ocrdma.mod.o ;  true