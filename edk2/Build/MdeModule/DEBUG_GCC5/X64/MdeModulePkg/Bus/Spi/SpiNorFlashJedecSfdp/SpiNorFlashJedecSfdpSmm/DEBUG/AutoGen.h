/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AC7884C7_35A2_40AC_B9E0_AD67298E3BBA
#define _AUTOGENH_AC7884C7_35A2_40AC_B9E0_AD67298E3BBA

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xAC7884C7, 0x35A2, 0x40AC, {0xB9, 0xE0, 0xAD, 0x67, 0x29, 0x8E, 0x3B, 0xBA}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEdk2JedecSfdpSpiSmmDriverGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiVTUTF8Guid;
extern EFI_GUID gEfiVT100Guid;
extern EFI_GUID gEfiVT100PlusGuid;
extern EFI_GUID gEfiPcAnsiGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiSasDevicePathGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiPersistentVirtualDiskGuid;
extern EFI_GUID gEfiPersistentVirtualCdGuid;

// Protocols
extern EFI_GUID gEfiSpiSmmNorFlashProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSpiNorFlashOperationRetryCount  0U
#define _PCD_SIZE_PcdSpiNorFlashOperationRetryCount 4
#define _PCD_GET_MODE_SIZE_PcdSpiNorFlashOperationRetryCount  _PCD_SIZE_PcdSpiNorFlashOperationRetryCount 
#define _PCD_VALUE_PcdSpiNorFlashOperationRetryCount  0x00000003U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSpiNorFlashOperationRetryCount;
#define _PCD_GET_MODE_32_PcdSpiNorFlashOperationRetryCount  _gPcd_FixedAtBuild_PcdSpiNorFlashOperationRetryCount
//#define _PCD_SET_MODE_32_PcdSpiNorFlashOperationRetryCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpiNorFlashFixedTimeoutRetryCount  0U
#define _PCD_SIZE_PcdSpiNorFlashFixedTimeoutRetryCount 4
#define _PCD_GET_MODE_SIZE_PcdSpiNorFlashFixedTimeoutRetryCount  _PCD_SIZE_PcdSpiNorFlashFixedTimeoutRetryCount 
#define _PCD_VALUE_PcdSpiNorFlashFixedTimeoutRetryCount  0x0000FFFFU
extern const  UINT32  _gPcd_FixedAtBuild_PcdSpiNorFlashFixedTimeoutRetryCount;
#define _PCD_GET_MODE_32_PcdSpiNorFlashFixedTimeoutRetryCount  _gPcd_FixedAtBuild_PcdSpiNorFlashFixedTimeoutRetryCount
//#define _PCD_SET_MODE_32_PcdSpiNorFlashFixedTimeoutRetryCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpiNorFlashOperationDelayMicroseconds  0U
#define _PCD_SIZE_PcdSpiNorFlashOperationDelayMicroseconds 4
#define _PCD_GET_MODE_SIZE_PcdSpiNorFlashOperationDelayMicroseconds  _PCD_SIZE_PcdSpiNorFlashOperationDelayMicroseconds 
#define _PCD_VALUE_PcdSpiNorFlashOperationDelayMicroseconds  0x00000010U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSpiNorFlashOperationDelayMicroseconds;
#define _PCD_GET_MODE_32_PcdSpiNorFlashOperationDelayMicroseconds  _gPcd_FixedAtBuild_PcdSpiNorFlashOperationDelayMicroseconds
//#define _PCD_SET_MODE_32_PcdSpiNorFlashOperationDelayMicroseconds  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
SpiNorFlashJedecSfdpSmmEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
