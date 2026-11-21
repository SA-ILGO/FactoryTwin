// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactoryMap.h"

#ifdef FACTORYTWIN_FactoryMap_generated_h
#error "FactoryMap.generated.h already included, missing '#pragma once' in FactoryMap.h"
#endif
#define FACTORYTWIN_FactoryMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFactoryMap **************************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationAtDistance); \
	DECLARE_FUNCTION(execGetLocationAtDistance); \
	DECLARE_FUNCTION(execWrapDistance); \
	DECLARE_FUNCTION(execForwardDistance); \
	DECLARE_FUNCTION(execGetStopDistance); \
	DECLARE_FUNCTION(execHasStop); \
	DECLARE_FUNCTION(execGetLoopLength);


FACTORYTWIN_API UClass* Z_Construct_UClass_AFactoryMap_NoRegister();

#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFactoryMap(); \
	friend struct Z_Construct_UClass_AFactoryMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORYTWIN_API UClass* Z_Construct_UClass_AFactoryMap_NoRegister(); \
public: \
	DECLARE_CLASS2(AFactoryMap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryTwin"), Z_Construct_UClass_AFactoryMap_NoRegister) \
	DECLARE_SERIALIZER(AFactoryMap)


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFactoryMap(AFactoryMap&&) = delete; \
	AFactoryMap(const AFactoryMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFactoryMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFactoryMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFactoryMap) \
	NO_API virtual ~AFactoryMap();


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_12_PROLOG
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFactoryMap;

// ********** End Class AFactoryMap ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
