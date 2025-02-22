#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueFramework.ClueSiteData
// 0x0010 (0x0038 - 0x0028)
class UClueSiteData : public UObject
{
public:
	TEnumAsByte<ETrackedOwnerType>                     DebrisTrackingType;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0029(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UClueSiteType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.LandClueCreator
// 0x0008 (0x0030 - 0x0028)
class ULandClueCreator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.LandClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.SeaClueCreator
// 0x0008 (0x0030 - 0x0028)
class USeaClueCreator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.SeaClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class UClueChoiceSelectionStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class UFixedClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:
	int                                                IndexToSelect;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class URandomClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDestinationDescriptor
// 0x0018 (0x0040 - 0x0028)
class UClueDestinationDescriptor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDestinationDescriptor"));
		return ptr;
	}


	void OnRep_DestinationInfo();
};


// Class LostShipmentsClueFramework.ClueDescriptor
// 0x0000 (0x0028 - 0x0028)
class UClueDescriptor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UClueConnectionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary"));
		return ptr;
	}


	static class UClueDescriptor* CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite);
};


// Class LostShipmentsClueFramework.ClueDescriptorGenerator
// 0x0018 (0x0040 - 0x0028)
class UClueDescriptorGenerator : public UObject
{
public:
	class UClass*                                      DescriptorType;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              SupportedDestinationTypes;                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDestinationGenerator
// 0x0068 (0x0090 - 0x0028)
class UClueDestinationGenerator : public UObject
{
public:
	class UClass*                                      RequiredClueSiteDataType;                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FWeightedClueDestinationDescriptor>  WeightedSupportedDescriptorTypes;                         // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDestinationGenerator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueConnectionConfig
// 0x0030 (0x0058 - 0x0028)
class UClueConnectionConfig : public UDataAsset
{
public:
	TArray<struct FClueSiteTypeSupportedDescribedByEntry> CluesThatCanDescribeSites;                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClueDescriptorGenerator*>            ClueGenerators;                                           // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClueDestinationGenerator*>           DestinationGenerators;                                    // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueConnectionConfig"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptorContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UClueDescriptorContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorContainerInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptorContainerComponent
// 0x0018 (0x00E0 - 0x00C8)
class UClueDescriptorContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UClueDescriptor*                             CurrentClue;                                              // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasClueBeenGiven;                                         // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptorContainerComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactoryConfig
// 0x0038 (0x0060 - 0x0028)
class UClueFactoryConfig : public UDataAsset
{
public:
	TArray<class ULandClueCreator*>                    LandClueCreators;                                         // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class USeaClueCreator*>                     SeaClueCreators;                                          // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClueChoiceSelectionStrategy*                ChoiceStrategy;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FRestrictedClueType>                 RestrictedClueTypes;                                      // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactoryConfig"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactory
// 0x0008 (0x0030 - 0x0028)
class UClueFactory : public UObject
{
public:
	class UClueFactoryConfig*                          Config;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactory"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UClueLifetimeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary"));
		return ptr;
	}


	static void GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite);
};


