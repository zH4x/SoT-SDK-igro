// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_beach_rocks_04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_beach_rocks_04.bsp_beach_rocks_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_beach_rocks_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_beach_rocks_04.bsp_beach_rocks_04_C.UserConstructionScript");

	Absp_beach_rocks_04_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
