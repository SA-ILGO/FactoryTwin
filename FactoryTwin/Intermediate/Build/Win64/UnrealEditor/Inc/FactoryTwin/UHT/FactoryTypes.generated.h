// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactoryTypes.h"

#ifdef FACTORYTWIN_FactoryTypes_generated_h
#error "FactoryTypes.generated.h already included, missing '#pragma once' in FactoryTypes.h"
#endif
#define FACTORYTWIN_FactoryTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStationState *****************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStationState_Statics; \
	FACTORYTWIN_API static class UScriptStruct* StaticStruct();


struct FStationState;
// ********** End ScriptStruct FStationState *******************************************************

// ********** Begin ScriptStruct FAgvState *********************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgvState_Statics; \
	FACTORYTWIN_API static class UScriptStruct* StaticStruct();


struct FAgvState;
// ********** End ScriptStruct FAgvState ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryTypes_h

// ********** Begin Enum EOperationState ***********************************************************
#define FOREACH_ENUM_EOPERATIONSTATE(op) \
	op(EOperationState::Idle) \
	op(EOperationState::Working) \
	op(EOperationState::Waiting) \
	op(EOperationState::Complete) \
	op(EOperationState::Error) 

enum class EOperationState : uint8;
template<> struct TIsUEnumClass<EOperationState> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EOperationState>();
// ********** End Enum EOperationState *************************************************************

// ********** Begin Enum EDataFreshness ************************************************************
#define FOREACH_ENUM_EDATAFRESHNESS(op) \
	op(EDataFreshness::Online) \
	op(EDataFreshness::Stale) \
	op(EDataFreshness::Offline) 

enum class EDataFreshness : uint8;
template<> struct TIsUEnumClass<EDataFreshness> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EDataFreshness>();
// ********** End Enum EDataFreshness **************************************************************

// ********** Begin Enum EDataSource ***************************************************************
#define FOREACH_ENUM_EDATASOURCE(op) \
	op(EDataSource::Confirmed) \
	op(EDataSource::Observed) \
	op(EDataSource::Estimated) \
	op(EDataSource::Simulated) 

enum class EDataSource : uint8;
template<> struct TIsUEnumClass<EDataSource> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EDataSource>();
// ********** End Enum EDataSource *****************************************************************

// ********** Begin Enum EAgvMotion ****************************************************************
#define FOREACH_ENUM_EAGVMOTION(op) \
	op(EAgvMotion::Stopped) \
	op(EAgvMotion::Moving) 

enum class EAgvMotion : uint8;
template<> struct TIsUEnumClass<EAgvMotion> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EAgvMotion>();
// ********** End Enum EAgvMotion ******************************************************************

// ********** Begin Enum EPositionSource ***********************************************************
#define FOREACH_ENUM_EPOSITIONSOURCE(op) \
	op(EPositionSource::StationConfirmed) \
	op(EPositionSource::Estimated) 

enum class EPositionSource : uint8;
template<> struct TIsUEnumClass<EPositionSource> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EPositionSource>();
// ********** End Enum EPositionSource *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
