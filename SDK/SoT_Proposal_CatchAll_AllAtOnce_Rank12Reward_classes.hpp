#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_CatchAll_AllAtOnce_Rank12Reward_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_CatchAll_AllAtOnce_Rank12Reward.Proposal_CatchAll_AllAtOnce_Rank12Reward_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_CatchAll_AllAtOnce_Rank12Reward_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_CatchAll_AllAtOnce_Rank12Reward.Proposal_CatchAll_AllAtOnce_Rank12Reward_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
