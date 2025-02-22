#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_SailStructure.BP_SailStructure
// 0x003C
struct FBP_SailStructure
{
	class UStaticMesh*                                 YardMesh_2_97DED1804977F59BDA6C0F9EDE3DCB81;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     YardScale_5_014BC49D4951D695985280ACF1E353E3;             // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YardHeight_8_478BFD2F48C8B0AE8F82D2979DC520DC;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SailMesh_11_C88B86474D8EC6D91547B98A54EDFDB4;             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SailScale_14_7159DE074098C846A9A94691E22F3472;            // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SailHeight_17_A1AAE59B466B62BFA46630BCC9C8BF4B;           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SailForwardOffset_22_B5D1836D4DCB9FEC94A747BE63D470D3;    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MainSail_19_23FC1D1243700A2C79A9448F38B6A88B;             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              SailForceScalar_27_53C46FC4483F7872B144A5BE94B22057;      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
