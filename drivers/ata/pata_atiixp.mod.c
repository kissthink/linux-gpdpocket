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
"depends=";

MODULE_ALIAS("pci:v00001002d00004349sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000438Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000439Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "94A7AFE53A2C439AB9E080A");
