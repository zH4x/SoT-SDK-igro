#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailHoist_FrontSail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailHoist_FrontSail.BP_SailHoist_FrontSail_C
// 0x0000 (0x0848 - 0x0848)
class ABP_SailHoist_FrontSail_C : public ABP_SailHoist_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SailHoist_FrontSail.BP_SailHoist_FrontSail_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
