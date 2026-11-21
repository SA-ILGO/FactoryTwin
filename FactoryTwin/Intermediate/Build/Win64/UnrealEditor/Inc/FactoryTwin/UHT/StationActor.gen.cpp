// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/StationActor.h"
#include "FactoryTwin/FactoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStationActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor();
FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor_NoRegister();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FStationState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AStationActor Function GetViewState **************************************
struct Z_Construct_UFunction_AStationActor_GetViewState_Statics
{
	struct StationActor_eventGetViewState_Parms
	{
		FStationState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4 \xec\x95\xa1\xed\x84\xb0\xea\xb0\x80 \xec\xa7\x80\xea\xb8\x88 \xeb\xb3\xb4\xec\x97\xac \xec\xa3\xbc\xeb\x8a\x94 \xea\xb0\x92 (\xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c \xea\xb0\x92\xec\x9d\x98 \xeb\xb3\xb5\xec\x82\xac\xeb\xb3\xb8)\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xec\x95\xa1\xed\x84\xb0\xea\xb0\x80 \xec\xa7\x80\xea\xb8\x88 \xeb\xb3\xb4\xec\x97\xac \xec\xa3\xbc\xeb\x8a\x94 \xea\xb0\x92 (\xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c \xea\xb0\x92\xec\x9d\x98 \xeb\xb3\xb5\xec\x82\xac\xeb\xb3\xb8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStationActor_GetViewState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationActor_eventGetViewState_Parms, ReturnValue), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(0, nullptr) }; // 944634097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationActor_GetViewState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_GetViewState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetViewState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationActor_GetViewState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStationActor, nullptr, "GetViewState", Z_Construct_UFunction_AStationActor_GetViewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetViewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationActor_GetViewState_Statics::StationActor_eventGetViewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_GetViewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationActor_GetViewState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStationActor_GetViewState_Statics::StationActor_eventGetViewState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStationActor_GetViewState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationActor_GetViewState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStationActor::execGetViewState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStationState*)Z_Param__Result=P_THIS->GetViewState();
	P_NATIVE_END;
}
// ********** End Class AStationActor Function GetViewState ****************************************

