#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign005_CursedSails_ClothingColin_PreCursedSails_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingColin_PreCursedSails.BP_Campaign005_CursedSails_ClothingColin_PreCursedSails_C
// 0x0000 (0x05D0 - 0x05D0)
class ABP_Campaign005_CursedSails_ClothingColin_PreCursedSails_C : public ABP_Clothing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign005_CursedSails_ClothingColin_PreCursedSails.BP_Campaign005_CursedSails_ClothingColin_PreCursedSails_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
