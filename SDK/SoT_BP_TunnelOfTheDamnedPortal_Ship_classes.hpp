#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelOfTheDamnedPortal_Ship_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C
// 0x0010 (0x0650 - 0x0640)
class ABP_TunnelOfTheDamnedPortal_Ship_C : public ATunnelOfTheDamnedPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USynchedMusicZoneComponent*                  SynchedMusicZone;                                         // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
