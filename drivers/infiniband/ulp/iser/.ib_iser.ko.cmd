cmd_drivers/infiniband/ulp/iser/ib_iser.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/infiniband/ulp/iser/ib_iser.ko drivers/infiniband/ulp/iser/ib_iser.o drivers/infiniband/ulp/iser/ib_iser.mod.o ;  true