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
"depends=snd-pcm,snd-ac97-codec,snd";

MODULE_ALIAS("pci:v0000125Dd00001988sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001989sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001990sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001992sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001998sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001999sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Asv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Bsv*sd*bc04sc01i*");
