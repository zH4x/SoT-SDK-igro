#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Effigy_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C
// 0x0100 (0x05B0 - 0x04B0)
class UBP_Anim_TT_Effigy_L_C : public UAnimatedCosmeticItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7DBA12764636182C1ECCC4BF6E59B1B8;      // 0x04B8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_481A8F3243B46164FE2532B68630AEA2;      // 0x0500(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_67C5B194493DD67BC34C3B852AC1AB82;// 0x0560(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_TT_Effigy_L(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
