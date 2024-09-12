/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_C61E8C2E_0935_4E3D_BCBB_5ED84AFD9FD1
#define _AUTOGENH_C61E8C2E_0935_4E3D_BCBB_5ED84AFD9FD1

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gTraceHubDebugInfoHobGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdTraceHubDebugLevel  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdTraceHubDebugLevel;
#define _PCD_GET_MODE_8_PcdTraceHubDebugLevel  _gPcd_FixedAtBuild_PcdTraceHubDebugLevel
//#define _PCD_SET_MODE_8_PcdTraceHubDebugLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTraceHubDebugLevel 0
#define _PCD_SIZE_PcdTraceHubDebugLevel 1
#define _PCD_GET_MODE_SIZE_PcdTraceHubDebugLevel _PCD_SIZE_PcdTraceHubDebugLevel
#define _PCD_TOKEN_PcdEnableTraceHubDebugMsg  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdEnableTraceHubDebugMsg;
#define _PCD_GET_MODE_BOOL_PcdEnableTraceHubDebugMsg  _gPcd_FixedAtBuild_PcdEnableTraceHubDebugMsg
//#define _PCD_SET_MODE_BOOL_PcdEnableTraceHubDebugMsg  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdEnableTraceHubDebugMsg 0
#define _PCD_SIZE_PcdEnableTraceHubDebugMsg 1
#define _PCD_GET_MODE_SIZE_PcdEnableTraceHubDebugMsg _PCD_SIZE_PcdEnableTraceHubDebugMsg
#define _PCD_TOKEN_PcdTraceHubDebugMmioAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdTraceHubDebugMmioAddress;
#define _PCD_GET_MODE_64_PcdTraceHubDebugMmioAddress  _gPcd_FixedAtBuild_PcdTraceHubDebugMmioAddress
//#define _PCD_SET_MODE_64_PcdTraceHubDebugMmioAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTraceHubDebugMmioAddress 0
#define _PCD_SIZE_PcdTraceHubDebugMmioAddress 8
#define _PCD_GET_MODE_SIZE_PcdTraceHubDebugMmioAddress _PCD_SIZE_PcdTraceHubDebugMmioAddress


#ifdef __cplusplus
}
#endif

#endif
