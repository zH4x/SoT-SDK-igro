#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_resource_island_01_c_calmwater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_resource_island_01_c_calmwater.bsp_resource_island_01_c_calmwater_C
// 0x0000 (0x0430 - 0x0430)
class Absp_resource_island_01_c_calmwater_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bsp_resource_island_01_c_calmwater.bsp_resource_island_01_c_calmwater_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
