// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/AgvActor.h"
#include "FactoryTwin/FactoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAgvActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AAgvActor();
FACTORYTWIN_API UClass* Z_Construct_UClass_AAgvActor_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AFactoryMap_NoRegister();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EAgvCameraMode();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgvState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAgvCameraMode ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgvCameraMode;
static UEnum* EAgvCameraMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAgvCameraMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAgvCameraMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FactoryTwin_EAgvCameraMode, (UObject*)Z_Construct_UPackage__Script_FactoryTwin(), TEXT("EAgvCameraMode"));
	}
	return Z_Registration_Info_UEnum_EAgvCameraMode.OuterSingleton;
}
template<> FACTORYTWIN_API UEnum* StaticEnum<EAgvCameraMode>()
{
	return EAgvCameraMode_StaticEnum();
}
struct Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Follow.Name", "EAgvCameraMode::Follow" },
		{ "ModuleRelativePath", "AgvActor.h" },
		{ "Pov.Comment", "// 3\xec\x9d\xb8\xec\xb9\xad: \xeb\x92\xa4 \xec\x9c\x84\xec\x97\x90\xec\x84\x9c \xeb\x94\xb0\xeb\x9d\xbc\xea\xb0\x90\n" },
		{ "Pov.Name", "EAgvCameraMode::Pov" },
		{ "Pov.ToolTip", "3\xec\x9d\xb8\xec\xb9\xad: \xeb\x92\xa4 \xec\x9c\x84\xec\x97\x90\xec\x84\x9c \xeb\x94\xb0\xeb\x9d\xbc\xea\xb0\x90" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAgvCameraMode::Follow", (int64)EAgvCameraMode::Follow },
		{ "EAgvCameraMode::Pov", (int64)EAgvCameraMode::Pov },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin,
	nullptr,
	"EAgvCameraMode",
	"EAgvCameraMode",
	Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FactoryTwin_EAgvCameraMode()
{
	if (!Z_Registration_Info_UEnum_EAgvCameraMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgvCameraMode.InnerSingleton, Z_Construct_UEnum_FactoryTwin_EAgvCameraMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAgvCameraMode.InnerSingleton;
}
// ********** End Enum EAgvCameraMode **************************************************************

// ********** Begin Class AAgvActor Function GetViewState ******************************************
struct Z_Construct_UFunction_AAgvActor_GetViewState_Statics
{
	struct AgvActor_eventGetViewState_Parms
	{
		FAgvState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AGV" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAgvActor_GetViewState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgvActor_eventGetViewState_Parms, ReturnValue), Z_Construct_UScriptStruct_FAgvState, METADATA_PARAMS(0, nullptr) }; // 555628927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAgvActor_GetViewState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgvActor_GetViewState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_GetViewState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAgvActor_GetViewState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAgvActor, nullptr, "GetViewState", Z_Construct_UFunction_AAgvActor_GetViewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_GetViewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAgvActor_GetViewState_Statics::AgvActor_eventGetViewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_GetViewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAgvActor_GetViewState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAgvActor_GetViewState_Statics::AgvActor_eventGetViewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAgvActor_GetViewState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAgvActor_GetViewState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAgvActor::execGetViewState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAgvState*)Z_Param__Result=P_THIS->GetViewState();
	P_NATIVE_END;
}
// ********** End Class AAgvActor Function GetViewState ********************************************

// ********** Begin Class AAgvActor Function HandleAgvChanged **************************************
struct Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics
{
	struct AgvActor_eventHandleAgvChanged_Parms
	{
		FAgvState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AgvActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgvActor_eventHandleAgvChanged_Parms, NewState), Z_Construct_UScriptStruct_FAgvState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 555628927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAgvActor, nullptr, "HandleAgvChanged", Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::AgvActor_eventHandleAgvChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::AgvActor_eventHandleAgvChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAgvActor_HandleAgvChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAgvActor_HandleAgvChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAgvActor::execHandleAgvChanged)
{
	P_GET_STRUCT_REF(FAgvState,Z_Param_Out_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAgvChanged(Z_Param_Out_NewState);
	P_NATIVE_END;
}
// ********** End Class AAgvActor Function HandleAgvChanged ****************************************

// ********** Begin Class AAgvActor Function UseCamera *********************************************
struct Z_Construct_UFunction_AAgvActor_UseCamera_Statics
{
	struct AgvActor_eventUseCamera_Parms
	{
		EAgvCameraMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AGV" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAgvActor_UseCamera_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAgvActor_UseCamera_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgvActor_eventUseCamera_Parms, Mode), Z_Construct_UEnum_FactoryTwin_EAgvCameraMode, METADATA_PARAMS(0, nullptr) }; // 2906440751
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAgvActor_UseCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgvActor_UseCamera_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAgvActor_UseCamera_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_UseCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAgvActor_UseCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAgvActor, nullptr, "UseCamera", Z_Construct_UFunction_AAgvActor_UseCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_UseCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAgvActor_UseCamera_Statics::AgvActor_eventUseCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAgvActor_UseCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAgvActor_UseCamera_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAgvActor_UseCamera_Statics::AgvActor_eventUseCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAgvActor_UseCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAgvActor_UseCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAgvActor::execUseCamera)
{
	P_GET_ENUM(EAgvCameraMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseCamera(EAgvCameraMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class AAgvActor Function UseCamera ***********************************************

// ********** Begin Class AAgvActor ****************************************************************
void AAgvActor::StaticRegisterNativesAAgvActor()
{
	UClass* Class = AAgvActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewState", &AAgvActor::execGetViewState },
		{ "HandleAgvChanged", &AAgvActor::execHandleAgvChanged },
		{ "UseCamera", &AAgvActor::execUseCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAgvActor;
UClass* AAgvActor::GetPrivateStaticClass()
{
	using TClass = AAgvActor;
	if (!Z_Registration_Info_UClass_AAgvActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AgvActor"),
			Z_Registration_Info_UClass_AAgvActor.InnerSingleton,
			StaticRegisterNativesAAgvActor,
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
	return Z_Registration_Info_UClass_AAgvActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAgvActor_NoRegister()
{
	return AAgvActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAgvActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xeb\xa1\x9c \xec\x9c\x84\xec\x9d\x98 AGV \xed\x95\x9c \xeb\x8c\x80. \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c\xeb\xa5\xbc \xec\x9d\xbd\xea\xb8\xb0\xeb\xa7\x8c \xed\x95\x98\xea\xb3\xa0, \xeb\x8f\x84\xec\xb0\xa9\xec\x9d\x84 \xec\x8a\xa4\xec\x8a\xa4\xeb\xa1\x9c \xec\xa0\x95\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4.\n// \xec\x99\xb8\xed\x98\x95\xec\x9d\x80 JETANK \xec\x8a\xa4\xec\xbc\x88\xeb\xa0\x88\xed\x83\x88 \xeb\xaa\xa8\xeb\x8d\xb8(AGV_JETANK). \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 +X = \xec\xa7\x84\xed\x96\x89 \xeb\xb0\xa9\xed\x96\xa5, +Y = \xec\x98\xa4\xeb\xa5\xb8\xec\xaa\xbd(\xea\xb3\xa0\xeb\xa6\xac \xeb\xb0\x94\xea\xb9\xa5\xec\xaa\xbd).\n" },
#endif
		{ "IncludePath", "AgvActor.h" },
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xeb\xa1\x9c \xec\x9c\x84\xec\x9d\x98 AGV \xed\x95\x9c \xeb\x8c\x80. \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c\xeb\xa5\xbc \xec\x9d\xbd\xea\xb8\xb0\xeb\xa7\x8c \xed\x95\x98\xea\xb3\xa0, \xeb\x8f\x84\xec\xb0\xa9\xec\x9d\x84 \xec\x8a\xa4\xec\x8a\xa4\xeb\xa1\x9c \xec\xa0\x95\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4.\n\xec\x99\xb8\xed\x98\x95\xec\x9d\x80 JETANK \xec\x8a\xa4\xec\xbc\x88\xeb\xa0\x88\xed\x83\x88 \xeb\xaa\xa8\xeb\x8d\xb8(AGV_JETANK). \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 +X = \xec\xa7\x84\xed\x96\x89 \xeb\xb0\xa9\xed\x96\xa5, +Y = \xec\x98\xa4\xeb\xa5\xb8\xec\xaa\xbd(\xea\xb3\xa0\xeb\xa6\xac \xeb\xb0\x94\xea\xb9\xa5\xec\xaa\xbd)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgvId_MetaData[] = {
		{ "Category", "AGV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 ID\xec\x99\x80 \xea\xb0\x99\xec\x95\x84\xec\x95\xbc \xed\x95\xa8\n" },
#endif
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 ID\xec\x99\x80 \xea\xb0\x99\xec\x95\x84\xec\x95\xbc \xed\x95\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "AGV" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xeb\xa1\x9c \xec\x9c\x84 \xed\x91\x9c\xec\x8b\x9c \xec\x86\x8d\xeb\x8f\x84 (cm/s). Mock\xeb\x8f\x84 \xea\xb0\x99\xec\x9d\x80 \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x9d\xb4\xeb\x8f\x99 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb3\x84\xec\x82\xb0\n" },
#endif
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xeb\xa1\x9c \xec\x9c\x84 \xed\x91\x9c\xec\x8b\x9c \xec\x86\x8d\xeb\x8f\x84 (cm/s). Mock\xeb\x8f\x84 \xea\xb0\x99\xec\x9d\x80 \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x9d\xb4\xeb\x8f\x99 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xea\xb3\x84\xec\x82\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyModelByStation_MetaData[] = {
		{ "Category", "AGV|Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x95\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x90\xec\x9d\x84 \xeb\x96\xa0\xeb\x82\xa0 \xeb\x95\x8c \xec\xb0\xa8\xec\xb2\xb4 \xeb\xaa\xa8\xec\x96\x91\xec\x9d\x84 \xeb\xb0\x94\xea\xbf\x80 \xeb\xaa\xa8\xeb\x8d\xb8.\n// \xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x94 \xec\xb9\xb8\xec\x9d\x80 \xeb\xb0\x94\xeb\x80\x8c\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c (\xec\x98\x88: P2 = \xeb\xb9\x84\xec\x9b\x80 \xe2\x86\x92 \xed\x94\x84\xeb\xa0\x88\xec\x8a\xa4 \xed\x94\x84\xeb\xa0\x88\xec\x9e\x84 \xea\xb7\xb8\xeb\x8c\x80\xeb\xa1\x9c)\n" },
#endif
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x95\xec\xa7\x80 \xec\xa7\x80\xec\xa0\x90\xec\x9d\x84 \xeb\x96\xa0\xeb\x82\xa0 \xeb\x95\x8c \xec\xb0\xa8\xec\xb2\xb4 \xeb\xaa\xa8\xec\x96\x91\xec\x9d\x84 \xeb\xb0\x94\xea\xbf\x80 \xeb\xaa\xa8\xeb\x8d\xb8.\n\xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x94 \xec\xb9\xb8\xec\x9d\x80 \xeb\xb0\x94\xeb\x80\x8c\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c (\xec\x98\x88: P2 = \xeb\xb9\x84\xec\x9b\x80 \xe2\x86\x92 \xed\x94\x84\xeb\xa0\x88\xec\x8a\xa4 \xed\x94\x84\xeb\xa0\x88\xec\x9e\x84 \xea\xb7\xb8\xeb\x8c\x80\xeb\xa1\x9c)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAnim_MetaData[] = {
		{ "Category", "AGV|Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99 \xec\xa4\x91\xec\x97\x90 \xeb\xb0\x98\xeb\xb3\xb5 \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 (\xec\x98\x88: AN_AGV_Forward). \xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x90\xeb\xa9\xb4 \xeb\xb0\x94\xed\x80\xb4\xea\xb0\x80 \xeb\x8f\x8c\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99 \xec\xa4\x91\xec\x97\x90 \xeb\xb0\x98\xeb\xb3\xb5 \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 (\xec\x98\x88: AN_AGV_Forward). \xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x90\xeb\xa9\xb4 \xeb\xb0\x94\xed\x80\xb4\xea\xb0\x80 \xeb\x8f\x8c\xec\xa7\x80 \xec\x95\x8a\xec\x9d\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnim_MetaData[] = {
		{ "Category", "AGV|Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c \xec\x9e\x88\xec\x9d\x84 \xeb\x95\x8c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 (\xec\x98\x88: AN_AGV_Idle). \xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x90\xeb\xa9\xb4 \xea\xb7\xb8 \xec\x9e\x90\xec\x84\xb8\xeb\xa1\x9c \xeb\xa9\x88\xec\xb6\xa4\n" },
#endif
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c \xec\x9e\x88\xec\x9d\x84 \xeb\x95\x8c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 (\xec\x98\x88: AN_AGV_Idle). \xeb\xb9\x84\xec\x9b\x8c \xeb\x91\x90\xeb\xa9\xb4 \xea\xb7\xb8 \xec\x9e\x90\xec\x84\xb8\xeb\xa1\x9c \xeb\xa9\x88\xec\xb6\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "AGV" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgvMesh_MetaData[] = {
		{ "Category", "AGV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// JETANK \xeb\xaa\xa8\xeb\x8d\xb8. \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c Skeletal Mesh Asset = AGV_JETANK\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JETANK \xeb\xaa\xa8\xeb\x8d\xb8. \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c Skeletal Mesh Asset = AGV_JETANK" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "AGV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\xa3\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xec\xb0\xa8\xec\xb2\xb4. AgvMesh\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4 \xec\x9e\x88\xec\x96\xb4 AGV \xeb\xaa\xa8\xeb\x8d\xb8\xea\xb3\xbc \xea\xb0\x99\xec\x9d\x80 \xec\xa2\x8c\xed\x91\x9c\xc2\xb7\xeb\xb0\xb0\xec\x9c\xa8\xec\x9d\x84 \xec\x94\x80.\n// \xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\x80 BodyModelByStation\xec\x97\x90\xec\x84\x9c \xea\xb3\xa0\xeb\xa5\xb4\xea\xb3\xa0, \xec\xb0\xa8\xec\xb2\xb4\xea\xb0\x80 \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 \xec\x88\xa8\xea\xb9\x80\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\xa3\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94 \xec\xb0\xa8\xec\xb2\xb4. AgvMesh\xec\x97\x90 \xeb\xb6\x99\xec\x96\xb4 \xec\x9e\x88\xec\x96\xb4 AGV \xeb\xaa\xa8\xeb\x8d\xb8\xea\xb3\xbc \xea\xb0\x99\xec\x9d\x80 \xec\xa2\x8c\xed\x91\x9c\xc2\xb7\xeb\xb0\xb0\xec\x9c\xa8\xec\x9d\x84 \xec\x94\x80.\n\xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\x80 BodyModelByStation\xec\x97\x90\xec\x84\x9c \xea\xb3\xa0\xeb\xa5\xb4\xea\xb3\xa0, \xec\xb0\xa8\xec\xb2\xb4\xea\xb0\x80 \xec\x97\x86\xec\x9c\xbc\xeb\xa9\xb4 \xec\x88\xa8\xea\xb9\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowArm_MetaData[] = {
		{ "Category", "AGV" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCam_MetaData[] = {
		{ "Category", "AGV" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PovCam_MetaData[] = {
		{ "Category", "AGV" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AgvActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "AgvActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AgvId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyModelByStation_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BodyModelByStation_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BodyModelByStation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AgvMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PovCam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAgvActor_GetViewState, "GetViewState" }, // 2951961666
		{ &Z_Construct_UFunction_AAgvActor_HandleAgvChanged, "HandleAgvChanged" }, // 2089630632
		{ &Z_Construct_UFunction_AAgvActor_UseCamera, "UseCamera" }, // 391977170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAgvActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_AgvId = { "AgvId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, AgvId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgvId_MetaData), NewProp_AgvId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation_ValueProp = { "BodyModelByStation", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation_Key_KeyProp = { "BodyModelByStation_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation = { "BodyModelByStation", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, BodyModelByStation), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyModelByStation_MetaData), NewProp_BodyModelByStation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_MoveAnim = { "MoveAnim", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, MoveAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAnim_MetaData), NewProp_MoveAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_IdleAnim = { "IdleAnim", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, IdleAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleAnim_MetaData), NewProp_IdleAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_AgvMesh = { "AgvMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, AgvMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgvMesh_MetaData), NewProp_AgvMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_FollowArm = { "FollowArm", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, FollowArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowArm_MetaData), NewProp_FollowArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_FollowCam = { "FollowCam", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, FollowCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCam_MetaData), NewProp_FollowCam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_PovCam = { "PovCam", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, PovCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PovCam_MetaData), NewProp_PovCam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAgvActor_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAgvActor, Map), Z_Construct_UClass_AFactoryMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAgvActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_AgvId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyModelByStation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_MoveAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_IdleAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_AgvMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_BodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_FollowArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_FollowCam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_PovCam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAgvActor_Statics::NewProp_Map,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAgvActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAgvActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAgvActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAgvActor_Statics::ClassParams = {
	&AAgvActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAgvActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAgvActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAgvActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAgvActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAgvActor()
{
	if (!Z_Registration_Info_UClass_AAgvActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAgvActor.OuterSingleton, Z_Construct_UClass_AAgvActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAgvActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAgvActor);
AAgvActor::~AAgvActor() {}
// ********** End Class AAgvActor ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAgvCameraMode_StaticEnum, TEXT("EAgvCameraMode"), &Z_Registration_Info_UEnum_EAgvCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2906440751U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAgvActor, AAgvActor::StaticClass, TEXT("AAgvActor"), &Z_Registration_Info_UClass_AAgvActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAgvActor), 4095065048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_3623525308(TEXT("/Script/FactoryTwin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h__Script_FactoryTwin_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
