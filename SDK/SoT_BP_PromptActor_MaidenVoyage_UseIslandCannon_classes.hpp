#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_MaidenVoyage_UseIslandCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_MaidenVoyage_UseIslandCannon.BP_PromptActor_MaidenVoyage_UseIslandCannon_C
// 0x00F0 (0x0588 - 0x0498)
class ABP_PromptActor_MaidenVoyage_UseIslandCannon_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_MaidenVoyage_UseIslandCannon_C*   PromptCoordinator_UseIslandCannon;                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WieldedItemType;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredInput;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                Prompt_EquipItem;                                         // 0x04B8(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseItem;                                           // 0x0520(0x0068) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_MaidenVoyage_UseIslandCannon.BP_PromptActor_MaidenVoyage_UseIslandCannon_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseIslandCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
