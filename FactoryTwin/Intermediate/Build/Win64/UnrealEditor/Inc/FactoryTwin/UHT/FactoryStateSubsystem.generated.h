// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FactoryStateSubsystem.h"

#ifdef FACTORYTWIN_FactoryStateSubsystem_generated_h
#error "FactoryStateSubsystem.generated.h already included, missing '#pragma once' in FactoryStateSubsystem.h"
#endif
#define FACTORYTWIN_FactoryStateSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAgvMotion : uint8;
enum class EDataFreshness : uint8;
enum class EDataSource : uint8;
enum class EOperationState : uint8;
enum class EPositionSource : uint8;
struct FAgvState;
struct FLinearColor;
struct FStationState;

// ********** Begin Delegate FOnStationChanged *****************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_11_DELEGATE \
FACTORYTWIN_API void FOnStationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStationChanged, FStationState const& State);


// ********** End Delegate FOnStationChanged *******************************************************

// ********** Begin Delegate FOnAgvChanged *********************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_12_DELEGATE \
FACTORYTWIN_API void FOnAgvChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAgvChanged, FAgvState const& State);


// ********** End Delegate FOnAgvChanged ***********************************************************

// ********** Begin Class UFactoryStateSubsystem ***************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPositionSourceLabel); \
	DECLARE_FUNCTION(execGetAgvMotionLabel); \
	DECLARE_FUNCTION(execGetDisplayColor); \
	DECLARE_FUNCTION(execGetSourceLabel); \
	DECLARE_FUNCTION(execGetConnectionLabel); \
	DECLARE_FUNCTION(execGetOperationLabel); \
	DECLARE_FUNCTION(execGetAgvState); \
	DECLARE_FUNCTION(execReceiveAgvHeartbeat); \
	DECLARE_FUNCTION(execApplyAgvUpdate); \
	DECLARE_FUNCTION(execGetStationState); \
	DECLARE_FUNCTION(execReceiveHeartbeat); \
	DECLARE_FUNCTION(execApplyStationUpdate);


FACTORYTWIN_API UClass* Z_Construct_UClass_UFactoryStateSubsystem_NoRegister();

#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFactoryStateSubsystem(); \
	friend struct Z_Construct_UClass_UFactoryStateSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORYTWIN_API UClass* Z_Construct_UClass_UFactoryStateSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFactoryStateSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryTwin"), Z_Construct_UClass_UFactoryStateSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UFactoryStateSubsystem)


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFactoryStateSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFactoryStateSubsystem(UFactoryStateSubsystem&&) = delete; \
	UFactoryStateSubsystem(const UFactoryStateSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFactoryStateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactoryStateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFactoryStateSubsystem) \
	NO_API virtual ~UFactoryStateSubsystem();


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_17_PROLOG
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFactoryStateSubsystem;

// ********** End Class UFactoryStateSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_FactoryStateSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
