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
"depends=scsi_transport_sas,raid_class";

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47AC7E48B433097EC7E1AE2");
