#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissarySecuredLootOnShip_RB_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissarySecuredLootOnShip_RB_PromptAccessKey.EmissarySecuredLootOnShip_RB_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UEmissarySecuredLootOnShip_RB_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmissarySecuredLootOnShip_RB_PromptAccessKey.EmissarySecuredLootOnShip_RB_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
