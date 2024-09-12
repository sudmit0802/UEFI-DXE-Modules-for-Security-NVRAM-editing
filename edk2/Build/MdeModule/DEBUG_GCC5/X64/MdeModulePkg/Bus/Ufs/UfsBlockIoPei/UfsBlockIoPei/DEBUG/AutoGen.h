/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BE189D38_C963_41CF_B695_D90E9E545A13
#define _AUTOGENH_BE189D38_C963_41CF_B695_D90E9E545A13

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBE189D38, 0xC963, 0x41CF, {0xB6, 0x95, 0xD9, 0x0E, 0x9E, 0x54, 0x5A, 0x13}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEfiPeiVirtualBlockIoPpiGuid;
extern EFI_GUID gEfiPeiVirtualBlockIo2PpiGuid;
extern EFI_GUID gEdkiiPeiUfsHostControllerPpiGuid;
extern EFI_GUID gEdkiiIoMmuPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUfsInitialCompletionTimeout  0U
#define _PCD_SIZE_PcdUfsInitialCompletionTimeout 4
#define _PCD_GET_MODE_SIZE_PcdUfsInitialCompletionTimeout  _PCD_SIZE_PcdUfsInitialCompletionTimeout 
#define _PCD_VALUE_PcdUfsInitialCompletionTimeout  600000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdUfsInitialCompletionTimeout;
#define _PCD_GET_MODE_32_PcdUfsInitialCompletionTimeout  _gPcd_FixedAtBuild_PcdUfsInitialCompletionTimeout
//#define _PCD_SET_MODE_32_PcdUfsInitialCompletionTimeout  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeUfsBlockIoPeim (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
