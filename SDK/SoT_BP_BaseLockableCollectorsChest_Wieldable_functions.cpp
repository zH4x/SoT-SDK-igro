// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseLockableCollectorsChest_Wieldable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Wieldable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Wieldable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseLockableCollectorsChest_Wieldable_C::ExecuteUbergraph_BP_BaseLockableCollectorsChest_Wieldable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Wieldable"));

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
