/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_86D70125_BAA3_4296_A62F_602BEBBB9081
#define _AUTOGENH_86D70125_BAA3_4296_A62F_602BEBBB9081

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x86D70125, 0xBAA3, 0x4296, {0xA6, 0x2F, 0x60, 0x2B, 0xEB, 0xBB, 0x90, 0x81}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEfiDxeIplPpiGuid;
extern EFI_GUID gEfiPeiDecompressPpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gEfiPeiLoadFilePpiGuid;
extern EFI_GUID gEfiPeiS3Resume2PpiGuid;
extern EFI_GUID gEfiPeiRecoveryModulePpiGuid;
extern EFI_GUID gEfiVectorHandoffInfoPpiGuid;
extern EFI_GUID gEfiPeiMemoryDiscoveredPpiGuid;
extern EFI_GUID gEdkiiPeiBootInCapsuleOnDiskModePpiGuid;
extern EFI_GUID gEdkiiPeiCapsuleOnDiskPpiGuid;
extern EFI_GUID gEdkiiMemoryAttributePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdDxeIplBuildPageTables  0U
#define _PCD_SIZE_PcdDxeIplBuildPageTables 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplBuildPageTables  _PCD_SIZE_PcdDxeIplBuildPageTables 
#define _PCD_VALUE_PcdDxeIplBuildPageTables  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplBuildPageTables;
#define _PCD_GET_MODE_BOOL_PcdDxeIplBuildPageTables  _gPcd_FixedAtBuild_PcdDxeIplBuildPageTables
//#define _PCD_SET_MODE_BOOL_PcdDxeIplBuildPageTables  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDxeIplSupportUefiDecompress  0U
#define _PCD_SIZE_PcdDxeIplSupportUefiDecompress 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSupportUefiDecompress  _PCD_SIZE_PcdDxeIplSupportUefiDecompress 
#define _PCD_VALUE_PcdDxeIplSupportUefiDecompress  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSupportUefiDecompress;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSupportUefiDecompress  _gPcd_FixedAtBuild_PcdDxeIplSupportUefiDecompress
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSupportUefiDecompress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  0U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask  0U
#define _PCD_SIZE_PcdPteMemoryEncryptionAddressOrMask 8
#define _PCD_GET_MODE_SIZE_PcdPteMemoryEncryptionAddressOrMask  _PCD_SIZE_PcdPteMemoryEncryptionAddressOrMask 
#define _PCD_VALUE_PcdPteMemoryEncryptionAddressOrMask  0x0ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPteMemoryEncryptionAddressOrMask;
#define _PCD_GET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  _gPcd_FixedAtBuild_PcdPteMemoryEncryptionAddressOrMask
//#define _PCD_SET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdNullPointerDetectionPropertyMask  0U
#define _PCD_SIZE_PcdNullPointerDetectionPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdNullPointerDetectionPropertyMask  _PCD_SIZE_PcdNullPointerDetectionPropertyMask 
#define _PCD_VALUE_PcdNullPointerDetectionPropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask;
#define _PCD_GET_MODE_8_PcdNullPointerDetectionPropertyMask  _gPcd_FixedAtBuild_PcdNullPointerDetectionPropertyMask
//#define _PCD_SET_MODE_8_PcdNullPointerDetectionPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHeapGuardPropertyMask  0U
#define _PCD_SIZE_PcdHeapGuardPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdHeapGuardPropertyMask  _PCD_SIZE_PcdHeapGuardPropertyMask 
#define _PCD_VALUE_PcdHeapGuardPropertyMask  0x0U
extern const  UINT8  _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask;
#define _PCD_GET_MODE_8_PcdHeapGuardPropertyMask  _gPcd_FixedAtBuild_PcdHeapGuardPropertyMask
//#define _PCD_SET_MODE_8_PcdHeapGuardPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuStackGuard  0U
#define _PCD_SIZE_PcdCpuStackGuard 1
#define _PCD_GET_MODE_SIZE_PcdCpuStackGuard  _PCD_SIZE_PcdCpuStackGuard 
#define _PCD_VALUE_PcdCpuStackGuard  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCpuStackGuard;
#define _PCD_GET_MODE_BOOL_PcdCpuStackGuard  _gPcd_FixedAtBuild_PcdCpuStackGuard
//#define _PCD_SET_MODE_BOOL_PcdCpuStackGuard  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse5LevelPageTable  0U
#define _PCD_SIZE_PcdUse5LevelPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse5LevelPageTable  _PCD_SIZE_PcdUse5LevelPageTable 
#define _PCD_VALUE_PcdUse5LevelPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse5LevelPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse5LevelPageTable  _gPcd_FixedAtBuild_PcdUse5LevelPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse5LevelPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGhcbBase  0U
#define _PCD_GET_MODE_64_PcdGhcbBase  LibPcdGet64(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_GET_MODE_SIZE_PcdGhcbBase  LibPcdGetSize(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_SET_MODE_64_PcdGhcbBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbBase, (Value))

#define _PCD_TOKEN_PcdGhcbSize  0U
#define _PCD_GET_MODE_64_PcdGhcbSize  LibPcdGet64(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_GET_MODE_SIZE_PcdGhcbSize  LibPcdGetSize(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_SET_MODE_64_PcdGhcbSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbSize, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbSize, (Value))

#define _PCD_TOKEN_PcdDxeNxMemoryProtectionPolicy  0U
#define _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 8
#define _PCD_GET_MODE_SIZE_PcdDxeNxMemoryProtectionPolicy  _PCD_SIZE_PcdDxeNxMemoryProtectionPolicy 
#define _PCD_VALUE_PcdDxeNxMemoryProtectionPolicy  0x0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy;
#define _PCD_GET_MODE_64_PcdDxeNxMemoryProtectionPolicy  _gPcd_FixedAtBuild_PcdDxeNxMemoryProtectionPolicy
//#define _PCD_SET_MODE_64_PcdDxeNxMemoryProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdImageProtectionPolicy  0U
#define _PCD_SIZE_PcdImageProtectionPolicy 4
#define _PCD_GET_MODE_SIZE_PcdImageProtectionPolicy  _PCD_SIZE_PcdImageProtectionPolicy 
#define _PCD_VALUE_PcdImageProtectionPolicy  0x00000002U
extern const  UINT32  _gPcd_FixedAtBuild_PcdImageProtectionPolicy;
#define _PCD_GET_MODE_32_PcdImageProtectionPolicy  _gPcd_FixedAtBuild_PcdImageProtectionPolicy
//#define _PCD_SET_MODE_32_PcdImageProtectionPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSetNxForStack  0U
#define _PCD_SIZE_PcdSetNxForStack 1
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  _PCD_SIZE_PcdSetNxForStack 
#define _PCD_VALUE_PcdSetNxForStack  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSetNxForStack;
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  _gPcd_FixedAtBuild_PcdSetNxForStack
//#define _PCD_SET_MODE_BOOL_PcdSetNxForStack  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeDxeIpl (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
