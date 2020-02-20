// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_BindDispatcherToVaultOpen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.GetStepName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)

void UBP_Shroudbreaker_BindDispatcherToVaultOpen_C::GetStepName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.GetStepName"));

	struct
	{
		class FString                  Name;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_BindDispatcherToVaultOpen_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_BindDispatcherToVaultOpen_C::ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_BindDispatcherToVaultOpen.BP_Shroudbreaker_BindDispatcherToVaultOpen_C.ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen"));

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
