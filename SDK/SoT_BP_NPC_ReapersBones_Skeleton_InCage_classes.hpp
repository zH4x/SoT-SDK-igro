#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NPC_ReapersBones_Skeleton_InCage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C
// 0x0010 (0x05C0 - 0x05B0)
class ABP_NPC_ReapersBones_Skeleton_InCage_C : public ANPC
{
public:
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NPC_ReapersBones_Skeleton_InCage.BP_NPC_ReapersBones_Skeleton_InCage_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
