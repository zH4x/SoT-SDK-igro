#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AI_wpn_AshenLordUnarmedCombat_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AI_wpn_AshenLordUnarmedCombat_Wieldable.BP_AI_wpn_AshenLordUnarmedCombat_Wieldable_C
// 0x0000 (0x0AB8 - 0x0AB8)
class ABP_AI_wpn_AshenLordUnarmedCombat_Wieldable_C : public ABP_UnarmedCombat_Item_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AI_wpn_AshenLordUnarmedCombat_Wieldable.BP_AI_wpn_AshenLordUnarmedCombat_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