// Class LostShipmentsClueFramework.ClueSiteLootRestrictionsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UClueSiteLootRestrictionsDataAsset : public UDataAsset
{
public:
	TArray<struct FClueSiteLootRestriction>            ClueSiteLootRestrictions;                                 // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteLootRestrictionsDataAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.DebrisForVoyageRankDescAsset
// 0x0010 (0x0038 - 0x0028)
class UDebrisForVoyageRankDescAsset : public UDataAsset
{
public:
	TArray<struct FDebrisToRangeDist>                  RankBasedDebrisDistribution;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.DebrisForVoyageRankDescAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation
// 0x0028 (0x0198 - 0x0170)
class UEnvQueryTest_SeaClueSpawnLocation : public UEnvQueryTest
{
public:
	float                                              MinProjectionDistance;                                    // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxProjectionDistance;                                    // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngleInDegrees;                                 // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IslandProximitySafeThreshold;                             // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ContextSourcePoint;                                       // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ContextProjectionPoint;                                   // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.LootForVoyageRankDescAsset
// 0x0010 (0x0038 - 0x0028)
class ULootForVoyageRankDescAsset : public UDataAsset
{
public:
	TArray<struct FLootToRangeDist>                    RankBasedLootDistribution;                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.LootForVoyageRankDescAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.NPCLootSpawnInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCLootSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.NPCLootSpawnInterface"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.NPCLootSpawnComponent
// 0x0018 (0x00E0 - 0x00C8)
class UNPCLootSpawnComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<struct FVector>                             LootItemSpawnRelativeLocations;                           // 0x00D0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.NPCLootSpawnComponent"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset
// 0x0010 (0x0038 - 0x0028)
class USeaClueSiteTypesDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              ClueSiteTypes;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep
// 0x0068 (0x00D0 - 0x0068)
class UTaleQuestChooseLandOrSeaStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                         // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0088(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestClueSiteService
// 0x0068 (0x00A8 - 0x0040)
class UTaleQuestClueSiteService : public UTaleQuestService
{
public:
	class UTaleQuestClueSiteServiceDesc*               Desc;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FClueSite>                           ClueSites;                                                // 0x0048(0x0010) (ZeroConstructor)
	TMap<TEnumAsByte<EClueSiteLootType>, struct FClueSiteLootHistory> SpawnedLoot;                                              // 0x0058(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestClueSiteService"));
		return ptr;
	}


	TArray<struct FClueSite> GetClueSites();
};


// Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestClueSiteServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc
// 0x0060 (0x0090 - 0x0030)
class UTaleQuestChooseLandOrSeaStepDesc : public UTaleQuestStepDesc
{
public:
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngleInDegrees;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinProjectionProportion;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxProjectionProportion;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandClueChanceWhenPreviousClueWasSea;                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandClueChanceWhenPreviousClueWasLand;                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FQuestVariableVector                        ProjectionPoint;                                          // 0x0050(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRouteData;                                           // 0x0060(0x0010) (Edit)
	struct FQuestVariableBool                          IsSeaLocation;                                            // 0x0070(0x0010) (Edit)
	struct FQuestVariableNameArray                     ValidIslandNames;                                         // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep
// 0x0058 (0x00C0 - 0x0068)
class UTaleQuestGenerateCluePointingToSiteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	TArray<class UClass*>                              AllowedClueTypes;                                         // 0x00A8(0x0010) (ZeroConstructor)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                  // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc
// 0x0058 (0x0088 - 0x0030)
class UTaleQuestGenerateCluePointingToSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableInt                           Difficulty;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        SourceLocation;                                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableClueSite                      TargetClueSite;                                           // 0x0050(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                GeneratedClue;                                            // 0x0060(0x0010) (Edit)
	TArray<class UClass*>                              AllowedClueTypes;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                  // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateClueSiteAtSeaLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClueFactoryConfig*                          ClueConfig;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateClueSiteAtSeaLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        ApproximateLocation;                                      // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueFactoryConfiguration;                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateClueSiteOnIslandStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClueFactoryConfig*                          ClueConfig;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateClueSiteOnIslandStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueGenerationConfiguration;                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateDebrisTypeForVoyageRankStep : public UTaleQuestStep
{
public:
	class UDebrisForVoyageRankDescAsset*               DebrisForRankDescAsset;                                   // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableInt                           VoyageRank;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableActorAssetTypeArray           DebrisTypeArray;                                          // 0x0040(0x0010) (Edit)
	class UDebrisForVoyageRankDescAsset*               DebrisForRankDescAsset;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateDebrisTypeForVoyageRankStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateLootDescForVoyageRankStep : public UTaleQuestStep
{
public:
	class ULootForVoyageRankDescAsset*                 LootForRankDescAsset;                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateLootDescForVoyageRankStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableInt                           VoyageRank;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableItemDescTypeArray             LootDescArray;                                            // 0x0040(0x0010) (Edit)
	class ULootForVoyageRankDescAsset*                 LootForRankDescAsset;                                     // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestIsClueOfTypeStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClass*                                      ClueSiteTypeToMatchAgainst;                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestIsClueOfTypeStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ClueSiteTypeToMatch;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0038(0x0010) (Edit)
	struct FQuestVariableBool                          IsMatchingType;                                           // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStep
// 0x0038 (0x00A0 - 0x0068)
class UTaleQuestSelectClueSiteForLootStep : public UTaleQuestStep
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClueSiteLootRestrictionsDataAsset*          ClueSiteLootRestrictions;                                 // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EClueSiteLootType>                     LootType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0079(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStepDesc
// 0x0038 (0x0068 - 0x0030)
class UTaleQuestSelectClueSiteForLootStepDesc : public UTaleQuestStepDesc
{
public:
	class UTaleQuestArrayEntrySelectionStrategy*       SelectionStrategy;                                        // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClueSiteLootRestrictionsDataAsset*          ClueSiteLootRestrictions;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EClueSiteLootType>                     LootType;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FQuestVariableClueSite                      OutputClueSite;                                           // 0x0048(0x0010) (Edit)
	struct FQuestVariableBool                          MaxedAllClueSites;                                        // 0x0058(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSelectClueSiteForLootStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStep
// 0x0048 (0x00B0 - 0x0068)
class UTaleQuestSpawnDebrisAtClueSiteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStepDesc
// 0x0030 (0x0060 - 0x0030)
class UTaleQuestSpawnDebrisAtClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueSite                      ClueSiteVar;                                              // 0x0030(0x0010) (Edit)
	struct FQuestVariableActorAssetType                DebrisTypeVar;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         OutDebrisActorVar;                                        // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnDebrisAtClueSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestSpawnLootItemInClueSiteStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc
// 0x0038 (0x0068 - 0x0030)
class UTaleQuestSpawnLootItemInClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClass                         LootItem;                                                 // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedLootItem;                                          // 0x0050(0x0010) (Edit)
	bool                                               Tracked;                                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestStoreClueOnActorStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc
// 0x0030 (0x0060 - 0x0030)
class UTaleQuestStoreClueOnActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueDescriptor                ClueDescriptor;                                           // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         Actor;                                                    // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         ClueActor;                                                // 0x0050(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep
// 0x0018 (0x0080 - 0x0068)
class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableItemInfo                      Item;                                                     // 0x0030(0x0010) (Edit)
	bool                                               EnableAutoSink;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.WeightedDebrisDataAsset
// 0x0010 (0x0038 - 0x0028)
class UWeightedDebrisDataAsset : public UDataAsset
{
public:
	TArray<struct FWeightedDebris>                     Debris;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.WeightedDebrisDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
