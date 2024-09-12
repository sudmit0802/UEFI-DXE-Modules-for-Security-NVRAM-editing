/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_DF61C3DC_B08C_44B7_B771_9E4BCBBE0811
#define _AUTOGENH_DF61C3DC_B08C_44B7_B771_9E4BCBBE0811

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiEndOfDxeEventGroupGuid;
extern EFI_GUID gEdkiiPiSmmCommunicationRegionTableGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiMmEndOfDxeProtocolGuid;
extern EFI_GUID gEfiMmCommunicationProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiFirmwareVolumeBlock2ProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdVarCheckVfrDriverGuidArray  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdVarCheckVfrDriverGuidArray[];
#define _PCD_GET_MODE_PTR_PcdVarCheckVfrDriverGuidArray  (VOID *)_gPcd_FixedAtBuild_PcdVarCheckVfrDriverGuidArray
//#define _PCD_SET_MODE_PTR_PcdVarCheckVfrDriverGuidArray  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdVarCheckVfrDriverGuidArray (VOID *)_gPcd_FixedAtBuild_PcdVarCheckVfrDriverGuidArray
#define _PCD_SIZE_PcdVarCheckVfrDriverGuidArray 16
#define _PCD_GET_MODE_SIZE_PcdVarCheckVfrDriverGuidArray _PCD_SIZE_PcdVarCheckVfrDriverGuidArray

EFI_STATUS
EFIAPI
VarCheckHiiLibMmDependencyConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
