#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT9_Rank_ShoresOfGold_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT9_Rank_ShoresOfGold.BP_TT9_Rank_ShoresOfGold_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_TT9_Rank_ShoresOfGold_C : public UTaleRankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT9_Rank_ShoresOfGold.BP_TT9_Rank_ShoresOfGold_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
