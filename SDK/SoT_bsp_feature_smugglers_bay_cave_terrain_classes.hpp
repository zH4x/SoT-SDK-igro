#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_feature_smugglers_bay_cave_terrain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_feature_smugglers_bay_cave_terrain.bsp_feature_smugglers_bay_cave_terrain_C
// 0x0000 (0x03D8 - 0x03D8)
class Absp_feature_smugglers_bay_cave_terrain_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bsp_feature_smugglers_bay_cave_terrain.bsp_feature_smugglers_bay_cave_terrain_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
