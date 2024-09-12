/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D8E58437_44D3_4154_B7A7_EB794923EF12
#define _AUTOGENH_D8E58437_44D3_4154_B7A7_EB794923EF12

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiVTUTF8Guid;
extern GUID gEfiVT100Guid;
extern GUID gEfiVT100PlusGuid;
extern GUID gEfiPcAnsiGuid;
extern GUID gEfiUartDevicePathGuid;
extern GUID gEfiSasDevicePathGuid;
extern GUID gEfiVirtualDiskGuid;
extern GUID gEfiVirtualCdGuid;
extern GUID gEfiPersistentVirtualDiskGuid;
extern GUID gEfiPersistentVirtualCdGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern GUID gEfiDevicePathProtocolGuid;
extern GUID gEfiDebugPortProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount 0
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount _PCD_SIZE_PcdMaximumDevicePathNodeCount


#ifdef __cplusplus
}
#endif

#endif
