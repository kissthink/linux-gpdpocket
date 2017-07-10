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

MODULE_ALIAS("i2c:lp8550");
MODULE_ALIAS("i2c:lp8551");
MODULE_ALIAS("i2c:lp8552");
MODULE_ALIAS("i2c:lp8553");
MODULE_ALIAS("i2c:lp8555");
MODULE_ALIAS("i2c:lp8556");
MODULE_ALIAS("i2c:lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8550");
MODULE_ALIAS("of:N*T*Cti,lp8550C*");
MODULE_ALIAS("of:N*T*Cti,lp8551");
MODULE_ALIAS("of:N*T*Cti,lp8551C*");
MODULE_ALIAS("of:N*T*Cti,lp8552");
MODULE_ALIAS("of:N*T*Cti,lp8552C*");
MODULE_ALIAS("of:N*T*Cti,lp8553");
MODULE_ALIAS("of:N*T*Cti,lp8553C*");
MODULE_ALIAS("of:N*T*Cti,lp8555");
MODULE_ALIAS("of:N*T*Cti,lp8555C*");
MODULE_ALIAS("of:N*T*Cti,lp8556");
MODULE_ALIAS("of:N*T*Cti,lp8556C*");
MODULE_ALIAS("of:N*T*Cti,lp8557");
MODULE_ALIAS("of:N*T*Cti,lp8557C*");
