#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SD_Rank03_RankDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SD_Rank03_RankDesc.BP_SD_Rank03_RankDesc_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_SD_Rank03_RankDesc_C : public URankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SD_Rank03_RankDesc.BP_SD_Rank03_RankDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
