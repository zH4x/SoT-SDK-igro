#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAngle_MiddleSail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailAngle_MiddleSail.BP_SailAngle_MiddleSail_C
// 0x0000 (0x0850 - 0x0850)
class ABP_SailAngle_MiddleSail_C : public ABP_SailAngle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SailAngle_MiddleSail.BP_SailAngle_MiddleSail_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
