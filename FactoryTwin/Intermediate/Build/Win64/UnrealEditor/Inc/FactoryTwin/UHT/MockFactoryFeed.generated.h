// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockFactoryFeed.h"

#ifdef FACTORYTWIN_MockFactoryFeed_generated_h
#error "MockFactoryFeed.generated.h already included, missing '#pragma once' in MockFactoryFeed.h"
#endif
#define FACTORYTWIN_MockFactoryFeed_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOperationState : uint8;

// ********** Begin Class AMockFactoryFeed *********************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAutoScenario); \
	DECLARE_FUNCTION(execIsStationLinkCut); \
	DECLARE_FUNCTION(execSetStationLinkCut); \
	DECLARE_FUNCTION(execInjectOperation);


FACTORYTWIN_API UClass* Z_Construct_UClass_AMockFactoryFeed_NoRegister();

#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMockFactoryFeed(); \
	friend struct Z_Construct_UClass_AMockFactoryFeed_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORYTWIN_API UClass* Z_Construct_UClass_AMockFactoryFeed_NoRegister(); \
public: \
	DECLARE_CLASS2(AMockFactoryFeed, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryTwin"), Z_Construct_UClass_AMockFactoryFeed_NoRegister) \
	DECLARE_SERIALIZER(AMockFactoryFeed)


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMockFactoryFeed(AMockFactoryFeed&&) = delete; \
	AMockFactoryFeed(const AMockFactoryFeed&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMockFactoryFeed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMockFactoryFeed); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMockFactoryFeed) \
	NO_API virtual ~AMockFactoryFeed();


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_12_PROLOG
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMockFactoryFeed;

// ********** End Class AMockFactoryFeed ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_MockFactoryFeed_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
