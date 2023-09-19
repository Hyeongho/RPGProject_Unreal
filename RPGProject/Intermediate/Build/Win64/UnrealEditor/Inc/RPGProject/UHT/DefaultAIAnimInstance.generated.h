// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/DefaultAIAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGPROJECT_DefaultAIAnimInstance_generated_h
#error "DefaultAIAnimInstance.generated.h already included, missing '#pragma once' in DefaultAIAnimInstance.h"
#endif
#define RPGPROJECT_DefaultAIAnimInstance_generated_h

#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_SPARSE_DATA
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_RPC_WRAPPERS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_ACCESSORS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultAIAnimInstance(); \
	friend struct Z_Construct_UClass_UDefaultAIAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDefaultAIAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UDefaultAIAnimInstance)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultAIAnimInstance(); \
	friend struct Z_Construct_UClass_UDefaultAIAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDefaultAIAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UDefaultAIAnimInstance)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultAIAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultAIAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultAIAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultAIAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultAIAnimInstance(UDefaultAIAnimInstance&&); \
	NO_API UDefaultAIAnimInstance(const UDefaultAIAnimInstance&); \
public: \
	NO_API virtual ~UDefaultAIAnimInstance();


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDefaultAIAnimInstance(UDefaultAIAnimInstance&&); \
	NO_API UDefaultAIAnimInstance(const UDefaultAIAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultAIAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultAIAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDefaultAIAnimInstance) \
	NO_API virtual ~UDefaultAIAnimInstance();


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_22_PROLOG
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_RPC_WRAPPERS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_INCLASS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGPROJECT_API UClass* StaticClass<class UDefaultAIAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h


#define FOREACH_ENUM_EAIANIMTYPE(op) \
	op(EAIAnimType::Idle) \
	op(EAIAnimType::Walk) \
	op(EAIAnimType::Run) \
	op(EAIAnimType::Attack) \
	op(EAIAnimType::Death) \
	op(EAIAnimType::Skill1) \
	op(EAIAnimType::Skill2) \
	op(EAIAnimType::Skill3) 

enum class EAIAnimType : uint8;
template<> struct TIsUEnumClass<EAIAnimType> { enum { Value = true }; };
template<> RPGPROJECT_API UEnum* StaticEnum<EAIAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
