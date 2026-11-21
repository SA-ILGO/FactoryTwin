// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryTwin/FactoryStateSubsystem.h"
#include "Engine/GameInstance.h"
#include "FactoryTwin/FactoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFactoryStateSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
FACTORYTWIN_API UClass* Z_Construct_UClass_UFactoryStateSubsystem();
FACTORYTWIN_API UClass* Z_Construct_UClass_UFactoryStateSubsystem_NoRegister();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EAgvMotion();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EDataFreshness();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EDataSource();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EOperationState();
FACTORYTWIN_API UEnum* Z_Construct_UEnum_FactoryTwin_EPositionSource();
FACTORYTWIN_API UFunction* Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature();
FACTORYTWIN_API UFunction* Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgvState();
FACTORYTWIN_API UScriptStruct* Z_Construct_UScriptStruct_FStationState();
UPackage* Z_Construct_UPackage__Script_FactoryTwin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnStationChanged *****************************************************
struct Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics
{
	struct _Script_FactoryTwin_eventOnStationChanged_Parms
	{
		FStationState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FactoryTwin_eventOnStationChanged_Parms, State), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 944634097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin, nullptr, "OnStationChanged__DelegateSignature", Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::_Script_FactoryTwin_eventOnStationChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::_Script_FactoryTwin_eventOnStationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStationChanged, FStationState const& State)
{
	struct _Script_FactoryTwin_eventOnStationChanged_Parms
	{
		FStationState State;
	};
	_Script_FactoryTwin_eventOnStationChanged_Parms Parms;
	Parms.State=State;
	OnStationChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStationChanged *******************************************************

// ********** Begin Delegate FOnAgvChanged *********************************************************
struct Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics
{
	struct _Script_FactoryTwin_eventOnAgvChanged_Parms
	{
		FAgvState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FactoryTwin_eventOnAgvChanged_Parms, State), Z_Construct_UScriptStruct_FAgvState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 555628927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FactoryTwin, nullptr, "OnAgvChanged__DelegateSignature", Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::_Script_FactoryTwin_eventOnAgvChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::_Script_FactoryTwin_eventOnAgvChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAgvChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAgvChanged, FAgvState const& State)
{
	struct _Script_FactoryTwin_eventOnAgvChanged_Parms
	{
		FAgvState State;
	};
	_Script_FactoryTwin_eventOnAgvChanged_Parms Parms;
	Parms.State=State;
	OnAgvChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAgvChanged ***********************************************************

// ********** Begin Class UFactoryStateSubsystem Function ApplyAgvUpdate ***************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics
{
	struct FactoryStateSubsystem_eventApplyAgvUpdate_Parms
	{
		FAgvState Update;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|AGV" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- AGV ----\n" },
#endif
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- AGV ----" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventApplyAgvUpdate_Parms, Update), Z_Construct_UScriptStruct_FAgvState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) }; // 555628927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "ApplyAgvUpdate", Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::FactoryStateSubsystem_eventApplyAgvUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::FactoryStateSubsystem_eventApplyAgvUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execApplyAgvUpdate)
{
	P_GET_STRUCT_REF(FAgvState,Z_Param_Out_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAgvUpdate(Z_Param_Out_Update);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function ApplyAgvUpdate *****************************

// ********** Begin Class UFactoryStateSubsystem Function ApplyStationUpdate ***********************
struct Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics
{
	struct FactoryStateSubsystem_eventApplyStationUpdate_Parms
	{
		FStationState Update;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Stations ----\n// \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xec\x86\x8c\xec\x8a\xa4 \xeb\xb6\x88\xeb\x9f\xac\xec\x98\xa4\xea\xb8\xb0 (\xeb\xac\xb5 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0)\n" },
#endif
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Stations ----\n\xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xec\x86\x8c\xec\x8a\xa4 \xeb\xb6\x88\xeb\x9f\xac\xec\x98\xa4\xea\xb8\xb0 (\xeb\xac\xb5 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventApplyStationUpdate_Parms, Update), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) }; // 944634097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "ApplyStationUpdate", Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::FactoryStateSubsystem_eventApplyStationUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::FactoryStateSubsystem_eventApplyStationUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execApplyStationUpdate)
{
	P_GET_STRUCT_REF(FStationState,Z_Param_Out_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStationUpdate(Z_Param_Out_Update);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function ApplyStationUpdate *************************

// ********** Begin Class UFactoryStateSubsystem Function GetAgvMotionLabel ************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics
{
	struct FactoryStateSubsystem_eventGetAgvMotionLabel_Parms
	{
		EAgvMotion Motion;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Motion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Motion;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_Motion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_Motion = { "Motion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetAgvMotionLabel_Parms, Motion), Z_Construct_UEnum_FactoryTwin_EAgvMotion, METADATA_PARAMS(0, nullptr) }; // 1459198739
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetAgvMotionLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_Motion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetAgvMotionLabel", Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::FactoryStateSubsystem_eventGetAgvMotionLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::FactoryStateSubsystem_eventGetAgvMotionLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetAgvMotionLabel)
{
	P_GET_ENUM(EAgvMotion,Z_Param_Motion);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UFactoryStateSubsystem::GetAgvMotionLabel(EAgvMotion(Z_Param_Motion));
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetAgvMotionLabel **************************

// ********** Begin Class UFactoryStateSubsystem Function GetAgvState ******************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics
{
	struct FactoryStateSubsystem_eventGetAgvState_Parms
	{
		FName AgvId;
		FAgvState OutState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|AGV" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AgvId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_AgvId = { "AgvId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetAgvState_Parms, AgvId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetAgvState_Parms, OutState), Z_Construct_UScriptStruct_FAgvState, METADATA_PARAMS(0, nullptr) }; // 555628927
void Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FactoryStateSubsystem_eventGetAgvState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FactoryStateSubsystem_eventGetAgvState_Parms), &Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_AgvId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_OutState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetAgvState", Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::FactoryStateSubsystem_eventGetAgvState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::FactoryStateSubsystem_eventGetAgvState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetAgvState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AgvId);
	P_GET_STRUCT_REF(FAgvState,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAgvState(Z_Param_AgvId,Z_Param_Out_OutState);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetAgvState ********************************

// ********** Begin Class UFactoryStateSubsystem Function GetConnectionLabel ***********************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics
{
	struct FactoryStateSubsystem_eventGetConnectionLabel_Parms
	{
		EDataFreshness Connection;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Connection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_Connection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetConnectionLabel_Parms, Connection), Z_Construct_UEnum_FactoryTwin_EDataFreshness, METADATA_PARAMS(0, nullptr) }; // 3698669306
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetConnectionLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_Connection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetConnectionLabel", Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::FactoryStateSubsystem_eventGetConnectionLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::FactoryStateSubsystem_eventGetConnectionLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetConnectionLabel)
{
	P_GET_ENUM(EDataFreshness,Z_Param_Connection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UFactoryStateSubsystem::GetConnectionLabel(EDataFreshness(Z_Param_Connection));
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetConnectionLabel *************************

// ********** Begin Class UFactoryStateSubsystem Function GetDisplayColor **************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics
{
	struct FactoryStateSubsystem_eventGetDisplayColor_Parms
	{
		FStationState State;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetDisplayColor_Parms, State), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 944634097
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetDisplayColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetDisplayColor", Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::FactoryStateSubsystem_eventGetDisplayColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::FactoryStateSubsystem_eventGetDisplayColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetDisplayColor)
{
	P_GET_STRUCT_REF(FStationState,Z_Param_Out_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UFactoryStateSubsystem::GetDisplayColor(Z_Param_Out_State);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetDisplayColor ****************************

// ********** Begin Class UFactoryStateSubsystem Function GetOperationLabel ************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics
{
	struct FactoryStateSubsystem_eventGetOperationLabel_Parms
	{
		EOperationState Operation;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Display helpers ----\n" },
#endif
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Display helpers ----" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetOperationLabel_Parms, Operation), Z_Construct_UEnum_FactoryTwin_EOperationState, METADATA_PARAMS(0, nullptr) }; // 3832099622
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetOperationLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetOperationLabel", Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::FactoryStateSubsystem_eventGetOperationLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::FactoryStateSubsystem_eventGetOperationLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetOperationLabel)
{
	P_GET_ENUM(EOperationState,Z_Param_Operation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UFactoryStateSubsystem::GetOperationLabel(EOperationState(Z_Param_Operation));
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetOperationLabel **************************

// ********** Begin Class UFactoryStateSubsystem Function GetPositionSourceLabel *******************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics
{
	struct FactoryStateSubsystem_eventGetPositionSourceLabel_Parms
	{
		EPositionSource Source;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetPositionSourceLabel_Parms, Source), Z_Construct_UEnum_FactoryTwin_EPositionSource, METADATA_PARAMS(0, nullptr) }; // 3936483430
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetPositionSourceLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetPositionSourceLabel", Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::FactoryStateSubsystem_eventGetPositionSourceLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::FactoryStateSubsystem_eventGetPositionSourceLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetPositionSourceLabel)
{
	P_GET_ENUM(EPositionSource,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UFactoryStateSubsystem::GetPositionSourceLabel(EPositionSource(Z_Param_Source));
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetPositionSourceLabel *********************

// ********** Begin Class UFactoryStateSubsystem Function GetSourceLabel ***************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics
{
	struct FactoryStateSubsystem_eventGetSourceLabel_Parms
	{
		EDataSource Source;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|Display" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetSourceLabel_Parms, Source), Z_Construct_UEnum_FactoryTwin_EDataSource, METADATA_PARAMS(0, nullptr) }; // 4192142815
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetSourceLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetSourceLabel", Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::FactoryStateSubsystem_eventGetSourceLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::FactoryStateSubsystem_eventGetSourceLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetSourceLabel)
{
	P_GET_ENUM(EDataSource,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UFactoryStateSubsystem::GetSourceLabel(EDataSource(Z_Param_Source));
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetSourceLabel *****************************

// ********** Begin Class UFactoryStateSubsystem Function GetStationState **************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics
{
	struct FactoryStateSubsystem_eventGetStationState_Parms
	{
		FName StationId;
		FStationState OutState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetStationState_Parms, StationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventGetStationState_Parms, OutState), Z_Construct_UScriptStruct_FStationState, METADATA_PARAMS(0, nullptr) }; // 944634097
void Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FactoryStateSubsystem_eventGetStationState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FactoryStateSubsystem_eventGetStationState_Parms), &Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_StationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_OutState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "GetStationState", Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::FactoryStateSubsystem_eventGetStationState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::FactoryStateSubsystem_eventGetStationState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execGetStationState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StationId);
	P_GET_STRUCT_REF(FStationState,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStationState(Z_Param_StationId,Z_Param_Out_OutState);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function GetStationState ****************************

// ********** Begin Class UFactoryStateSubsystem Function ReceiveAgvHeartbeat **********************
struct Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics
{
	struct FactoryStateSubsystem_eventReceiveAgvHeartbeat_Parms
	{
		FName AgvId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory|AGV" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AgvId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::NewProp_AgvId = { "AgvId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventReceiveAgvHeartbeat_Parms, AgvId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::NewProp_AgvId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "ReceiveAgvHeartbeat", Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::FactoryStateSubsystem_eventReceiveAgvHeartbeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::FactoryStateSubsystem_eventReceiveAgvHeartbeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execReceiveAgvHeartbeat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AgvId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveAgvHeartbeat(Z_Param_AgvId);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function ReceiveAgvHeartbeat ************************

// ********** Begin Class UFactoryStateSubsystem Function ReceiveHeartbeat *************************
struct Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics
{
	struct FactoryStateSubsystem_eventReceiveHeartbeat_Parms
	{
		FName StationId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::NewProp_StationId = { "StationId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FactoryStateSubsystem_eventReceiveHeartbeat_Parms, StationId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::NewProp_StationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFactoryStateSubsystem, nullptr, "ReceiveHeartbeat", Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::FactoryStateSubsystem_eventReceiveHeartbeat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::FactoryStateSubsystem_eventReceiveHeartbeat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFactoryStateSubsystem::execReceiveHeartbeat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_StationId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveHeartbeat(Z_Param_StationId);
	P_NATIVE_END;
}
// ********** End Class UFactoryStateSubsystem Function ReceiveHeartbeat ***************************

// ********** Begin Class UFactoryStateSubsystem ***************************************************
void UFactoryStateSubsystem::StaticRegisterNativesUFactoryStateSubsystem()
{
	UClass* Class = UFactoryStateSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAgvUpdate", &UFactoryStateSubsystem::execApplyAgvUpdate },
		{ "ApplyStationUpdate", &UFactoryStateSubsystem::execApplyStationUpdate },
		{ "GetAgvMotionLabel", &UFactoryStateSubsystem::execGetAgvMotionLabel },
		{ "GetAgvState", &UFactoryStateSubsystem::execGetAgvState },
		{ "GetConnectionLabel", &UFactoryStateSubsystem::execGetConnectionLabel },
		{ "GetDisplayColor", &UFactoryStateSubsystem::execGetDisplayColor },
		{ "GetOperationLabel", &UFactoryStateSubsystem::execGetOperationLabel },
		{ "GetPositionSourceLabel", &UFactoryStateSubsystem::execGetPositionSourceLabel },
		{ "GetSourceLabel", &UFactoryStateSubsystem::execGetSourceLabel },
		{ "GetStationState", &UFactoryStateSubsystem::execGetStationState },
		{ "ReceiveAgvHeartbeat", &UFactoryStateSubsystem::execReceiveAgvHeartbeat },
		{ "ReceiveHeartbeat", &UFactoryStateSubsystem::execReceiveHeartbeat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFactoryStateSubsystem;
UClass* UFactoryStateSubsystem::GetPrivateStaticClass()
{
	using TClass = UFactoryStateSubsystem;
	if (!Z_Registration_Info_UClass_UFactoryStateSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FactoryStateSubsystem"),
			Z_Registration_Info_UClass_UFactoryStateSubsystem.InnerSingleton,
			StaticRegisterNativesUFactoryStateSubsystem,
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
	return Z_Registration_Info_UClass_UFactoryStateSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFactoryStateSubsystem_NoRegister()
{
	return UFactoryStateSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFactoryStateSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FactoryStateSubsystem.h" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStationChanged_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAgvChanged_MetaData[] = {
		{ "Category", "Factory|AGV" },
		{ "ModuleRelativePath", "FactoryStateSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgvChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_ApplyAgvUpdate, "ApplyAgvUpdate" }, // 3460549365
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_ApplyStationUpdate, "ApplyStationUpdate" }, // 1082387625
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvMotionLabel, "GetAgvMotionLabel" }, // 3298719582
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetAgvState, "GetAgvState" }, // 1536090106
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetConnectionLabel, "GetConnectionLabel" }, // 4205295049
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetDisplayColor, "GetDisplayColor" }, // 79993779
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetOperationLabel, "GetOperationLabel" }, // 854330945
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetPositionSourceLabel, "GetPositionSourceLabel" }, // 864089562
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetSourceLabel, "GetSourceLabel" }, // 501995731
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_GetStationState, "GetStationState" }, // 3724580913
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveAgvHeartbeat, "ReceiveAgvHeartbeat" }, // 3395720955
		{ &Z_Construct_UFunction_UFactoryStateSubsystem_ReceiveHeartbeat, "ReceiveHeartbeat" }, // 3493382291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactoryStateSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFactoryStateSubsystem_Statics::NewProp_OnStationChanged = { "OnStationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryStateSubsystem, OnStationChanged), Z_Construct_UDelegateFunction_FactoryTwin_OnStationChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStationChanged_MetaData), NewProp_OnStationChanged_MetaData) }; // 2248870941
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFactoryStateSubsystem_Statics::NewProp_OnAgvChanged = { "OnAgvChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactoryStateSubsystem, OnAgvChanged), Z_Construct_UDelegateFunction_FactoryTwin_OnAgvChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAgvChanged_MetaData), NewProp_OnAgvChanged_MetaData) }; // 2530750083
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactoryStateSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryStateSubsystem_Statics::NewProp_OnStationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactoryStateSubsystem_Statics::NewProp_OnAgvChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryStateSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFactoryStateSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FactoryTwin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryStateSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactoryStateSubsystem_Statics::ClassParams = {
	&UFactoryStateSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFactoryStateSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryStateSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactoryStateSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactoryStateSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactoryStateSubsystem()
{
	if (!Z_Registration_Info_UClass_UFactoryStateSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactoryStateSubsystem.OuterSingleton, Z_Construct_UClass_UFactoryStateSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactoryStateSubsystem.OuterSingleton;
}
UFactoryStateSubsystem::UFactoryStateSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactoryStateSubsystem);
UFactoryStateSubsystem::~UFactoryStateSubsystem() {}
// ********** End Class UFactoryStateSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h__Script_FactoryTwin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactoryStateSubsystem, UFactoryStateSubsystem::StaticClass, TEXT("UFactoryStateSubsystem"), &Z_Registration_Info_UClass_UFactoryStateSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactoryStateSubsystem), 3780650855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h__Script_FactoryTwin_1520507473(TEXT("/Script/FactoryTwin"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h__Script_FactoryTwin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h__Script_FactoryTwin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
