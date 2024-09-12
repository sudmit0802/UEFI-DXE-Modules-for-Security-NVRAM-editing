/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_79CD78D8_6EDC_4978_BD02_3299C387AB17
#define _AUTOGENH_79CD78D8_6EDC_4978_BD02_3299C387AB17

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x79CD78D8, 0x6EDC, 0x4978, {0xBD, 0x02, 0x32, 0x99, 0xC3, 0x87, 0xAB, 0x17}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiStatusCodeDataTypeStringGuid;
extern EFI_GUID gMemoryStatusCodeRecordGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiMmRscHandlerProtocolGuid;
extern EFI_GUID gEfiSmmBase2ProtocolGuid;
extern EFI_GUID gEfiMmBaseProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiSmmAccess2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdStatusCodeUseSerial  0U
#define _PCD_SIZE_PcdStatusCodeUseSerial 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseSerial  _PCD_SIZE_PcdStatusCodeUseSerial 
#define _PCD_VALUE_PcdStatusCodeUseSerial  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseSerial  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseSerial  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeUseMemory  0U
#define _PCD_SIZE_PcdStatusCodeUseMemory 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseMemory  _PCD_SIZE_PcdStatusCodeUseMemory 
#define _PCD_VALUE_PcdStatusCodeUseMemory  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseMemory  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeMemorySize  0U
#define _PCD_SIZE_PcdStatusCodeMemorySize 2
#define _PCD_GET_MODE_SIZE_PcdStatusCodeMemorySize  _PCD_SIZE_PcdStatusCodeMemorySize 
#define _PCD_VALUE_PcdStatusCodeMemorySize  128U
extern const  UINT16  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize;
#define _PCD_GET_MODE_16_PcdStatusCodeMemorySize  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize
//#define _PCD_SET_MODE_16_PcdStatusCodeMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
StatusCodeHandlerTraditionalMmEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
