#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_msc_drum_hwm_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_drum_hwm_01_a_Wieldable.BP_msc_drum_hwm_01_a_Wieldable_C
// 0x0000 (0x0850 - 0x0850)
class ABP_msc_drum_hwm_01_a_Wieldable_C : public ABP_Drum_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_msc_drum_hwm_01_a_Wieldable.BP_msc_drum_hwm_01_a_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
