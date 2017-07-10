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
"depends=hwmon-vid";

MODULE_ALIAS("of:N*T*Cadi,adt7473");
MODULE_ALIAS("of:N*T*Cadi,adt7473C*");
MODULE_ALIAS("of:N*T*Cadi,adt7475");
MODULE_ALIAS("of:N*T*Cadi,adt7475C*");
MODULE_ALIAS("of:N*T*Cadi,adt7476");
MODULE_ALIAS("of:N*T*Cadi,adt7476C*");
MODULE_ALIAS("of:N*T*Cadi,adt7490");
MODULE_ALIAS("of:N*T*Cadi,adt7490C*");
MODULE_ALIAS("i2c:adt7473");
MODULE_ALIAS("i2c:adt7475");
MODULE_ALIAS("i2c:adt7476");
MODULE_ALIAS("i2c:adt7490");
