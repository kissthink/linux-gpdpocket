cmd_kernel/rcu/built-in.o :=  ld -m elf_x86_64   -r -o kernel/rcu/built-in.o kernel/rcu/update.o kernel/rcu/sync.o kernel/rcu/srcutree.o kernel/rcu/tree.o kernel/rcu/rcu_segcblist.o 
