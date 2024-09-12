#ifndef SECURE_SET_VARIABLE_PROTOCOL_H
#define SECURE_SET_VARIABLE_PROTOCOL_H

#include "Uefi.h"

// Define a GUID for the protocol
#define SECURE_SET_VARIABLE_PROTOCOL_GUID \
    { 0xd4bcb1b4, 0x1e68, 0x47cf, { 0xb4, 0x91, 0x4d, 0x8b, 0x18, 0xc8, 0xc4, 0x0a } }

typedef struct _SECURE_SET_VARIABLE_PROTOCOL {
    EFI_SET_VARIABLE OriginalSetVariable;
    BOOLEAN HookRegistered;
} SECURE_SET_VARIABLE_PROTOCOL;

// Declare the protocol GUID
extern EFI_GUID gSecureSetVariableProtocolGuid;

#endif // SET_VARIABLE_HOOK_PROTOCOL_H
