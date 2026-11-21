// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgvActor.h"

#ifdef FACTORYTWIN_AgvActor_generated_h
#error "AgvActor.generated.h already included, missing '#pragma once' in AgvActor.h"
#endif
#define FACTORYTWIN_AgvActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAgvCameraMode : uint8;
struct FAgvState;

// ********** Begin Class AAgvActor ****************************************************************
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAgvChanged); \
	DECLARE_FUNCTION(execGetViewState); \
	DECLARE_FUNCTION(execUseCamera);


FACTORYTWIN_API UClass* Z_Construct_UClass_AAgvActor_NoRegister();

#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgvActor(); \
	friend struct Z_Construct_UClass_AAgvActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FACTORYTWIN_API UClass* Z_Construct_UClass_AAgvActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAgvActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryTwin"), Z_Construct_UClass_AAgvActor_NoRegister) \
	DECLARE_SERIALIZER(AAgvActor)


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAgvActor(AAgvActor&&) = delete; \
	AAgvActor(const AAgvActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgvActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgvActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAgvActor) \
	NO_API virtual ~AAgvActor();


#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_28_PROLOG
#define FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAgvActor;

// ********** End Class AAgvActor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_GitHub_FactoryTwin_FactoryTwin_Source_FactoryTwin_AgvActor_h

// ********** Begin Enum EAgvCameraMode ************************************************************
#define FOREACH_ENUM_EAGVCAMERAMODE(op) \
	op(EAgvCameraMode::Follow) \
	op(EAgvCameraMode::Pov) 

enum class EAgvCameraMode : uint8;
template<> struct TIsUEnumClass<EAgvCameraMode> { enum { Value = true }; };
template<> FACTORYTWIN_API UEnum* StaticEnum<EAgvCameraMode>();
// ********** End Enum EAgvCameraMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
