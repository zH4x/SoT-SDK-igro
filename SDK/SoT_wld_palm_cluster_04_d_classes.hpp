#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_palm_cluster_04_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_palm_cluster_04_d.wld_palm_cluster_04_d_C
// 0x0028 (0x0490 - 0x0468)
class Awld_palm_cluster_04_d_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wld_bush_01_b_01;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_bush_banana_01_a_01;                                  // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_tree_palm_02_c_01;                                    // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wld_palm_cluster_04_d.wld_palm_cluster_04_d_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
