#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RomeBeacon_Digsite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RomeBeacon_Digsite.BP_RomeBeacon_Digsite_C
// 0x0008 (0x0538 - 0x0530)
class ABP_RomeBeacon_Digsite_C : public ARomeBeacon
{
public:
	class UParticleSystemComponent*                    vfx_seadogs_chest_smoke;                                  // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RomeBeacon_Digsite.BP_RomeBeacon_Digsite_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
