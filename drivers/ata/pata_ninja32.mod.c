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

MODULE_ALIAS("pci:v000010FCd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d00008008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001145d0000F02Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0F6905632254ED90EC81819");
