/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8ADEDF9E_2EC8_40fb_AE56_B76D90225D2D
#define _AUTOGENH_8ADEDF9E_2EC8_40fb_AE56_B76D90225D2D

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x8ADEDF9E, 0x2EC8, 0x40fb, {0xAE, 0x56, 0xB7, 0x6D, 0x90, 0x22, 0x5D, 0x2D}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiCapsuleVendorGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;

// PPIs
extern EFI_GUID gEdkiiPeiCapsuleOnDiskPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEdkiiPeiBootInCapsuleOnDiskModePpiGuid;
extern EFI_GUID gEfiPeiDeviceRecoveryModulePpiGuid;
extern EFI_GUID gEfiPeiCapsulePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdCoDRelocationFileName  0U
#define _PCD_VALUE_PcdCoDRelocationFileName  _gPcd_FixedAtBuild_PcdCoDRelocationFileName
extern const UINT16 _gPcd_FixedAtBuild_PcdCoDRelocationFileName[8];
#define _PCD_GET_MODE_PTR_PcdCoDRelocationFileName  _gPcd_FixedAtBuild_PcdCoDRelocationFileName
#define _PCD_SIZE_PcdCoDRelocationFileName 16
#define _PCD_GET_MODE_SIZE_PcdCoDRelocationFileName  _PCD_SIZE_PcdCoDRelocationFileName 
//#define _PCD_SET_MODE_PTR_PcdCoDRelocationFileName  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCapsuleMax  0U
#define _PCD_SIZE_PcdCapsuleMax 2
#define _PCD_GET_MODE_SIZE_PcdCapsuleMax  _PCD_SIZE_PcdCapsuleMax 
#define _PCD_VALUE_PcdCapsuleMax  0xFFFFU
extern const  UINT16  _gPcd_FixedAtBuild_PcdCapsuleMax;
#define _PCD_GET_MODE_16_PcdCapsuleMax  _gPcd_FixedAtBuild_PcdCapsuleMax
//#define _PCD_SET_MODE_16_PcdCapsuleMax  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdRecoveryFileName  805310533U
#define _PCD_TOKEN_PcdRecoveryFileName  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdRecoveryFileName
#define _PCD_GET_MODE_PTR_PcdRecoveryFileName  LibPcdGetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdRecoveryFileName)
#define _PCD_GET_MODE_SIZE_PcdRecoveryFileName LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdRecoveryFileName)
#define _PCD_SET_MODE_PTR_PcdRecoveryFileName(SizeOfBuffer, Buffer)  LibPcdSetExPtr(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdRecoveryFileName, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdRecoveryFileName(SizeOfBuffer, Buffer)  LibPcdSetExPtrS(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdRecoveryFileName, (SizeOfBuffer), (Buffer))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdRecoveryFileName_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdRecoveryFileName:0 \
  )

#define __PCD_PcdRecoveryFileName_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdRecoveryFileName:0 \
  )
#define _PCD_TOKEN_EX_PcdRecoveryFileName(GuidPtr)   __PCD_PcdRecoveryFileName_ADDR_CMP(GuidPtr) ? __PCD_PcdRecoveryFileName_ADDR_CMP(GuidPtr) : __PCD_PcdRecoveryFileName_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeCapsuleOnDiskLoad (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
