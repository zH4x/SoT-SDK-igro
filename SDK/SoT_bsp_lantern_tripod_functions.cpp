// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_lantern_tripod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_lantern_tripod.bsp_lantern_tripod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_lantern_tripod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_lantern_tripod.bsp_lantern_tripod_C.UserConstructionScript");

	Absp_lantern_tripod_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
