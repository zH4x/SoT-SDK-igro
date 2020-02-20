#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Eli_Draw_Footprints_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Eli_Draw_Footprints.BP_Eli_Draw_Footprints_C
// 0x0038 (0x0508 - 0x04D0)
class ABP_Eli_Draw_Footprints_C : public ABP_TemplateFootprints_C
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal11;                                                  // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal10;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal3;                                                   // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal2;                                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal1;                                                   // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Eli_Draw_Footprints.BP_Eli_Draw_Footprints_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
