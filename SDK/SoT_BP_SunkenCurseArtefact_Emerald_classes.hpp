#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SunkenCurseArtefact_Emerald_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C
// 0x0010 (0x06F8 - 0x06E8)
class ABP_SunkenCurseArtefact_Emerald_C : public ASunkenCurseArtefact
{
public:
	class USunkenCurseArtefactItemSpawnComponent*      SunkenCurseArtefactItemSpawn;                             // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Glint;                                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SunkenCurseArtefact_Emerald.BP_SunkenCurseArtefact_Emerald_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
