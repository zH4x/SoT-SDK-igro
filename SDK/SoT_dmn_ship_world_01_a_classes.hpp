#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dmn_ship_world_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dmn_ship_world_01_a.dmn_ship_world_01_a_C
// 0x0000 (0x0438 - 0x0438)
class Admn_ship_world_01_a_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass dmn_ship_world_01_a.dmn_ship_world_01_a_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
