// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MathAndTrigAnimation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaCharacter*        Athena_Character               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MathAndTrigAnimation_C::STATIC_DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets");

	UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params params;
	params.Athena_Character = Athena_Character;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Float                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DecrementValue                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MathAndTrigAnimation_C::STATIC_DecrementFloat(float DecrementValue, class UObject* __WorldContext, float* Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat");

	UBP_MathAndTrigAnimation_C_DecrementFloat_Params params;
	params.DecrementValue = DecrementValue;
	params.__WorldContext = __WorldContext;

	UObject::ProcessEvent(fn, &params);

	if (Float != nullptr)
		*Float = params.Float;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Float                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Incement_Value                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_MathAndTrigAnimation_C::STATIC_Increment_Float(float Incement_Value, class UObject* __WorldContext, float* Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float");

	UBP_MathAndTrigAnimation_C_Increment_Float_Params params;
	params.Incement_Value = Incement_Value;
	params.__WorldContext = __WorldContext;

	UObject::ProcessEvent(fn, &params);

	if (Float != nullptr)
		*Float = params.Float;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              RelativeTransform              (Parm, IsPlainOldData)
// struct FTransform              BaseTransform                  (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              CombinedTransform              (Parm, OutParm, IsPlainOldData)

void UBP_MathAndTrigAnimation_C::STATIC_Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform");

	UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params params;
	params.RelativeTransform = RelativeTransform;
	params.BaseTransform = BaseTransform;
	params.__WorldContext = __WorldContext;

	UObject::ProcessEvent(fn, &params);

	if (CombinedTransform != nullptr)
		*CombinedTransform = params.CombinedTransform;
}


// Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              RelativeObjectsWorldTransform  (Parm, IsPlainOldData)
// struct FTransform              BaseObjectsWorldTransform      (Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RealtiveOffsetTransform        (Parm, OutParm, IsPlainOldData)

void UBP_MathAndTrigAnimation_C::STATIC_Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform");

	UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params params;
	params.RelativeObjectsWorldTransform = RelativeObjectsWorldTransform;
	params.BaseObjectsWorldTransform = BaseObjectsWorldTransform;
	params.__WorldContext = __WorldContext;

	UObject::ProcessEvent(fn, &params);

	if (RealtiveOffsetTransform != nullptr)
		*RealtiveOffsetTransform = params.RealtiveOffsetTransform;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
