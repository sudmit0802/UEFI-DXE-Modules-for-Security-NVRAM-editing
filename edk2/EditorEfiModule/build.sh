#!/bin/bash

# Удаляем образ и предыдущие сборки
sudo rm -rf editor-efi.img
sudo rm -rf $EDK_PATH/Build/MdeModule/DEBUG_GCC5/X64/EditorEfiModule

build -a X64 -t GCC5 clean
build -a X64 -t GCC5 -p MdeModulePkg/MdeModulePkg.dsc

# Создаем пустой образ диска, форматируем его и монтируем
dd if=/dev/zero of=editor-efi.img bs=1M count=64
mkfs.vfat editor-efi.img
sudo mkdir /mnt/editor-efi
sudo mount -o loop editor-efi.img /mnt/editor-efi

# Копируем собранный EFI модуль в образ
sudo cp $EDK_PATH/Build/MdeModule/DEBUG_GCC5/X64/EditorEfiModule/EditorEfi/DEBUG/editor.efi /mnt/editor-efi/

# Размонтируем и удаляем временную директорию
sudo umount /mnt/editor-efi
sudo rmdir /mnt/editor-efi
