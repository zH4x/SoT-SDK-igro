#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wpn_shop_wsp_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wpn_shop_wsp_01_a.BP_wpn_shop_wsp_01_a_C
// 0x0210 (0x05E0 - 0x03D0)
class ABP_wpn_shop_wsp_01_a_C : public AActor
{
public:
	class UStaticMeshComponent*                        cmn_ammo_crate_01_b_vc;                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_wpn_shop_dressing_01_c;                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_wpn_shop_dressing_01_b;                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_wpn_shop_dressing_01_a;                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision_01;                                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_dust_01_air;                                          // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight5;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_IslandWeaponsChest;                                    // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        bp_lantern_hook_01_a;                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        wsp_light_plate_b;                                        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh14;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh13;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh12;                                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh11;                                             // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh9;                                              // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh8;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor2;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor1;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight7;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight6;                                               // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight4;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight3;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight2;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh6;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh5;                                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_cls_shop_hanging_cloth_03_a;                          // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioSpace;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_vine_01_c;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_vine_01_b;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_bush_fern_01_a;                                       // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_bush_08_c;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_pistol_rack_01_a;                                     // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_int_small_sideboard_01_a;                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_wood_box_02_a;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_hanging_target_broken_01_a;                  // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_drapes_01_a;                                     // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_furnace_01_a;                                // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_table_01_a;                                  // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_doorframe_01_a;                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_01_a;                                        // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_hanging_target_01_a;                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_b;                                 // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_a;                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_c2;                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_c;                                 // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_lantern_01_b;                                // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_roof_beam_01_a;                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_small_balcony_01_a;                              // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_c1;                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_b1;                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_window_01_a1;                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_sign_01_a;                                   // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_pillars_01_a;                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_wpn_shop_door_01_a;                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_wpn_shop_wsp_01_a.BP_wpn_shop_wsp_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
