#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_Proxy_Rare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Rare.BP_ShipwreckTreasureChest_Proxy_Rare_C
// 0x0000 (0x0A60 - 0x0A60)
class ABP_ShipwreckTreasureChest_Proxy_Rare_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Rare.BP_ShipwreckTreasureChest_Proxy_Rare_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
