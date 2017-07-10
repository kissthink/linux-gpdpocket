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
"depends=c_can";

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");
