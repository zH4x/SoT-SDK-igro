#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailHoist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailHoist.BP_SailHoist_C
// 0x0008 (0x07F0 - 0x07E8)
class ABP_SailHoist_C : public ASailHoist
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SailHoist.BP_SailHoist_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
