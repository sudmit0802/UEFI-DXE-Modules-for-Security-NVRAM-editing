#include <Uefi.h>
#include <SecureSetVariableProtocol.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PrintLib.h>
#include <Library/BaseMemoryLib.h>

EFI_GUID gSecureSetVariableProtocolGuid = SECURE_SET_VARIABLE_PROTOCOL_GUID;

SECURE_SET_VARIABLE_PROTOCOL mSecureSetVariableProtocol = {
    .OriginalSetVariable = NULL,
    .HookRegistered = FALSE
};

// Hooked function for SetVariable
EFI_STATUS EFIAPI HookedSetVariable(
    IN CHAR16 *VariableName,
    IN EFI_GUID *VendorGuid,
    IN UINT32 Attributes,
    IN UINTN DataSize,
    IN VOID *Data
) {
    if (StrCmp(VariableName, L"Lang") == 0) {
        Print(L"\nBlocked changing NVRAM variable: %s\n", VariableName);
        return EFI_ACCESS_DENIED;
    }
    return mSecureSetVariableProtocol.OriginalSetVariable(VariableName, VendorGuid, Attributes, DataSize, Data);
}

// Register the hook for SetVariable
EFI_STATUS EFIAPI RegisterHook() {

    mSecureSetVariableProtocol.OriginalSetVariable = gRT->SetVariable;
    mSecureSetVariableProtocol.HookRegistered = TRUE;
    Print(L"\nSetVariable hook registered successfully.\n");

    return EFI_SUCCESS;
}

// Entry point for DXE driver
EFI_STATUS EFIAPI HookDxeEntryPoint(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
) {

    EFI_STATUS Status;

    // Print a message indicating the driver has been loaded
    Print(L"\nHook DXE Loaded\n");

    // Register the hook during DXE phase
    Status = RegisterHook();
    if (EFI_ERROR(Status)) {
        Print(L"\nFailed to register the hook.\n");
        return Status;
    }

        Status = gBS->InstallProtocolInterface(
        &ImageHandle,
        &gSecureSetVariableProtocolGuid,
        EFI_NATIVE_INTERFACE,
        &mSecureSetVariableProtocol
    );
    
    if (EFI_ERROR(Status)) {
        Print(L"\nFailed to install protocol.\n");
        return Status;
    }

    Print(L"\nSetVariable hook protocol installed successfully.\n");

    return EFI_SUCCESS;
}
