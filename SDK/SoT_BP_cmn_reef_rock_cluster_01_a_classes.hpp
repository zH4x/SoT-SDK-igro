#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_reef_rock_cluster_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_reef_rock_cluster_01_a.BP_cmn_reef_rock_cluster_01_a_C
// 0x0000 (0x0515 - 0x0515)
class ABP_cmn_reef_rock_cluster_01_a_C : public ABP_Placement_Garden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_reef_rock_cluster_01_a.BP_cmn_reef_rock_cluster_01_a_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
