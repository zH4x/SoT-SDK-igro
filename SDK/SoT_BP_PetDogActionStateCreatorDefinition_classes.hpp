#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetDogActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetDogActionStateCreatorDefinition.BP_PetDogActionStateCreatorDefinition_C
// 0x0000 (0x0548 - 0x0548)
class ABP_PetDogActionStateCreatorDefinition_C : public ABP_PetActionStateCreatorDefinition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetDogActionStateCreatorDefinition.BP_PetDogActionStateCreatorDefinition_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
