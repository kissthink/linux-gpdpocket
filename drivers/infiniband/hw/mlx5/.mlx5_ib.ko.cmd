cmd_drivers/infiniband/hw/mlx5/mlx5_ib.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/infiniband/hw/mlx5/mlx5_ib.ko drivers/infiniband/hw/mlx5/mlx5_ib.o drivers/infiniband/hw/mlx5/mlx5_ib.mod.o ;  true