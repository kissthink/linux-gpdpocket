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

MODULE_ALIAS("of:N*T*Cadi,adm1027");
MODULE_ALIAS("of:N*T*Cadi,adm1027C*");
MODULE_ALIAS("of:N*T*Cadi,adt7463");
MODULE_ALIAS("of:N*T*Cadi,adt7463C*");
MODULE_ALIAS("of:N*T*Cadi,adt7468");
MODULE_ALIAS("of:N*T*Cadi,adt7468C*");
MODULE_ALIAS("of:N*T*Cnational,lm85");
MODULE_ALIAS("of:N*T*Cnational,lm85C*");
MODULE_ALIAS("of:N*T*Cnational,lm85b");
MODULE_ALIAS("of:N*T*Cnational,lm85bC*");
MODULE_ALIAS("of:N*T*Cnational,lm85c");
MODULE_ALIAS("of:N*T*Cnational,lm85cC*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103s");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103sC*");
MODULE_ALIAS("i2c:adm1027");
MODULE_ALIAS("i2c:adt7463");
MODULE_ALIAS("i2c:adt7468");
MODULE_ALIAS("i2c:lm85");
MODULE_ALIAS("i2c:lm85b");
MODULE_ALIAS("i2c:lm85c");
MODULE_ALIAS("i2c:emc6d100");
MODULE_ALIAS("i2c:emc6d101");
MODULE_ALIAS("i2c:emc6d102");
MODULE_ALIAS("i2c:emc6d103");
MODULE_ALIAS("i2c:emc6d103s");
