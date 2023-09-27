// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGPROJECT_PlayerAnimInstance_generated_h
#error "PlayerAnimInstance.generated.h already included, missing '#pragma once' in PlayerAnimInstance.h"
#endif
#define RPGPROJECT_PlayerAnimInstance_generated_h

#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_SPARSE_DATA
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_RPC_WRAPPERS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_ACCESSORS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnimInstance)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public:


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnimInstance(UPlayerAnimInstance&&); \
	NO_API UPlayerAnimInstance(const UPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnimInstance)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_19_PROLOG
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_RPC_WRAPPERS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_INCLASS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGPROJECT_API UClass* StaticClass<class UPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h


#define FOREACH_ENUM_EPLAYERANIMTYPE(op) \
	op(EPlayerAnimType::Default) \
	op(EPlayerAnimType::Jump) \
	op(EPlayerAnimType::Fall) \
	op(EPlayerAnimType::Death) \
	op(EPlayerAnimType::Teleport) 

enum class EPlayerAnimType : uint8;
template<> struct TIsUEnumClass<EPlayerAnimType> { enum { Value = true }; };
template<> RPGPROJECT_API UEnum* StaticEnum<EPlayerAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
