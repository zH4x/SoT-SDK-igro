#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_StandardHull_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShip_StandardHull_Damage.BP_MediumShip_StandardHull_Damage_C
// 0x00A0 (0x0690 - 0x05F0)
class ABP_MediumShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	class UStaticMeshComponent*                        projectile_collision;                                     // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_20;                                    // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_18;                                    // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_19;                                    // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_17;                                    // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_16;                                    // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_14;                                    // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_13;                                    // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_12;                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_11;                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_09;                                    // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_08;                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_07;                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_06;                                    // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_05;                                    // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_04;                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_03;                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_02;                                    // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Damage_Zone_Middle_01;                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_mid_hull_damage_01_a;                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShip_StandardHull_Damage.BP_MediumShip_StandardHull_Damage_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
