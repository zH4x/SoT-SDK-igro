#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sail.BP_Sail_C
// 0x0020 (0x0590 - 0x0570)
class ABP_Sail_C : public ASail
{
public:
	TArray<struct FVector>                             Sail_Positions_Top;                                       // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Sail_Positions_Bottom;                                    // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Sail.BP_Sail_C"));
		return ptr;
	}


	void Debug();
	void Initialise(bool IsMainSail, float SailForceScalar);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
