// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/MockFactoryFeed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMockFactoryFeed() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AFactoryMap_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AMockFactoryFeed();
FACTORYTWIN_API UClass* Z_Construct_UClass_AMockFactoryFeed_NoRegister();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EOperationState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMockFactoryFeed Function InjectOperation ********************************
struct Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics
{
	struct MockFactoryFeed_eventInjectOperation_Parms
	{
		FName StationId;
		EOperationState Operation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8 \xeb\xb2\x84\xed\x8a\xbc\xec\x9d\xb4 \xeb\xb6\x80\xeb\xa5\xb4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98. \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa7\x8c \xeb\xb3\xb4\xeb\x82\xb4\xea\xb3\xa0 \xec\x95\xa1\xed\x84\xb0\xeb\x8a\x94 \xea\xb1\xb4\xeb\x93\x9c\xeb\xa6\xac\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8 \xeb\xb2\x84\xed\x8a\xbc\xec\x9d\xb4 \xeb\xb6\x80\xeb\xa5\xb4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98. \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xa7\x8c \xeb\xb3\xb4\xeb\x82\xb4\xea\xb3\xa0 \xec\x95\xa1\xed\x84\xb0\xeb\x8a\x94 \xea\xb1\xb4\xeb\x93\x9c\xeb\xa6\xac\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockFactoryFeed_eventInjectOperation_Parms, StationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockFactoryFeed_eventInjectOperation_Parms, Operation), Z_Construct_UEnum_FactoryTwin_EOperationState, METADATA_PARAMS(0, nullptr) }; // 3832099622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::NewProp_Operation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMockFactoryFeed, nullptr, "InjectOperation", Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::MockFactoryFeed_eventInjectOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::MockFactoryFeed_eventInjectOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMockFactoryFeed_InjectOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMockFactoryFeed_InjectOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMockFactoryFeed::execInjectOperation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StationId);
	P_GET_ENUM(EOperationState,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InjectOperation(Z_Param_StationId,EOperationState(Z_Param_Operation));
	P_NATIVE_END;
}
// ********** End Class AMockFactoryFeed Function InjectOperation **********************************

