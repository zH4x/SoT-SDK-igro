#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LotS_reward009_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LotS_reward009.BP_LotS_reward009_C
// 0x0020 (0x0450 - 0x0430)
class ABP_LotS_reward009_C : public AInteractableBase
{
public:
	class UNPCDialogComponent*                         InspectDialog;                                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractionRegion;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LotS_reward009.BP_LotS_reward009_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
