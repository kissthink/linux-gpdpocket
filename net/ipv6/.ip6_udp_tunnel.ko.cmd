cmd_net/ipv6/ip6_udp_tunnel.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/ipv6/ip6_udp_tunnel.ko net/ipv6/ip6_udp_tunnel.o net/ipv6/ip6_udp_tunnel.mod.o ;  true
