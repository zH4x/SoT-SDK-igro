// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_Tavern_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_PlayerPirate_Tavern_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.GetPxActorCapacityForPhysXAggregate"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.TattoGlowDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::TattoGlowDynamicMaterials(class UMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.TattoGlowDynamicMaterials"));

	struct
	{
		class UMeshComponent*          Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.GetMouthPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_PlayerPirate_Tavern_C::GetMouthPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.GetMouthPosition"));

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPirate_Tavern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.Update Athena Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaCharacter*        AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.Update Athena Character"));

	struct
	{
		class AAthenaCharacter*        AthenaCharacter;
	} params;

	params.AthenaCharacter = AthenaCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.CapstanRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::CapstanRotationSpeed(float RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.CapstanRotationSpeed"));

	struct
	{
		float                          RotationSpeed;
	} params;

	params.RotationSpeed = RotationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.DockingInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_Docking             Docking                        (Parm)

void ABP_PlayerPirate_Tavern_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.DockingInterface"));

	struct
	{
		struct FBP_Docking             Docking;
	} params;

	params.Docking = Docking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.CapstanForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IndividualForce                (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              LH_IK                          (Parm, IsPlainOldData)
// struct FTransform              RH_IK                          (Parm, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.CapstanForce"));

	struct
	{
		float                          IndividualForce;
		struct FTransform              LH_IK;
		struct FTransform              RH_IK;
		class AActor*                  Actor;
	} params;

	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Update Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TransformUpdate                (Parm, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Update Transform"));

	struct
	{
		TEnumAsByte<EIKLimbName>       LimbId;
		struct FTransform              TransformUpdate;
	} params;

	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Blend Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Blend Timing"));

	struct
	{
		TEnumAsByte<EIKLimbName>       LimbId;
		float                          BlendIn;
		float                          BlendOut;
	} params;

	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Update Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationStrength               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Update Strength"));

	struct
	{
		TEnumAsByte<EIKLimbName>       LimbId;
		float                          LocationStrength;
		float                          RotationStrength;
	} params;

	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Active"));

	struct
	{
		TEnumAsByte<EIKLimbName>       LimbId;
		bool                           Active;
		TEnumAsByte<ELimbIKSpace>      CoordinateSpace;
	} params;

	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArmStretch                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpineStretch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LegStretch                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.IK Limb Stretch"));

	struct
	{
		float                          ArmStretch;
		float                          SpineStretch;
		float                          LegStretch;
	} params;

	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PlayerPirate_Tavern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.TriggerTattooGlow
// (Event, Public, BlueprintEvent)

void ABP_PlayerPirate_Tavern_C::TriggerTattooGlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.TriggerTattooGlow"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.ExecuteUbergraph_BP_PlayerPirate_Tavern
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_Tavern_C::ExecuteUbergraph_BP_PlayerPirate_Tavern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate_Tavern.BP_PlayerPirate_Tavern_C.ExecuteUbergraph_BP_PlayerPirate_Tavern"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
