#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Speaking_Trumpet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Speaking_Trumpet.BP_Speaking_Trumpet_C
// 0x0000 (0x07F8 - 0x07F8)
class ABP_Speaking_Trumpet_C : public ASpeakingTrumpet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Speaking_Trumpet.BP_Speaking_Trumpet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
