/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_827AC29D_E52D_4B1A_874A_C6577E0699CF
#define _AUTOGENH_827AC29D_E52D_4B1A_874A_C6577E0699CF

#ifdef __cplusplus
extern "C" {
#endif

#include <PiMm.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x827AC29D, 0xE52D, 0x4B1A, {0x87, 0x4A, 0xC6, 0x57, 0x7E, 0x06, 0x99, 0xCF}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiFirmwarePerformanceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiSmmLockBoxCommunicationGuid;
extern EFI_GUID gEdkiiEndOfS3ResumeGuid;
extern EFI_GUID gEfiMmPeiMmramMemoryReserveGuid;
extern EFI_GUID gEfiSmmSmramMemoryGuid;

// Protocols
extern EFI_GUID gEfiMmRscHandlerProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiMmReadyToLockProtocolGuid;
extern EFI_GUID gEfiMmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiMmSxDispatchProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdProgressCodeS3SuspendStart  0U
#define _PCD_SIZE_PcdProgressCodeS3SuspendStart 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeS3SuspendStart  _PCD_SIZE_PcdProgressCodeS3SuspendStart 
#define _PCD_VALUE_PcdProgressCodeS3SuspendStart  0x03078000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendStart;
#define _PCD_GET_MODE_32_PcdProgressCodeS3SuspendStart  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendStart
//#define _PCD_SET_MODE_32_PcdProgressCodeS3SuspendStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeS3SuspendEnd  0U
#define _PCD_SIZE_PcdProgressCodeS3SuspendEnd 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeS3SuspendEnd  _PCD_SIZE_PcdProgressCodeS3SuspendEnd 
#define _PCD_VALUE_PcdProgressCodeS3SuspendEnd  0x03078001U
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendEnd;
#define _PCD_GET_MODE_32_PcdProgressCodeS3SuspendEnd  _gPcd_FixedAtBuild_PcdProgressCodeS3SuspendEnd
//#define _PCD_SET_MODE_32_PcdProgressCodeS3SuspendEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FirmwarePerformanceStandaloneMmEntryPoint (
  IN EFI_HANDLE            ImageHandle,
  IN EFI_MM_SYSTEM_TABLE   *MmSystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
