#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/BaseLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/PrintLib.h>
#include <Library/UefiDriverEntryPoint.h>
#include <SecureSetVariableProtocol.h>

EFI_GUID gSecureSetVariableProtocolGuid = SECURE_SET_VARIABLE_PROTOCOL_GUID;


// Menu display function
VOID DisplayMenu() {
    Print(L"\nMenu:\n");
    Print(L"1) Show original SetVariable pointer\n");
    Print(L"2) Modify \"Lang\" variable\n");
    Print(L"3) Modify \"PlatformLang\" variable\n");
    Print(L"4) Modify \"OsIndicationsSupported\" variable\n");
    Print(L"5) Exit\n");
    Print(L"Enter your choice >> ");
}

EFI_INPUT_KEY WaitForKeyPress() {
    EFI_STATUS Status;
    EFI_INPUT_KEY Key;

    // Wait for key press event
    UINTN EventIndex;
    gBS->WaitForEvent(1, &(gST->ConIn->WaitForKey), &EventIndex);

    // Read the key press
    Status = gST->ConIn->ReadKeyStroke(gST->ConIn, &Key);
    if (EFI_ERROR(Status)) {
        Key.UnicodeChar = 0;
    }

    return Key;
}

// Main application entry point
EFI_STATUS EFIAPI EditorEntry(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
) {
    
    EFI_STATUS Status;

    SECURE_SET_VARIABLE_PROTOCOL *SecureSetVariableProtocol = NULL;

    Status = gBS->LocateProtocol(
        &gSecureSetVariableProtocolGuid,
        NULL,
        (VOID **)&SecureSetVariableProtocol
    );
    if (EFI_ERROR(Status)) {
        Print(L"\nFailed to locate secure SetVariable protocol.\n");
        return Status;
    }



    EFI_INPUT_KEY Key;
    BOOLEAN Exit = FALSE;

    while (!Exit) {

        DisplayMenu();

        Key = WaitForKeyPress();
        Print(L"%c", Key.UnicodeChar);

        switch (Key.UnicodeChar) {
            case '1':
            {
                if (SecureSetVariableProtocol->HookRegistered) {
                    Print(L"\nOriginal SetVariable: 0x%p\n", SecureSetVariableProtocol->OriginalSetVariable);
                } else {
                    Print(L"\nHook is not registered.\n");
                }
                break;
            }  
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                Exit = TRUE;
                Print(L"\nExiting to QEMU shell...\n");
                break;
            default:
                Print(L"\nInvalid option, try again.\n");
                break;
        }
    }

    return EFI_SUCCESS;
}