// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/StationActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStationActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor();
FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor_NoRegister();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EStationState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EStationState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStationState;
static UEnum* EStationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EStationState, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EStationState"));
	}
	return Z_Registration_Info_UEnum_EStationState.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EStationState>()
{
	return EStationState_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EStationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fault.Name", "EStationState::Fault" },
		{ "Idle.Name", "EStationState::Idle" },
		{ "ModuleRelativePath", "StationActor.h" },
		{ "Running.Name", "EStationState::Running" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStationState::Idle", (int64)EStationState::Idle },
		{ "EStationState::Running", (int64)EStationState::Running },
		{ "EStationState::Fault", (int64)EStationState::Fault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EStationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EStationState",
	"EStationState",
	Z_Construct_UEnum_FactoryTwin_EStationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EStationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EStationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EStationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EStationState()
{
	if (!Z_Registration_Info_UEnum_EStationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStationState.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EStationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStationState.InnerSingleton;
}
// ********** End Enum EStationState ***************************************************************

// ********** Begin Class AStationActor Function GetStateColor *************************************
struct Z_Construct_UFunction_AStationActor_GetStateColor_Statics
{
	struct StationActor_eventGetStateColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x81\xed\x83\x9c \xec\x83\x89\xec\x83\x81 \xeb\xb0\x98\xed\x99\x98\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xed\x83\x9c \xec\x83\x89\xec\x83\x81 \xeb\xb0\x98\xed\x99\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStationActor_GetStateColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationActor_eventGetStateColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationActor_GetStateColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_GetStateColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationActor_GetStateColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStationActor, nullptr, "GetStateColor", Z_Construct_UFunction_AStationActor_GetStateColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationActor_GetStateColor_Statics::StationActor_eventGetStateColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationActor_GetStateColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStationActor_GetStateColor_Statics::StationActor_eventGetStateColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStationActor_GetStateColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationActor_GetStateColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStationActor::execGetStateColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetStateColor();
	P_NATIVE_END;
}
// ********** End Class AStationActor Function GetStateColor ***************************************

// ********** Begin Class AStationActor Function GetStateLabel *************************************
struct Z_Construct_UFunction_AStationActor_GetStateLabel_Statics
{
	struct StationActor_eventGetStateLabel_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c \xec\x9d\xb4\xeb\xa6\x84 \xeb\xb0\x98\xed\x99\x98\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c \xec\x9d\xb4\xeb\xa6\x84 \xeb\xb0\x98\xed\x99\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationActor_eventGetStateLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStationActor, nullptr, "GetStateLabel", Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::StationActor_eventGetStateLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::StationActor_eventGetStateLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStationActor_GetStateLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationActor_GetStateLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStationActor::execGetStateLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetStateLabel();
	P_NATIVE_END;
}
// ********** End Class AStationActor Function GetStateLabel ***************************************

// ********** Begin Class AStationActor Function SetState ******************************************
struct Z_Construct_UFunction_AStationActor_SetState_Statics
{
	struct StationActor_eventSetState_Parms
	{
		EStationState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xeb\xb3\x80\xea\xb2\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStationActor_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AStationActor_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationActor_eventSetState_Parms, NewState), Z_Construct_UEnum_FactoryTwin_EStationState, METADATA_PARAMS(0, nullptr) }; // 2446804888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationActor_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_SetState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_SetState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationActor_SetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStationActor, nullptr, "SetState", Z_Construct_UFunction_AStationActor_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationActor_SetState_Statics::StationActor_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationActor_SetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStationActor_SetState_Statics::StationActor_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStationActor_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationActor_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStationActor::execSetState)
{
	P_GET_ENUM(EStationState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(EStationState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class AStationActor Function SetState ********************************************

// ********** Begin Class AStationActor ************************************************************
void AStationActor::StaticRegisterNativesAStationActor()
{
	UClass* Class = AStationActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStateColor", &AStationActor::execGetStateColor },
		{ "GetStateLabel", &AStationActor::execGetStateLabel },
		{ "SetState", &AStationActor::execSetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AStationActor;
UClass* AStationActor::GetPrivateStaticClass()
{
	using TClass = AStationActor;
	if (!Z_Registration_Info_UClass_AStationActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StationActor"),
			Z_Registration_Info_UClass_AStationActor.InnerSingleton,
			StaticRegisterNativesAStationActor,
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
	return Z_Registration_Info_UClass_AStationActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AStationActor_NoRegister()
{
	return AStationActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AStationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StationActor.h" },
		{ "ModuleRelativePath", "StationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationId_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xeb\xb9\x84 \xec\x8b\x9d\xeb\xb3\x84\xec\x9e\x90\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xeb\xb9\x84 \xec\x8b\x9d\xeb\xb3\x84\xec\x9e\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Station" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xeb\xb9\x84 \xeb\xb3\xb8\xec\xb2\xb4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xeb\xb9\x84 \xeb\xb3\xb8\xec\xb2\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampMesh_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\xa4\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c\xeb\x93\xb1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\xa4\xeb\xb9\x84 \xec\x83\x81\xed\x83\x9c \xed\x91\x9c\xec\x8b\x9c\xeb\x93\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampMID_MetaData[] = {
		{ "ModuleRelativePath", "StationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_StationId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStationActor_GetStateColor, "GetStateColor" }, // 317998570
		{ &Z_Construct_UFunction_AStationActor_GetStateLabel, "GetStateLabel" }, // 1469036971
		{ &Z_Construct_UFunction_AStationActor_SetState, "SetState" }, // 4028157832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, StationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationId_MetaData), NewProp_StationId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_LampMesh = { "LampMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, LampMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampMesh_MetaData), NewProp_LampMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_LampMID = { "LampMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, LampMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampMID_MetaData), NewProp_LampMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_BodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_LampMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_LampMID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStationActor_Statics::ClassParams = {
	&AStationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AStationActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AStationActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AStationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStationActor()
{
	if (!Z_Registration_Info_UClass_AStationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStationActor.OuterSingleton, Z_Construct_UClass_AStationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStationActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStationActor);
AStationActor::~AStationActor() {}
// ********** End Class AStationActor **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStationState_StaticEnum, TEXT("EStationState"), &Z_Registration_Info_UEnum_EStationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2446804888U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStationActor, AStationActor::StaticClass, TEXT("AStationActor"), &Z_Registration_Info_UClass_AStationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStationActor), 761561209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_2090965697(TEXT("/Script/FactoryTwin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
