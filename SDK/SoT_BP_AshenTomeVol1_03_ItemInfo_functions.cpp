// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenTomeVol1_03_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AshenTomeVol1_03_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AshenTomeVol1_03_ItemInfo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.ExecuteUbergraph_BP_AshenTomeVol1_03_ItemInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AshenTomeVol1_03_ItemInfo_C::ExecuteUbergraph_BP_AshenTomeVol1_03_ItemInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C.ExecuteUbergraph_BP_AshenTomeVol1_03_ItemInfo"));

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
