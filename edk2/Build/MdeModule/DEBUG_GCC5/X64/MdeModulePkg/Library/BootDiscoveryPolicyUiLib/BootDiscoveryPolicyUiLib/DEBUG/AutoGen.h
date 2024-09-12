/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BE73105A_B13D_4B57_A41A_463DBD15FE10
#define _AUTOGENH_BE73105A_B13D_4B57_A41A_463DBD15FE10

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gBootDiscoveryPolicyMgrFormsetGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdBootDiscoveryPolicy  0U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdBootDiscoveryPolicy;
#define _PCD_GET_MODE_32_PcdBootDiscoveryPolicy  _gPcd_BinaryPatch_PcdBootDiscoveryPolicy
#define _PCD_SET_MODE_32_PcdBootDiscoveryPolicy(Value)  (_gPcd_BinaryPatch_PcdBootDiscoveryPolicy = (Value))
#define _PCD_SET_MODE_32_S_PcdBootDiscoveryPolicy(Value)  ((_gPcd_BinaryPatch_PcdBootDiscoveryPolicy = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdBootDiscoveryPolicy_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdBootDiscoveryPolicy _gPcd_BinaryPatch_Size_PcdBootDiscoveryPolicy
extern UINTN _gPcd_BinaryPatch_Size_PcdBootDiscoveryPolicy; 

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "BootDiscoveryPolicyUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
