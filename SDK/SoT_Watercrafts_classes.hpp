#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Watercrafts.ControllableOarsInterface
// 0x0000 (0x0028 - 0x0028)
class UControllableOarsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ControllableOarsInterface");
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponent
// 0x01B0 (0x0460 - 0x02B0)
class URowboatAudioComponent : public USceneComponent
{
public:
	class URowboatAudioComponentParams*                Params;                                                   // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ARowboat*                                    ParentRowboat;                                            // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02C0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.RowboatAudioComponent");
		return ptr;
	}

};


// Class Watercrafts.RowboatAudioComponentParams
// 0x00C0 (0x00E8 - 0x0028)
class URowboatAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     RowboatObjectPool;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStart;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatWakeStop;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatSpeedRtpcName;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxSpeedRtpc;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatLaunch;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStart;                              // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatImpactAndScrapeStop;                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStart;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatStrainStop;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowboatStrainRtpcName;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RowboatMaxStrainRtpc;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatTakenDamage;                                       // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmountRequiredForNoiseToPlay;                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 RowboatAttach;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RowboatDetach;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseOarEmitterPool;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInOarLayer;                                        // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarInWaterLayer;                                      // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutOarLayer;                                       // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarOutWaterLayer;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarBrakingLoop;                                       // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopOarBrakingLoop;                                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayOarPullFinished;                                      // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.RowboatAudioComponentParams");
		return ptr;
	}

};


// Class Watercrafts.RowboatSpawnParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class URowboatSpawnParamsDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              RowboatTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.RowboatSpawnParamsDataAsset");
		return ptr;
	}

};


// Class Watercrafts.ScrapeableDamageDataAsset
// 0x0010 (0x0038 - 0x0028)
class UScrapeableDamageDataAsset : public UDataAsset
{
public:
	TArray<struct FScrapeableDamageSpeedEntry>         DamageSpeedParams;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableDamageDataAsset");
		return ptr;
	}

};


// Class Watercrafts.ScrapeableInterface
// 0x0000 (0x0028 - 0x0028)
class UScrapeableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableInterface");
		return ptr;
	}

};


// Class Watercrafts.ScrapeableComponent
// 0x0030 (0x0108 - 0x00D8)
class UScrapeableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	float                                              MinIntervalBetweenScrapeDamage;                           // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UScrapeableDamageDataAsset*                  ScrapeDamageSettings;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SafeZoneCenterDirection;                                  // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafeZoneMaximumAngle;                                     // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScrapeDamagerType;                                        // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.ScrapeableComponent");
		return ptr;
	}

};


// Class Watercrafts.Watercraft
// 0x0350 (0x07E0 - 0x0490)
class AWatercraft : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0490(0x0020) MISSED OFFSET
	class UBuoyancyComponent*                          BuoyancyComponent;                                        // 0x04B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FWatercraftRolloverCorrector                RolloverCorrector;                                        // 0x04B8(0x000C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UShipNosediveBrake*                          NosediveBrake;                                            // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         BowSplashContainer;                                       // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CraftMesh;                                                // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WaterOcclusionVolume;                                     // 0x04E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteractionComponent;                                // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientConvexHullCollisionProfile;                         // 0x04F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNetTimeStampCalculator                     MovementTimeStamp;                                        // 0x0500(0x0070) (Net)
	struct FRigidBodyErrorCorrection                   PhysicsErrorCorrection;                                   // 0x0570(0x001C) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x24];                                      // 0x058C(0x0024) MISSED OFFSET
	struct FBuoyancySampleMovement                     BuoyancySampleMovement;                                   // 0x05B0(0x0068) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SpeedToChoppinessScalarCurve;                             // 0x0618(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepWaterSubmersionThreshold;                             // 0x0620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyChoppinessWhileSinking;                           // 0x0624(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RigidBodyAwake;                                           // 0x0628(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InContactWithLand;                                        // 0x0629(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               InDeepWater;                                              // 0x062A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x062B(0x0005) MISSED OFFSET
	TScriptInterface<class UScrapeableInterface>       Scrapeable;                                               // 0x0630(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1A0];                                     // 0x0640(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.Watercraft");
		return ptr;
	}


	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
};


// Class Watercrafts.Rowboat
// 0x0250 (0x0A30 - 0x07E0)
class ARowboat : public AWatercraft
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07E0(0x0028) MISSED OFFSET
	class UChildActorComponent*                        LeftSideClamberSpot;                                      // 0x0808(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightSideClamberSpot;                                     // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ForceSpot;                                                // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Lantern;                                                  // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RowingSeat;                                               // 0x0828(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     WaterExclusionOffset;                                     // 0x0830(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	class UHealthComponent*                            HealthComponent;                                          // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UActorDamageableComponent*                   ActorDamageableComponent;                                 // 0x0848(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainerComponent;                                // 0x0850(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractableStorageContainer*               InteractableStorageContainerComponent;                    // 0x0858(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URammableComponent*                          RammableComponent;                                        // 0x0860(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScrapeableComponent*                        ScrapeableComponent;                                      // 0x0868(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class URowboatAudioComponent*                      RowboatAudio;                                             // 0x0870(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBaseHullDragDynamicsDesc*                   HullDragDynamicsDesc;                                     // 0x0878(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBowSplashContainer*                         OarSplashContainer;                                       // 0x0880(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMountableComponent*                         MountableComponent;                                       // 0x0888(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 LinearDampingOverTimeWhileBeachedScalarCurve;             // 0x0890(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 AngularDampingOverTimeWhileBeachedScalarCurve;            // 0x0898(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRowboatDamageEffectData                    DamageEffectData;                                         // 0x08A0(0x0018) (Edit, DisableEditOnInstance)
	struct FRowboatStrainDamageData                    StrainDamageData;                                         // 0x08B8(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                AlwaysEnabledInteractables;                               // 0x08D8(0x0010) (ExportObject, ZeroConstructor)
	bool                                               IsBeingLaunched;                                          // 0x08E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsSinking;                                                // 0x08E9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08EA(0x0002) MISSED OFFSET
	float                                              MaxPushingAngle;                                          // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrainAmount;                                      // 0x08F0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked;                                                 // 0x08F4(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CoverCollisionChannel;                                    // 0x08F5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x08F6(0x0002) MISSED OFFSET
	float                                              UnderCoverCheckInterval;                                  // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderCoverHeight;                                         // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             RelativeUnderCoverProbeRoots;                             // 0x0900(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x120];                                     // 0x0910(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.Rowboat");
		return ptr;
	}


	void SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables);
	void OnRep_IsSinking();
};


// Class Watercrafts.WatercraftBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWatercraftBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftBlueprintFunctionLibrary");
		return ptr;
	}


	class AWatercraft* STATIC_SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation);
	bool STATIC_IsCharacterOnWatercraft(class AAthenaCharacter* AthenaCharacter);
};


// Class Watercrafts.WatercraftServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWatercraftServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftServiceInterface");
		return ptr;
	}

};


// Class Watercrafts.WatercraftService
// 0x0008 (0x0498 - 0x0490)
class AWatercraftService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Watercrafts.WatercraftService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