// ********** Begin Class AMockFactoryFeed Function IsStationLinkCut *******************************
struct Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics
{
	struct MockFactoryFeed_eventIsStationLinkCut_Parms
	{
		FName StationId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mock" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockFactoryFeed_eventIsStationLinkCut_Parms, StationId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MockFactoryFeed_eventIsStationLinkCut_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MockFactoryFeed_eventIsStationLinkCut_Parms), &Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMockFactoryFeed, nullptr, "IsStationLinkCut", Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::MockFactoryFeed_eventIsStationLinkCut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::MockFactoryFeed_eventIsStationLinkCut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMockFactoryFeed::execIsStationLinkCut)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStationLinkCut(Z_Param_StationId);
	P_NATIVE_END;
}
// ********** End Class AMockFactoryFeed Function IsStationLinkCut *********************************

// ********** Begin Class AMockFactoryFeed Function SetAutoScenario ********************************
struct Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics
{
	struct MockFactoryFeed_eventSetAutoScenario_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mock" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((MockFactoryFeed_eventSetAutoScenario_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MockFactoryFeed_eventSetAutoScenario_Parms), &Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMockFactoryFeed, nullptr, "SetAutoScenario", Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::MockFactoryFeed_eventSetAutoScenario_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::MockFactoryFeed_eventSetAutoScenario_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMockFactoryFeed::execSetAutoScenario)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoScenario(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class AMockFactoryFeed Function SetAutoScenario **********************************

// ********** Begin Class AMockFactoryFeed Function SetStationLinkCut ******************************
struct Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics
{
	struct MockFactoryFeed_eventSetStationLinkCut_Parms
	{
		FName StationId;
		bool bCut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mock" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static void NewProp_bCut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MockFactoryFeed_eventSetStationLinkCut_Parms, StationId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_bCut_SetBit(void* Obj)
{
	((MockFactoryFeed_eventSetStationLinkCut_Parms*)Obj)->bCut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_bCut = { "bCut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MockFactoryFeed_eventSetStationLinkCut_Parms), &Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_bCut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::NewProp_bCut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMockFactoryFeed, nullptr, "SetStationLinkCut", Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::MockFactoryFeed_eventSetStationLinkCut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::MockFactoryFeed_eventSetStationLinkCut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMockFactoryFeed::execSetStationLinkCut)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StationId);
	P_GET_UBOOL(Z_Param_bCut);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStationLinkCut(Z_Param_StationId,Z_Param_bCut);
	P_NATIVE_END;
}
// ********** End Class AMockFactoryFeed Function SetStationLinkCut ********************************

// ********** Begin Class AMockFactoryFeed *********************************************************
void AMockFactoryFeed::StaticRegisterNativesAMockFactoryFeed()
{
	UClass* Class = AMockFactoryFeed::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InjectOperation", &AMockFactoryFeed::execInjectOperation },
		{ "IsStationLinkCut", &AMockFactoryFeed::execIsStationLinkCut },
		{ "SetAutoScenario", &AMockFactoryFeed::execSetAutoScenario },
		{ "SetStationLinkCut", &AMockFactoryFeed::execSetStationLinkCut },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMockFactoryFeed;
UClass* AMockFactoryFeed::GetPrivateStaticClass()
{
	using TClass = AMockFactoryFeed;
	if (!Z_Registration_Info_UClass_AMockFactoryFeed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MockFactoryFeed"),
			Z_Registration_Info_UClass_AMockFactoryFeed.InnerSingleton,
			StaticRegisterNativesAMockFactoryFeed,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMockFactoryFeed.InnerSingleton;
}
UClass* Z_Construct_UClass_AMockFactoryFeed_NoRegister()
{
	return AMockFactoryFeed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMockFactoryFeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x80\xec\xa7\x9c \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90. \xec\x8b\xa4\xec\x8a\xb5 03: AGV \xed\x95\x9c \xeb\x8c\x80\xea\xb0\x80 \xec\xb0\xa8\xec\xb2\xb4 \xed\x95\x98\xeb\x82\x98\xeb\xa5\xbc \xec\x8b\xa3\xea\xb3\xa0 \xec\xa0\x9c\xea\xb3\xb5 \xeb\xa7\xb5\xec\x9d\x84 \xed\x95\x9c \xeb\xb0\x94\xed\x80\xb4 \xeb\x8f\x88\xeb\x8b\xa4.\n// \xeb\x82\x98\xec\xa4\x91\xec\x97\x90 WebSocket \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xea\xb0\x80 \xec\x9d\xb4 \xec\x9e\x90\xeb\xa6\xac\xeb\xa5\xbc \xeb\x8c\x80\xec\x8b\xa0\xed\x95\x9c\xeb\x8b\xa4.\n" },
#endif
		{ "IncludePath", "MockFactoryFeed.h" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x80\xec\xa7\x9c \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90. \xec\x8b\xa4\xec\x8a\xb5 03: AGV \xed\x95\x9c \xeb\x8c\x80\xea\xb0\x80 \xec\xb0\xa8\xec\xb2\xb4 \xed\x95\x98\xeb\x82\x98\xeb\xa5\xbc \xec\x8b\xa3\xea\xb3\xa0 \xec\xa0\x9c\xea\xb3\xb5 \xeb\xa7\xb5\xec\x9d\x84 \xed\x95\x9c \xeb\xb0\x94\xed\x80\xb4 \xeb\x8f\x88\xeb\x8b\xa4.\n\xeb\x82\x98\xec\xa4\x91\xec\x97\x90 WebSocket \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xea\xb0\x80 \xec\x9d\xb4 \xec\x9e\x90\xeb\xa6\xac\xeb\xa5\xbc \xeb\x8c\x80\xec\x8b\xa0\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationIds_MetaData[] = {
		{ "Category", "Mock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\x9c \xeb\xb0\x94\xed\x80\xb4 \xec\x88\x9c\xec\x84\x9c. 0\xeb\xb2\x88\xec\x9d\x80 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c LOAD\n" },
#endif
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x9c \xeb\xb0\x94\xed\x80\xb4 \xec\x88\x9c\xec\x84\x9c. 0\xeb\xb2\x88\xec\x9d\x80 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c LOAD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgvId_MetaData[] = {
		{ "Category", "Mock" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoScenario_MetaData[] = {
		{ "Category", "Mock" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkSeconds_MetaData[] = {
		{ "Category", "Mock" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadSeconds_MetaData[] = {
		{ "Category", "Mock" },
		{ "ClampMin", "0.5" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LOAD\xec\x97\x90\xec\x84\x9c \xec\x8b\xa3\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84\n" },
#endif
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LOAD\xec\x97\x90\xec\x84\x9c \xec\x8b\xa3\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TravelSpeed_MetaData[] = {
		{ "Category", "Mock" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// cm/s. AAgvActor::MoveSpeed\xec\x99\x80 \xea\xb0\x99\xea\xb2\x8c \xeb\x91\x90\xec\x96\xb4\xec\x95\xbc \xea\xb7\xb8\xeb\xa6\xbc\xea\xb3\xbc \xeb\x8f\x84\xec\xb0\xa9 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\xea\xb0\x80 \xeb\xa7\x9e\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "cm/s. AAgvActor::MoveSpeed\xec\x99\x80 \xea\xb0\x99\xea\xb2\x8c \xeb\x91\x90\xec\x96\xb4\xec\x95\xbc \xea\xb7\xb8\xeb\xa6\xbc\xea\xb3\xbc \xeb\x8f\x84\xec\xb0\xa9 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\xea\xb0\x80 \xeb\xa7\x9e\xec\x9d\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeartbeatSeconds_MetaData[] = {
		{ "Category", "Mock" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Mock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "MockFactoryFeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StationIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AgvId;
	static void NewProp_bAutoScenario_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoScenario;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorkSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartbeatSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMockFactoryFeed_InjectOperation, "InjectOperation" }, // 2690775930
		{ &Z_Construct_UFunction_AMockFactoryFeed_IsStationLinkCut, "IsStationLinkCut" }, // 809658493
		{ &Z_Construct_UFunction_AMockFactoryFeed_SetAutoScenario, "SetAutoScenario" }, // 2698817752
		{ &Z_Construct_UFunction_AMockFactoryFeed_SetStationLinkCut, "SetStationLinkCut" }, // 1903360832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMockFactoryFeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_StationIds_Inner = { "StationIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_StationIds = { "StationIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, StationIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationIds_MetaData), NewProp_StationIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_AgvId = { "AgvId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, AgvId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgvId_MetaData), NewProp_AgvId_MetaData) };
void Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_bAutoScenario_SetBit(void* Obj)
{
	((AMockFactoryFeed*)Obj)->bAutoScenario = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_bAutoScenario = { "bAutoScenario", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMockFactoryFeed), &Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_bAutoScenario_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoScenario_MetaData), NewProp_bAutoScenario_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_WorkSeconds = { "WorkSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, WorkSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkSeconds_MetaData), NewProp_WorkSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_LoadSeconds = { "LoadSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, LoadSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadSeconds_MetaData), NewProp_LoadSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_TravelSpeed = { "TravelSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, TravelSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TravelSpeed_MetaData), NewProp_TravelSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_HeartbeatSeconds = { "HeartbeatSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, HeartbeatSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeartbeatSeconds_MetaData), NewProp_HeartbeatSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMockFactoryFeed, Map), Z_Construct_UClass_AFactoryMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMockFactoryFeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_StationIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_StationIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_AgvId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_bAutoScenario,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_WorkSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_LoadSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_TravelSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_HeartbeatSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMockFactoryFeed_Statics::NewProp_Map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMockFactoryFeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMockFactoryFeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMockFactoryFeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMockFactoryFeed_Statics::ClassParams = {
	&AMockFactoryFeed::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMockFactoryFeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMockFactoryFeed_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMockFactoryFeed_Statics::Class_MetaDataParams), Z_Construct_UClass_AMockFactoryFeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMockFactoryFeed()
{
	if (!Z_Registration_Info_UClass_AMockFactoryFeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMockFactoryFeed.OuterSingleton, Z_Construct_UClass_AMockFactoryFeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMockFactoryFeed.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMockFactoryFeed);
AMockFactoryFeed::~AMockFactoryFeed() {}
// ********** End Class AMockFactoryFeed ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h__Script_FactoryTwin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMockFactoryFeed, AMockFactoryFeed::StaticClass, TEXT("AMockFactoryFeed"), &Z_Registration_Info_UClass_AMockFactoryFeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMockFactoryFeed), 2605749416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h__Script_FactoryTwin_2454942257(TEXT("/Script/FactoryTwin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h__Script_FactoryTwin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h__Script_FactoryTwin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
