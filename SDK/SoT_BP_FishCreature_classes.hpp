#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishCreature_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishCreature.BP_FishCreature_C
// 0x0120 (0x04F0 - 0x03D0)
class ABP_FishCreature_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFishCreatures>                        CreatureType;                                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECreatureNumbers>                      NumOfCreatures;                                           // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03DA(0x0002) MISSED OFFSET
	float                                              BoundsBias;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    currMaterial;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstance;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Seed;                                                     // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimSpeed;                                                // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              circlingSpeed;                                            // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECreatureRadialDirection>              CirclingDirection;                                        // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              CirclingRadius;                                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwimDeformation;                                          // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mud;                                                      // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              shoalSpeed;                                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShoalingSpread;                                           // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoalingHeight;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fishSpeed;                                                // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FishSpread;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FishHeight;                                               // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomSpread;                                             // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HueVariance;                                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              smoothness;                                               // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TAssetPtr<class UStaticMesh>>               SelectedCreatureType;                                     // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UStaticMesh>>               Fish_04;                                                  // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UStaticMesh>>               Fish_05;                                                  // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Size;                                                     // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeVariance;                                             // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimSpeed;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BBox;                                                     // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class UStaticMesh>>               Fish_07;                                                  // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DrawDistance;                                             // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UStaticMesh>>               Clown_01;                                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SizeCompensation;                                         // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	TArray<TAssetPtr<class UStaticMesh>>               Splashtail;                                               // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UStaticMesh>>               Pondie;                                                   // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                FishDistribution;                                         // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishCreature.BP_FishCreature_C"));
		return ptr;
	}


	void ConfigureMaterialInstance();
	void CreateCreature();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