// ********** Begin Class AStationActor Function HandleStationChanged ******************************
struct Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics
{
	struct StationActor_eventHandleStationChanged_Parms
	{
		FStationState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationActor_eventHandleStationChanged_Parms, NewState), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 944634097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AStationActor, nullptr, "HandleStationChanged", Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::StationActor_eventHandleStationChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::StationActor_eventHandleStationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AStationActor_HandleStationChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationActor_HandleStationChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AStationActor::execHandleStationChanged)
{
	P_GET_STRUCT_REF(FStationState,Z_Param_Out_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStationChanged(Z_Param_Out_NewState);
	P_NATIVE_END;
}
// ********** End Class AStationActor Function HandleStationChanged ********************************

// ********** Begin Class AStationActor ************************************************************
void AStationActor::StaticRegisterNativesAStationActor()
{
	UClass* Class = AStationActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewState", &AStationActor::execGetViewState },
		{ "HandleStationChanged", &AStationActor::execHandleStationChanged },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xec\xa0\x95 \xec\x9e\xa5\xeb\xb9\x84 \xed\x95\x98\xeb\x82\x98. \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\x9d\xbd\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c LED \xec\x83\x89\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\xb4\xec\x97\xac \xec\xa4\x80\xeb\x8b\xa4.\n// \xec\x8b\xa4\xec\x8a\xb5 03: \xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa8\xeb\x8d\xb8(\xea\xb8\xb0\xeb\x91\xa5\xc2\xb7LED\xc2\xb7\xed\x8c\x94 \xeb\x93\xb1)\xec\x9d\x84 ModelRoot \xec\x95\x84\xeb\x9e\x98\xec\x97\x90 \xeb\xb6\x99\xec\x9d\xb8\xeb\x8b\xa4.\n" },
#endif
		{ "IncludePath", "StationActor.h" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xec\xa0\x95 \xec\x9e\xa5\xeb\xb9\x84 \xed\x95\x98\xeb\x82\x98. \xec\xa0\x80\xec\x9e\xa5\xec\x86\x8c\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\x9d\xbd\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c LED \xec\x83\x89\xec\x9c\xbc\xeb\xa1\x9c \xeb\xb3\xb4\xec\x97\xac \xec\xa4\x80\xeb\x8b\xa4.\n\xec\x8b\xa4\xec\x8a\xb5 03: \xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa8\xeb\x8d\xb8(\xea\xb8\xb0\xeb\x91\xa5\xc2\xb7LED\xc2\xb7\xed\x8c\x94 \xeb\x93\xb1)\xec\x9d\x84 ModelRoot \xec\x95\x84\xeb\x9e\x98\xec\x97\x90 \xeb\xb6\x99\xec\x9d\xb8\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StationId_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 ID\xec\x99\x80 \xea\xb0\x99\xec\x95\x84\xec\x95\xbc \xed\x95\xa8 (LOAD, P1, P2, P3, P4, INSP)\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xea\xb3\xb5\xea\xb8\x89\xec\x9e\x90\xea\xb0\x80 \xeb\xb3\xb4\xeb\x82\xb4\xeb\x8a\x94 ID\xec\x99\x80 \xea\xb0\x99\xec\x95\x84\xec\x95\xbc \xed\x95\xa8 (LOAD, P1, P2, P3, P4, INSP)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMapModels_MetaData[] = {
		{ "Category", "Station|Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\x80 \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\xec\x9d\xb4 \xeb\xa7\xa4\xed\x8a\xb8 \xec\xa4\x91\xec\x95\x99\xec\x9d\xb4\xeb\x8b\xa4.\n// \xec\xbc\x9c\xeb\xa9\xb4: \xeb\xaa\xa8\xeb\x8d\xb8 \xeb\xb0\x9b\xec\xb9\xa8\xeb\x8c\x80(ModelRoot)\xeb\xa5\xbc \xeb\xa7\xa4\xed\x8a\xb8 \xec\xa4\x91\xec\x95\x99\xec\x97\x90 \xea\xb3\xa0\xec\xa0\x95 \xe2\x86\x92 \xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\xb4 \xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94\xec\x97\x90\xec\x84\x9c \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9e\x90\xeb\xa6\xac\xec\x97\x90 \xeb\xb3\xb4\xec\x9e\x84\n// \xeb\x81\x84\xeb\xa9\xb4: \xeb\xb0\x9b\xec\xb9\xa8\xeb\x8c\x80\xea\xb0\x80 \xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xeb\x94\xb0\xeb\x9d\xbc\xea\xb0\x90 \xe2\x86\x92 \xed\x81\x90\xeb\xb8\x8c\xec\xb2\x98\xeb\x9f\xbc \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x90\xea\xb8\xb0 \xec\xa4\x91\xec\x8b\xac\xec\x9d\xb8 \xeb\xac\xbc\xec\xb2\xb4\xec\x9a\xa9 (\xec\xb6\x9c\xeb\xb0\x9c \xed\x91\x9c\xec\xa7\x80)\n" },
#endif
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94 \xea\xb3\xb5\xec\xa0\x95 \xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\x80 \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\xec\x9d\xb4 \xeb\xa7\xa4\xed\x8a\xb8 \xec\xa4\x91\xec\x95\x99\xec\x9d\xb4\xeb\x8b\xa4.\n\xec\xbc\x9c\xeb\xa9\xb4: \xeb\xaa\xa8\xeb\x8d\xb8 \xeb\xb0\x9b\xec\xb9\xa8\xeb\x8c\x80(ModelRoot)\xeb\xa5\xbc \xeb\xa7\xa4\xed\x8a\xb8 \xec\xa4\x91\xec\x95\x99\xec\x97\x90 \xea\xb3\xa0\xec\xa0\x95 \xe2\x86\x92 \xeb\xaa\xa8\xeb\x8d\xb8\xec\x9d\xb4 \xeb\xb8\x94\xeb\xa0\x8c\xeb\x8d\x94\xec\x97\x90\xec\x84\x9c \xeb\xa7\x8c\xeb\x93\xa0 \xec\x9e\x90\xeb\xa6\xac\xec\x97\x90 \xeb\xb3\xb4\xec\x9e\x84\n\xeb\x81\x84\xeb\xa9\xb4: \xeb\xb0\x9b\xec\xb9\xa8\xeb\x8c\x80\xea\xb0\x80 \xec\x95\xa1\xed\x84\xb0\xeb\xa5\xbc \xeb\x94\xb0\xeb\x9d\xbc\xea\xb0\x90 \xe2\x86\x92 \xed\x81\x90\xeb\xb8\x8c\xec\xb2\x98\xeb\x9f\xbc \xea\xb8\xb0\xec\xa4\x80\xec\xa0\x90\xec\x9d\xb4 \xec\x9e\x90\xea\xb8\xb0 \xec\xa4\x91\xec\x8b\xac\xec\x9d\xb8 \xeb\xac\xbc\xec\xb2\xb4\xec\x9a\xa9 (\xec\xb6\x9c\xeb\xb0\x9c \xed\x91\x9c\xec\xa7\x80)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Station" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModelRoot_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xaa\xa8\xeb\x8d\xb8 \xeb\xb6\x80\xed\x92\x88\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4 \xec\x95\x84\xeb\x9e\x98\xec\x97\x90 \xeb\xb6\x99\xec\x9d\xb8\xeb\x8b\xa4 (\xec\x83\x81\xeb\x8c\x80 \xec\x9c\x84\xec\xb9\x98 0, 0, 0)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaa\xa8\xeb\x8d\xb8 \xeb\xb6\x80\xed\x92\x88\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4 \xec\x95\x84\xeb\x9e\x98\xec\x97\x90 \xeb\xb6\x99\xec\x9d\xb8\xeb\x8b\xa4 (\xec\x83\x81\xeb\x8c\x80 \xec\x9c\x84\xec\xb9\x98 0, 0, 0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb8\xb0\xeb\x91\xa5 (\xed\x81\xb4\xeb\xa6\xad \xed\x8c\x90\xec\xa0\x95)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\x91\xa5 (\xed\x81\xb4\xeb\xa6\xad \xed\x8c\x90\xec\xa0\x95)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampMesh_MetaData[] = {
		{ "Category", "Station" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x81\xed\x83\x9c LED (\xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc 0\xeb\xb2\x88 = M_StatusLamp)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StationActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x81\xed\x83\x9c LED (\xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc 0\xeb\xb2\x88 = M_StatusLamp)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LampMID_MetaData[] = {
		{ "ModuleRelativePath", "StationActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static void NewProp_bUseMapModels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMapModels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModelRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LampMID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AStationActor_GetViewState, "GetViewState" }, // 3389345464
		{ &Z_Construct_UFunction_AStationActor_HandleStationChanged, "HandleStationChanged" }, // 2825396198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, StationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StationId_MetaData), NewProp_StationId_MetaData) };
void Z_Construct_UClass_AStationActor_Statics::NewProp_bUseMapModels_SetBit(void* Obj)
{
	((AStationActor*)Obj)->bUseMapModels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_bUseMapModels = { "bUseMapModels", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AStationActor), &Z_Construct_UClass_AStationActor_Statics::NewProp_bUseMapModels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMapModels_MetaData), NewProp_bUseMapModels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_ModelRoot = { "ModelRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, ModelRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModelRoot_MetaData), NewProp_ModelRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_LampMesh = { "LampMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, LampMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampMesh_MetaData), NewProp_LampMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationActor_Statics::NewProp_LampMID = { "LampMID", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationActor, LampMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LampMID_MetaData), NewProp_LampMID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStationActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_bUseMapModels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationActor_Statics::NewProp_ModelRoot,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStationActor, AStationActor::StaticClass, TEXT("AStationActor"), &Z_Registration_Info_UClass_AStationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStationActor), 899388402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_328113157(TEXT("/Script/FactoryTwin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h__Script_FactoryTwin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
