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

MODULE_ALIAS("pci:v0000105Ad00004D33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D30sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "41A7BB33B9AC0B5A2DE7190");
