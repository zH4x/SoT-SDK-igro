#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cannonenchantment_glitterbeard_01_CustomizationDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cannonenchantment_glitterbeard_01_CustomizationDesc.cannonenchantment_glitterbeard_01_CustomizationDesc_C
// 0x0000 (0x0108 - 0x0108)
class Ucannonenchantment_glitterbeard_01_CustomizationDesc_C : public UShipCustomizationDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass cannonenchantment_glitterbeard_01_CustomizationDesc.cannonenchantment_glitterbeard_01_CustomizationDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
