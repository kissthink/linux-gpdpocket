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
"depends=videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-core,videobuf2-dma-contig,videobuf2-dma-sg";

MODULE_ALIAS("pci:v00009413d00006010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009413d00006110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D444ED15F188589493FFFD");
