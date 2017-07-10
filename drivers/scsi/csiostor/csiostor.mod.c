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
"depends=scsi_transport_fc";

MODULE_ALIAS("pci:v00001425d00004600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005618sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005695sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005697sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000660Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006681sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5DFDC6D5AB39EEA58255F6B");
