#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wld_broken_wood_debris_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wld_broken_wood_debris.BP_wld_broken_wood_debris_C
// 0x0000 (0x04CD - 0x04CD)
class ABP_wld_broken_wood_debris_C : public ABP_Placement_Garden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_wld_broken_wood_debris.BP_wld_broken_wood_debris_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
