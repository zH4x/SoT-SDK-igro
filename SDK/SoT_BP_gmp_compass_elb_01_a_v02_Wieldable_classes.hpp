#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_gmp_compass_elb_01_a_v02_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_gmp_compass_elb_01_a_v02_Wieldable.BP_gmp_compass_elb_01_a_v02_Wieldable_C
// 0x0000 (0x08E8 - 0x08E8)
class ABP_gmp_compass_elb_01_a_v02_Wieldable_C : public ABP_Compass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_gmp_compass_elb_01_a_v02_Wieldable.BP_gmp_compass_elb_01_a_v02_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
