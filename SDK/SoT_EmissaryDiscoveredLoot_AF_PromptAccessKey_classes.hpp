#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryDiscoveredLoot_AF_PromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmissaryDiscoveredLoot_AF_PromptAccessKey.EmissaryDiscoveredLoot_AF_PromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class UEmissaryDiscoveredLoot_AF_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass EmissaryDiscoveredLoot_AF_PromptAccessKey.EmissaryDiscoveredLoot_AF_PromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
