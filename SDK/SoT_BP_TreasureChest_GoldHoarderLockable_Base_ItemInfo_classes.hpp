#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo.BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C
// 0x0008 (0x07C8 - 0x07C0)
class ABP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C : public ALockedCollectorsChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo.BP_TreasureChest_GoldHoarderLockable_Base_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
