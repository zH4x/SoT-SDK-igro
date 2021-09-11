#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Legendary_Rome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Legendary_Rome.BP_TreasureChest_ItemInfo_Legendary_Rome_C
// 0x0018 (0x07F0 - 0x07D8)
class ABP_TreasureChest_ItemInfo_Legendary_Rome_C : public ATreasureChestItemInfo
{
public:
	class UGenericWorldMapMarker*                      GenericWorldMapMarker;                                    // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UContestOutOfBoundsComponent*                ContestOutOfBounds;                                       // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Legendary_Rome.BP_TreasureChest_ItemInfo_Legendary_Rome_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
