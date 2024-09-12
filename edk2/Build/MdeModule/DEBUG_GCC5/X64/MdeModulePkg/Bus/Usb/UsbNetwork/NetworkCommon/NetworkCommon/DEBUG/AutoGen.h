/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ca6eb4f4_f1d6_4375_97d6_18856871e1bf
#define _AUTOGENH_ca6eb4f4_f1d6_4375_97d6_18856871e1bf

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xca6eb4f4, 0xf1d6, 0x4375, {0x97, 0xd6, 0x18, 0x85, 0x68, 0x71, 0xe1, 0xbf}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
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
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventAfterReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEdkIIUsbEthProtocolGuid;
extern EFI_GUID gEfiDebugPortProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdEnableUsbNetworkRateLimiting  0U
#define _PCD_SIZE_PcdEnableUsbNetworkRateLimiting 1
#define _PCD_GET_MODE_SIZE_PcdEnableUsbNetworkRateLimiting  _PCD_SIZE_PcdEnableUsbNetworkRateLimiting 
#define _PCD_VALUE_PcdEnableUsbNetworkRateLimiting  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdEnableUsbNetworkRateLimiting;
#define _PCD_GET_MODE_BOOL_PcdEnableUsbNetworkRateLimiting  _gPcd_FixedAtBuild_PcdEnableUsbNetworkRateLimiting
//#define _PCD_SET_MODE_BOOL_PcdEnableUsbNetworkRateLimiting  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUsbNetworkRateLimitingCredit  0U
#define _PCD_SIZE_PcdUsbNetworkRateLimitingCredit 4
#define _PCD_GET_MODE_SIZE_PcdUsbNetworkRateLimitingCredit  _PCD_SIZE_PcdUsbNetworkRateLimitingCredit 
#define _PCD_VALUE_PcdUsbNetworkRateLimitingCredit  10U
extern const  UINT32  _gPcd_FixedAtBuild_PcdUsbNetworkRateLimitingCredit;
#define _PCD_GET_MODE_32_PcdUsbNetworkRateLimitingCredit  _gPcd_FixedAtBuild_PcdUsbNetworkRateLimitingCredit
//#define _PCD_SET_MODE_32_PcdUsbNetworkRateLimitingCredit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUsbNetworkRateLimitingFactor  0U
#define _PCD_SIZE_PcdUsbNetworkRateLimitingFactor 4
#define _PCD_GET_MODE_SIZE_PcdUsbNetworkRateLimitingFactor  _PCD_SIZE_PcdUsbNetworkRateLimitingFactor 
#define _PCD_VALUE_PcdUsbNetworkRateLimitingFactor  100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdUsbNetworkRateLimitingFactor;
#define _PCD_GET_MODE_32_PcdUsbNetworkRateLimitingFactor  _gPcd_FixedAtBuild_PcdUsbNetworkRateLimitingFactor
//#define _PCD_SET_MODE_32_PcdUsbNetworkRateLimitingFactor  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
NetworkCommonEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
