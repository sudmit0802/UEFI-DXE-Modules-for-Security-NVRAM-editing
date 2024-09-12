/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_31e147a6_d39a_4147_9da3_befd4d523243
#define _AUTOGENH_31e147a6_d39a_4147_9da3_befd4d523243

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x31e147a6, 0xd39a, 0x4147, {0x9d, 0xa3, 0xbe, 0xfd, 0x4d, 0x52, 0x32, 0x43}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}}

// Guids
extern EFI_GUID gRecoveryOnDataCdGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gEfiPeiVirtualBlockIoPpiGuid;
extern EFI_GUID gEfiPeiVirtualBlockIo2PpiGuid;
extern EFI_GUID gEfiPeiDeviceRecoveryModulePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

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
CdExpressPeimEntry (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
