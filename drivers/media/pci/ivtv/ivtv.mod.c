#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,tveeprom,cx2341x,i2c-algo-bit";

MODULE_ALIAS("pci:v00004444d00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004444d00000016sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FE2144270F8AD25B35DE63E");
