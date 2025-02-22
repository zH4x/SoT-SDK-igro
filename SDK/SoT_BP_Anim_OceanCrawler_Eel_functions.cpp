// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_OceanCrawler_Eel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_NewAttack
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_NewAttack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_NewAttack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_AttackCompleted
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_AttackCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_AttackCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_StartingHitReact
// (BlueprintCallable, BlueprintEvent)

void UBP_Anim_OceanCrawler_Eel_C::AnimNotify_StartingHitReact()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.AnimNotify_StartingHitReact"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Eel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_OceanCrawler_Eel_C::ExecuteUbergraph_BP_Anim_OceanCrawler_Eel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_OceanCrawler_Eel.BP_Anim_OceanCrawler_Eel_C.ExecuteUbergraph_BP_Anim_OceanCrawler_Eel"));

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
