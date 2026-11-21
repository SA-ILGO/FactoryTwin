// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StationActor.h"

#ifdef FACTORYTWIN_StationActor_generated_h
#error "StationActor.generated.h already included, missing '#pragma once' in StationActor.h"
#endif
#define FACTORYTWIN_StationActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FStationState;

// ********** Begin Class AStationActor ************************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStationChanged); \
	DECLARE_FUNCTION(execGetViewState);


FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor_NoRegister();

#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStationActor(); \
	friend struct Z_Construct_UClass_AStationActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORYTWIN_API UClass* Z_Construct_UClass_AStationActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AStationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryTwin"), Z_Construct_UClass_AStationActor_NoRegister) \
	DECLARE_SERIALIZER(AStationActor)


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStationActor(AStationActor&&) = delete; \
	AStationActor(const AStationActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStationActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStationActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStationActor) \
	NO_API virtual ~AStationActor();


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_16_PROLOG
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStationActor;

// ********** End Class AStationActor **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_StationActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
