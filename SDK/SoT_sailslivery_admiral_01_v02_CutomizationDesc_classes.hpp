#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sailslivery_admiral_01_v02_CutomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sailslivery_admiral_01_v02_CutomizationDesc.sailslivery_admiral_01_v02_CutomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class Usailslivery_admiral_01_v02_CutomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sailslivery_admiral_01_v02_CutomizationDesc.sailslivery_admiral_01_v02_CutomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
