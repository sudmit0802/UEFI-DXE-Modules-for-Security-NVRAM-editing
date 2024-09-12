#!/bin/bash
sudo rm -rf editor-efi.img
cd ../
sudo rm -rf Build/MdeModule/DEBUG_GCC5/X64/EditorEfiModule
source edksetup.sh
cd EditorEfiModule
build -a X64 -t GCC5 clean
build -a X64 -t GCC5 -p MdeModulePkg/MdeModulePkg.dsc
dd if=/dev/zero of=editor-efi.img bs=1M count=64
mkfs.vfat editor-efi.img
sudo  mkdir /mnt/editor-efi
sudo mount -o loop editor-efi.img /mnt/editor-efi
cd ../
sudo cp Build/MdeModule/DEBUG_GCC5/X64/EditorEfiModule/EditorEfi/DEBUG/editor.efi /mnt/editor-efi/
cd EditorEfiModule
sudo umount /mnt/editor-efi
sudo rmdir /mnt/editor-efi