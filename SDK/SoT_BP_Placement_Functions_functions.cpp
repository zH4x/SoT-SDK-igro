// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Functions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::GenerateRadialXYPositionsAroundPoint(const struct FVector& Centre, float Radius, int Segments, class UObject* __WorldContext, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint"));

	struct
	{
		struct FVector                 Centre;
		float                          Radius;
		int                            Segments;
		class UObject*                 __WorldContext;
		TArray<struct FVector>         Positions;
	} params;

	params.Centre = Centre;
	params.Radius = Radius;
	params.Segments = Segments;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Valid_Hit                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm)

void UBP_Placement_Functions_C::Get_First_Valid_Hit(class UObject* __WorldContext, TArray<struct FHitResult>* Hits, bool* Is_Valid_Hit, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit"));

	struct
	{
		TArray<struct FHitResult>      Hits;
		class UObject*                 __WorldContext;
		bool                           Is_Valid_Hit;
		struct FHitResult              Hit;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (Is_Valid_Hit != nullptr)
		*Is_Valid_Hit = params.Is_Valid_Hit;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Rotated_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, const struct FRotator& Rotation, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast"));

	struct
	{
		struct FRandomStream           Random;
		struct FVector                 Centre;
		struct FVector                 Extent;
		struct FRotator                Rotation;
		class UObject*                 __WorldContext;
		struct FVector                 Raycast_Start;
		struct FVector                 Raycast_End;
	} params;

	params.Centre = Centre;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Spawn                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius_Overlap                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii_Out                (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Detonate_Charge(class AActor* Spawn, const struct FVector& Position, float Radius, float Radius_Overlap, int Seed, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, TArray<struct FLinearColor>* Blast_Radii_Out)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge"));

	struct
	{
		class AActor*                  Spawn;
		struct FVector                 Position;
		float                          Radius;
		float                          Radius_Overlap;
		int                            Seed;
		TArray<struct FLinearColor>    Blast_Radii;
		class UObject*                 __WorldContext;
		TArray<struct FLinearColor>    Blast_Radii_Out;
	} params;

	params.Spawn = Spawn;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.Seed = Seed;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Blast_Radii_Out != nullptr)
		*Blast_Radii_Out = params.Blast_Radii_Out;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  A_String                       (Parm, ZeroConstructor)
// class FString                  B_String                       (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Does_A_Delete_B(const class FString& A_String, const class FString& B_String, class UObject* __WorldContext, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B"));

	struct
	{
		class FString                  A_String;
		class FString                  B_String;
		class UObject*                 __WorldContext;
		bool                           Return;
	} params;

	params.A_String = A_String;
	params.B_String = B_String;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Input_Actor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Returning_Tag                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  Asset_Tag                      (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Get_Actor_Placement_Asset_Type(class AActor* Input_Actor, class UObject* __WorldContext, bool* Returning_Tag, class FString* Asset_Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type"));

	struct
	{
		class AActor*                  Input_Actor;
		class UObject*                 __WorldContext;
		bool                           Returning_Tag;
		class FString                  Asset_Tag;
	} params;

	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Returning_Tag != nullptr)
		*Returning_Tag = params.Returning_Tag;
	if (Asset_Tag != nullptr)
		*Asset_Tag = params.Asset_Tag;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Input_Actor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Delete_Actor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Overlaps_to_Delete             (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Check_Actor_Overlap(class AActor* Input_Actor, class UObject* __WorldContext, bool* Delete_Actor, TArray<class AActor*>* Overlaps_to_Delete)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap"));

	struct
	{
		class AActor*                  Input_Actor;
		class UObject*                 __WorldContext;
		bool                           Delete_Actor;
		TArray<class AActor*>          Overlaps_to_Delete;
	} params;

	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Delete_Actor != nullptr)
		*Delete_Actor = params.Delete_Actor;
	if (Overlaps_to_Delete != nullptr)
		*Overlaps_to_Delete = params.Overlaps_to_Delete;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementGardenSeed    Selected_Mesh                  (Parm)
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Mesh_Instance_Transform(const struct FPlacementGardenSeed& Selected_Mesh, const struct FVector& Location, const struct FVector& Normal, class UObject* __WorldContext, struct FRandomStream* Random, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform"));

	struct
	{
		struct FPlacementGardenSeed    Selected_Mesh;
		struct FRandomStream           Random;
		struct FVector                 Location;
		struct FVector                 Normal;
		class UObject*                 __WorldContext;
		struct FTransform              Transform;
	} params;

	params.Selected_Mesh = Selected_Mesh;
	params.Location = Location;
	params.Normal = Normal;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlacementGardenSeed> Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Mesh_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities"));

	struct
	{
		TArray<struct FPlacementGardenSeed> Charges;
		TArray<float>                  Charge_Probabilities;
		class UObject*                 __WorldContext;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlacementGardenSeed> Meshes                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Mesh_Probabilities             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Generator_Radius               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Mesh_Radii                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawn_Permission               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Mesh_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPlacementGardenSeed    Mesh                           (Parm, OutParm)

void UBP_Placement_Functions_C::Set_Mesh(float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Mesh_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FTransform* Transform, float* Radius, int* Mesh_Index, struct FPlacementGardenSeed* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh"));

	struct
	{
		TArray<struct FPlacementGardenSeed> Meshes;
		TArray<float>                  Mesh_Probabilities;
		float                          Generator_Radius;
		float                          Spawn_Clustering;
		float                          Spawn_Radius_Multiplier;
		TArray<class UObject*>         Physical_Materials;
		TArray<struct FLinearColor>    Mesh_Radii;
		struct FRandomStream           Random;
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           Spawn_Permission;
		struct FTransform              Transform;
		float                          Radius;
		int                            Mesh_Index;
		struct FPlacementGardenSeed    Mesh;
	} params;

	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Mesh_Probabilities != nullptr)
		*Mesh_Probabilities = params.Mesh_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Mesh_Radii != nullptr)
		*Mesh_Radii = params.Mesh_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Mesh_Index != nullptr)
		*Mesh_Index = params.Mesh_Index;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlacementBombCharge> Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Generator_Radius               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Box_Distribution               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FLinearColor>    Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawn_Permission               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPlacementBombCharge    Charge                         (Parm, OutParm)

void UBP_Placement_Functions_C::Set_Charge(float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Blast_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FVector* Position, float* Radius, struct FPlacementBombCharge* Charge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge"));

	struct
	{
		TArray<struct FPlacementBombCharge> Charges;
		TArray<float>                  Charge_Probabilities;
		float                          Generator_Radius;
		float                          Spawn_Clustering;
		bool                           Box_Distribution;
		TArray<class UObject*>         Physical_Materials;
		TArray<struct FLinearColor>    Blast_Radii;
		struct FRandomStream           Random;
		class AActor*                  Actor;
		class UObject*                 __WorldContext;
		bool                           Spawn_Permission;
		struct FVector                 Position;
		float                          Radius;
		struct FPlacementBombCharge    Charge;
	} params;

	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Box_Distribution = Box_Distribution;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Position != nullptr)
		*Position = params.Position;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Charge != nullptr)
		*Charge = params.Charge;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UObject*>         Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 Placement_Material             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Surface_Materials(class UObject* Placement_Material, class UObject* __WorldContext, TArray<class UObject*>* Physical_Materials, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials"));

	struct
	{
		TArray<class UObject*>         Physical_Materials;
		class UObject*                 Placement_Material;
		class UObject*                 __WorldContext;
		bool                           Placement_Permission;
	} params;

	params.Placement_Material = Placement_Material;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Slope_Range                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Slope(const struct FVector& Normal, const struct FVector2D& Slope_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope"));

	struct
	{
		struct FVector                 Normal;
		struct FVector2D               Slope_Range;
		class UObject*                 __WorldContext;
		bool                           Placement_Permission;
	} params;

	params.Normal = Normal;
	params.Slope_Range = Slope_Range;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Height_Range                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Height(const struct FVector& Position, const struct FVector2D& Height_Range, class UObject* __WorldContext, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height"));

	struct
	{
		struct FVector                 Position;
		struct FVector2D               Height_Range;
		class UObject*                 __WorldContext;
		bool                           Placement_Permission;
	} params;

	params.Position = Position;
	params.Height_Range = Height_Range;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius_Overlap                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Radius_Overlap(const struct FVector& Position, float Radius, float Radius_Overlap, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap"));

	struct
	{
		struct FVector                 Position;
		float                          Radius;
		float                          Radius_Overlap;
		TArray<struct FLinearColor>    Blast_Radii;
		class UObject*                 __WorldContext;
		bool                           Placement_Permission;
	} params;

	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Cast_Success                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Set_Spawn_Properties(class UObject* Object, int Seed, float Radius, class UObject* __WorldContext, bool* Cast_Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties"));

	struct
	{
		class UObject*                 Object;
		int                            Seed;
		float                          Radius;
		class UObject*                 __WorldContext;
		bool                           Cast_Success;
	} params;

	params.Object = Object;
	params.Seed = Seed;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Cast_Success != nullptr)
		*Cast_Success = params.Cast_Success;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast"));

	struct
	{
		struct FRandomStream           Random;
		struct FVector                 Centre;
		struct FVector                 Extent;
		class UObject*                 __WorldContext;
		struct FVector                 Raycast_Start;
		struct FVector                 Raycast_End;
	} params;

	params.Centre = Centre;
	params.Extent = Extent;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Seed_Density                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Sample_Count                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Box_Sample_Count(class AActor* Actor, float Seed_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count"));

	struct
	{
		class AActor*                  Actor;
		float                          Seed_Density;
		class UObject*                 __WorldContext;
		int                            Sample_Count;
	} params;

	params.Actor = Actor;
	params.Seed_Density = Seed_Density;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomStream           Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Actor_Transform                (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Radial_Raycast(float Radius, const struct FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const struct FTransform& Actor_Transform, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast"));

	struct
	{
		struct FRandomStream           Random;
		float                          Radius;
		struct FVector                 Centre;
		float                          Spawn_Clustering;
		float                          Spawn_Radius_Multiplier;
		struct FTransform              Actor_Transform;
		class UObject*                 __WorldContext;
		struct FVector                 Raycast_Start;
		struct FVector                 Raycast_End;
	} params;

	params.Radius = Radius;
	params.Centre = Centre;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor_Transform = Actor_Transform;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Random_Float                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Calculate_Index_from_Probabilities(float Random_Float, class UObject* __WorldContext, TArray<float>* Charge_Probabilities, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities"));

	struct
	{
		float                          Random_Float;
		TArray<float>                  Charge_Probabilities;
		class UObject*                 __WorldContext;
		int                            Index;
	} params;

	params.Random_Float = Random_Float;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Sample_Density           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Sample_Count                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, class UObject* __WorldContext, int* Sample_Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count"));

	struct
	{
		float                          Radius;
		float                          Spawn_Sample_Density;
		class UObject*                 __WorldContext;
		int                            Sample_Count;
	} params;

	params.Radius = Radius;
	params.Spawn_Sample_Density = Spawn_Sample_Density;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlacementBombCharge> Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Charge_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities"));

	struct
	{
		TArray<struct FPlacementBombCharge> Charges;
		TArray<float>                  Charge_Probabilities;
		class UObject*                 __WorldContext;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
