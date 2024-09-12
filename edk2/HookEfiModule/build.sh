#!/bin/bash

# Удаляем образ и предыдущие сборки
sudo rm -rf hook-efi.img
sudo rm -rf $EDK_PATH/Build/MdeModule/DEBUG_GCC5/X64/HookEfiModule

build -a X64 -t GCC5 clean
build -a X64 -t GCC5 -p MdeModulePkg/MdeModulePkg.dsc

# Создаем пустой образ диска, форматируем его и монтируем
dd if=/dev/zero of=hook-efi.img bs=1M count=64
mkfs.vfat hook-efi.img
sudo mkdir /mnt/hook-efi
sudo mount -o loop hook-efi.img /mnt/hook-efi

# Копируем собранный EFI модуль в образ
sudo cp $EDK_PATH/Build/MdeModule/DEBUG_GCC5/X64/HookEfiModule/HookEfi/DEBUG/hook.efi /mnt/hook-efi/

# Размонтируем и удаляем временную директорию
sudo umount /mnt/hook-efi
sudo rmdir /mnt/hook-efi
