// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_devils_ridge_design_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Awsp_feature_devils_ridge_design_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C.ExecuteUbergraph_wsp_feature_devils_ridge_design
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Awsp_feature_devils_ridge_design_C::ExecuteUbergraph_wsp_feature_devils_ridge_design(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C.ExecuteUbergraph_wsp_feature_devils_ridge_design"));

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
