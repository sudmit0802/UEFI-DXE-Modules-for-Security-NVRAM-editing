#!/bin/bash
sudo rm -rf hook-efi.img
cd ../
sudo rm -rf Build/MdeModule/DEBUG_GCC5/X64/HookEfiModule
source edksetup.sh
cd HookEfiModule
build -a X64 -t GCC5 clean
build -a X64 -t GCC5 -p MdeModulePkg/MdeModulePkg.dsc
dd if=/dev/zero of=hook-efi.img bs=1M count=64
mkfs.vfat hook-efi.img
sudo  mkdir /mnt/hook-efi
sudo mount -o loop hook-efi.img /mnt/hook-efi
cd ../
sudo cp Build/MdeModule/DEBUG_GCC5/X64/HookEfiModule/HookEfi/DEBUG/hook.efi /mnt/hook-efi/
cd HookEfiModule
sudo umount /mnt/hook-efi
sudo rmdir /mnt/hook-efi