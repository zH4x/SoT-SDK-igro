// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bsh_cluster_01_c_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_bsh_cluster_01_c.bsp_bsh_cluster_01_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_bsh_cluster_01_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_bsh_cluster_01_c.bsp_bsh_cluster_01_c_C.UserConstructionScript");

	Absp_bsh_cluster_01_c_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
