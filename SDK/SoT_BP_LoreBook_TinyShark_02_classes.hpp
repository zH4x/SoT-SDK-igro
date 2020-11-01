#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LoreBook_TinyShark_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LoreBook_TinyShark_02.BP_LoreBook_TinyShark_02_C
// 0x0018 (0x0540 - 0x0528)
class ABP_LoreBook_TinyShark_02_C : public AModalInteractionProxy
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Book;                                                     // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LoreBook_TinyShark_02.BP_LoreBook_TinyShark_02_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
