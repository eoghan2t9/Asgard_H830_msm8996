# AnyKernel2 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() {
kernel.string=Asgard Reborn
do.devicecheck=1
do.modules=1
do.cleanup=1
do.cleanuponabort=0
device.name1=h830
device.name2=h850
device.name3=h1
device.name4=rs988
} # end properties

# shell variables
block=/dev/block/bootdevice/by-name/boot;
is_slot_device=0;


## AnyKernel methods (DO NOT CHANGE)
# import patching functions/variables - see for reference
. /tmp/anykernel/tools/ak2-core.sh;

## AnyKernel install
dump_boot;

# init.lge.rc
# Disable LGE Root Checker Tool
replace_file init.lge.rc "0750" "init.lge.rc";

write_boot;

## end install

