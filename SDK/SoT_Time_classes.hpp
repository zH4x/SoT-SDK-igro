#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Time_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Time.TimeInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.TimeInterface");
		return ptr;
	}


	struct FGameTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
	struct FGameTime ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime);
	struct FDateTime ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime);
};


// Class Time.DebugTimeInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugTimeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.DebugTimeInterface");
		return ptr;
	}


	void SetTimeSlowdownScalar(float RequestedSlowdownScalar);
	void SetTimeScalar(int RequestedTimeScalar);
	void SetTimeCatchupScalar(float RequestedCatchupScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	float GetTimeSlowdownScalar();
	int GetTimeScalar();
	float GetTimeCatchupScalar();
	void EnableQueryServiceTime(bool Enable);
};


// Class Time.TimeBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.TimeBlueprintLibrary");
		return ptr;
	}


	struct FReplicatedDateTime STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	bool STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
};


// Class Time.TimeFormatterInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeFormatterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.TimeFormatterInterface");
		return ptr;
	}

};


// Class Time.TimeService
// 0x00C0 (0x0550 - 0x0490)
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0490(0x0030) MISSED OFFSET
	struct FTimespan                                   GameWorldTimeOffset;                                      // 0x04C0(0x0008) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FReplicatedDateTime                         ReplicatedServerTime;                                     // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net)
	uint32_t                                           TimeScalar;                                               // 0x04D8(0x0004) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           NumberOfDaysInEachGameMonth;                              // 0x04DC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SynchronizeTimeSpeedupRate;                               // 0x04E0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SynchronizeTimeSlowdownRate;                              // 0x04E4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax;                  // 0x04E8(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds;                  // 0x04F0(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ServiceTimeQueryFrequencyInSeconds;                       // 0x04F4(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientTimeUpdateFrequencyInSeconds;                       // 0x04F8(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SunriseTimeHours;                                         // 0x04FC(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              SunsetTimeHours;                                          // 0x0500(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x0504(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.TimeService");
		return ptr;
	}


	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
};


// Class Time.DebugTimeService
// 0x0008 (0x0558 - 0x0550)
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Time.DebugTimeService");
		return ptr;
	}


	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
	void MulticastOnSynchronizeTimeSpeedupRateRPC(float Rate);
	void MulticastOnSynchronizeTimeSlowdownRateRPC(float Rate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
