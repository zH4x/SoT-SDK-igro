#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_Mast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_Mast.BP_SmallShip_Mast_C
// 0x0068 (0x0A60 - 0x09F8)
class ABP_SmallShip_Mast_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_MastEmissaryFlag;                                      // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_pennant_alliance_01_a;                           // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_jolly_roger_01_a;                                // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Ladder;                                                   // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WeldedCrowsNestPhysics;                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WeldedMastPhysics;                                        // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_mast_ladder_step_01_a;                                // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_mast_bell_support_01_a;                         // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell1;                                                 // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipFlagCustomizationChest;                            // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CrowsNest;                                                // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_Mast.BP_SmallShip_Mast_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void ExecuteUbergraph_BP_SmallShip_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
