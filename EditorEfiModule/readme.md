To run qemu and use built image with RU.efi enter to win cmd from C:\Program Files\qemu\ the following command:

qemu-system-x86_64.exe  -drive if=pflash,format=raw,readonly=off,file=edk2/OVMF.fd ^
                        -drive file=ru_efi/ru-efi.img,format=raw,index=0,media=disk ^
                        -drive file=hook_efi/hook-efi.img,format=raw,index=1,media=disk ^
                        -drive file=editor_efi/editor-efi.img,format=raw,index=2,media=disk ^
                        -m 512M -net none -display sdl