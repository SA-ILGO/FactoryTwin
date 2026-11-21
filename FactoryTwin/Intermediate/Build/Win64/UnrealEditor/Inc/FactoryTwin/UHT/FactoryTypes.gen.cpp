// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/FactoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFactoryTypes() {}

// ********** Begin Cross Module References ********************************************************
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EAgvMotion();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EDataFreshness();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EDataSource();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EOperationState();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EPositionSource();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgvState();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FStationState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOperationState ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperationState;
static UEnum* EOperationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOperationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOperationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EOperationState, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EOperationState"));
	}
	return Z_Registration_Info_UEnum_EOperationState.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EOperationState>()
{
	return EOperationState_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EOperationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Complete.Name", "EOperationState::Complete" },
		{ "Error.Name", "EOperationState::Error" },
		{ "Idle.Name", "EOperationState::Idle" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
		{ "Waiting.Name", "EOperationState::Waiting" },
		{ "Working.Name", "EOperationState::Working" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOperationState::Idle", (int64)EOperationState::Idle },
		{ "EOperationState::Working", (int64)EOperationState::Working },
		{ "EOperationState::Waiting", (int64)EOperationState::Waiting },
		{ "EOperationState::Complete", (int64)EOperationState::Complete },
		{ "EOperationState::Error", (int64)EOperationState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EOperationState",
	"EOperationState",
	Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EOperationState()
{
	if (!Z_Registration_Info_UEnum_EOperationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperationState.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EOperationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOperationState.InnerSingleton;
}
// ********** End Enum EOperationState *************************************************************

// ********** Begin Enum EDataFreshness ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataFreshness;
static UEnum* EDataFreshness_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataFreshness.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataFreshness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EDataFreshness, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EDataFreshness"));
	}
	return Z_Registration_Info_UEnum_EDataFreshness.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EDataFreshness>()
{
	return EDataFreshness_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
		{ "Offline.Name", "EDataFreshness::Offline" },
		{ "Online.Name", "EDataFreshness::Online" },
		{ "Stale.Name", "EDataFreshness::Stale" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataFreshness::Online", (int64)EDataFreshness::Online },
		{ "EDataFreshness::Stale", (int64)EDataFreshness::Stale },
		{ "EDataFreshness::Offline", (int64)EDataFreshness::Offline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EDataFreshness",
	"EDataFreshness",
	Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EDataFreshness()
{
	if (!Z_Registration_Info_UEnum_EDataFreshness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataFreshness.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EDataFreshness_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataFreshness.InnerSingleton;
}
// ********** End Enum EDataFreshness **************************************************************

// ********** Begin Enum EDataSource ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataSource;
static UEnum* EDataSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EDataSource, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EDataSource"));
	}
	return Z_Registration_Info_UEnum_EDataSource.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EDataSource>()
{
	return EDataSource_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Confirmed.Name", "EDataSource::Confirmed" },
		{ "Estimated.Name", "EDataSource::Estimated" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
		{ "Observed.Name", "EDataSource::Observed" },
		{ "Simulated.Name", "EDataSource::Simulated" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataSource::Confirmed", (int64)EDataSource::Confirmed },
		{ "EDataSource::Observed", (int64)EDataSource::Observed },
		{ "EDataSource::Estimated", (int64)EDataSource::Estimated },
		{ "EDataSource::Simulated", (int64)EDataSource::Simulated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EDataSource",
	"EDataSource",
	Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EDataSource()
{
	if (!Z_Registration_Info_UEnum_EDataSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataSource.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EDataSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataSource.InnerSingleton;
}
// ********** End Enum EDataSource *****************************************************************

// ********** Begin Enum EAgvMotion ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgvMotion;
static UEnum* EAgvMotion_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAgvMotion.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAgvMotion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EAgvMotion, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EAgvMotion"));
	}
	return Z_Registration_Info_UEnum_EAgvMotion.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EAgvMotion>()
{
	return EAgvMotion_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
		{ "Moving.Name", "EAgvMotion::Moving" },
		{ "Stopped.Name", "EAgvMotion::Stopped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAgvMotion::Stopped", (int64)EAgvMotion::Stopped },
		{ "EAgvMotion::Moving", (int64)EAgvMotion::Moving },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EAgvMotion",
	"EAgvMotion",
	Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EAgvMotion()
{
	if (!Z_Registration_Info_UEnum_EAgvMotion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgvMotion.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EAgvMotion_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAgvMotion.InnerSingleton;
}
// ********** End Enum EAgvMotion ******************************************************************

// ********** Begin Enum EPositionSource ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPositionSource;
static UEnum* EPositionSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPositionSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPositionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EPositionSource, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EPositionSource"));
	}
	return Z_Registration_Info_UEnum_EPositionSource.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EPositionSource>()
{
	return EPositionSource_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AGV \xec\x9c\x84\xec\xb9\x98 \xea\xb7\xbc\xea\xb1\xb0\n" },
#endif
		{ "Estimated.Comment", "// \xec\xa0\x95\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x90(RFID)\n" },
		{ "Estimated.Name", "EPositionSource::Estimated" },
		{ "Estimated.ToolTip", "\xec\xa0\x95\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x90(RFID)" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
		{ "StationConfirmed.Name", "EPositionSource::StationConfirmed" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AGV \xec\x9c\x84\xec\xb9\x98 \xea\xb7\xbc\xea\xb1\xb0" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPositionSource::StationConfirmed", (int64)EPositionSource::StationConfirmed },
		{ "EPositionSource::Estimated", (int64)EPositionSource::Estimated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EPositionSource",
	"EPositionSource",
	Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EPositionSource()
{
	if (!Z_Registration_Info_UEnum_EPositionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPositionSource.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EPositionSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPositionSource.InnerSingleton;
}
// ********** End Enum EPositionSource *************************************************************

// ********** Begin ScriptStruct FStationState *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStationState;
class UScriptStruct* FStationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FStationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FStationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStationState, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("StationState"));
	}
	return Z_Registration_Info_UScriptStruct_FStationState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FStationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationId_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyId_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastReceivedSeconds_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BodyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Connection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastReceivedSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStationState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, StationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationId_MetaData), NewProp_StationId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, Operation), Z_Construct_UEnum_FactoryTwin_EOperationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3832099622
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_BodyId = { "BodyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, BodyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyId_MetaData), NewProp_BodyId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, Source), Z_Construct_UEnum_FactoryTwin_EDataSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 4192142815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Connection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, Connection), Z_Construct_UEnum_FactoryTwin_EDataFreshness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connection_MetaData), NewProp_Connection_MetaData) }; // 3698669306
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStationState_Statics::NewProp_LastReceivedSeconds = { "LastReceivedSeconds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStationState, LastReceivedSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastReceivedSeconds_MetaData), NewProp_LastReceivedSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_BodyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Connection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStationState_Statics::NewProp_LastReceivedSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStationState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	&NewStructOps,
	"StationState",
	Z_Construct_UScriptStruct_FStationState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStationState_Statics::PropPointers),
	sizeof(FStationState),
	alignof(FStationState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStationState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStationState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStationState()
{
	if (!Z_Registration_Info_UScriptStruct_FStationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStationState.InnerSingleton, Z_Construct_UScriptStruct_FStationState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FStationState.InnerSingleton;
}
// ********** End ScriptStruct FStationState *******************************************************

// ********** Begin ScriptStruct FAgvState *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAgvState;
class UScriptStruct* FAgvState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAgvState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAgvState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgvState, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("AgvState"));
	}
	return Z_Registration_Info_UScriptStruct_FAgvState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAgvState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgvId_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Motion_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStationId_MetaData[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last stop confirmed by the field\n" },
#endif
		{ "ModuleRelativePath", "FactoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last stop confirmed by the field" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextStationId_MetaData[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Where it is heading (or will head next)\n" },
#endif
		{ "ModuleRelativePath", "FactoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Where it is heading (or will head next)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSource_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarrierBodyId_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set by the store, not by data sources\n" },
#endif
		{ "ModuleRelativePath", "FactoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set by the store, not by data sources" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastReceivedSeconds_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AgvId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Motion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Motion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastStationId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextStationId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CarrierBodyId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Connection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastReceivedSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgvState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_AgvId = { "AgvId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, AgvId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgvId_MetaData), NewProp_AgvId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Motion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Motion = { "Motion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, Motion), Z_Construct_UEnum_FactoryTwin_EAgvMotion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Motion_MetaData), NewProp_Motion_MetaData) }; // 1459198739
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_LastStationId = { "LastStationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, LastStationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStationId_MetaData), NewProp_LastStationId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_NextStationId = { "NextStationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, NextStationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextStationId_MetaData), NewProp_NextStationId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_PositionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_PositionSource = { "PositionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, PositionSource), Z_Construct_UEnum_FactoryTwin_EPositionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSource_MetaData), NewProp_PositionSource_MetaData) }; // 3936483430
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_CarrierBodyId = { "CarrierBodyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, CarrierBodyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarrierBodyId_MetaData), NewProp_CarrierBodyId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, Source), Z_Construct_UEnum_FactoryTwin_EDataSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 4192142815
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Connection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, Connection), Z_Construct_UEnum_FactoryTwin_EDataFreshness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connection_MetaData), NewProp_Connection_MetaData) }; // 3698669306
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_LastReceivedSeconds = { "LastReceivedSeconds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgvState, LastReceivedSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastReceivedSeconds_MetaData), NewProp_LastReceivedSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgvState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_AgvId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Motion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_LastStationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_NextStationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_PositionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_PositionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_CarrierBodyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Connection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgvState_Statics::NewProp_LastReceivedSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgvState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgvState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	&NewStructOps,
	"AgvState",
	Z_Construct_UScriptStruct_FAgvState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgvState_Statics::PropPointers),
	sizeof(FAgvState),
	alignof(FAgvState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgvState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgvState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAgvState()
{
	if (!Z_Registration_Info_UScriptStruct_FAgvState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAgvState.InnerSingleton, Z_Construct_UScriptStruct_FAgvState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAgvState.InnerSingleton;
}
// ********** End ScriptStruct FAgvState ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOperationState_StaticEnum, TEXT("EOperationState"), &Z_Registration_Info_UEnum_EOperationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832099622U) },
		{ EDataFreshness_StaticEnum, TEXT("EDataFreshness"), &Z_Registration_Info_UEnum_EDataFreshness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3698669306U) },
		{ EDataSource_StaticEnum, TEXT("EDataSource"), &Z_Registration_Info_UEnum_EDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4192142815U) },
		{ EAgvMotion_StaticEnum, TEXT("EAgvMotion"), &Z_Registration_Info_UEnum_EAgvMotion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1459198739U) },
		{ EPositionSource_StaticEnum, TEXT("EPositionSource"), &Z_Registration_Info_UEnum_EPositionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3936483430U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStationState::StaticStruct, Z_Construct_UScriptStruct_FStationState_Statics::NewStructOps, TEXT("StationState"), &Z_Registration_Info_UScriptStruct_FStationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStationState), 944634097U) },
		{ FAgvState::StaticStruct, Z_Construct_UScriptStruct_FAgvState_Statics::NewStructOps, TEXT("AgvState"), &Z_Registration_Info_UScriptStruct_FAgvState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgvState), 555628927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_3815061532(TEXT("/Script/FactoryTwin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h__Script_FactoryTwin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
