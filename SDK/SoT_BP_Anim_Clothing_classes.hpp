#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Clothing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Clothing.BP_Anim_Clothing_C
// 0x0000 (0x1BD5 - 0x1BD5)
class UBP_Anim_Clothing_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Clothing.BP_Anim_Clothing_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
