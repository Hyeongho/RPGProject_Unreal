// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPGPROJECT_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define RPGPROJECT_GameInfo_generated_h

#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerDataTable_Statics; \
	RPGPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> RPGPROJECT_API UScriptStruct* StaticStruct<struct FPlayerDataTable>();

#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataTable_Statics; \
	RPGPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> RPGPROJECT_API UScriptStruct* StaticStruct<struct FAIDataTable>();

#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_SPARSE_DATA
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_RPC_WRAPPERS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_ACCESSORS
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUGameInfo(); \
	friend struct Z_Construct_UClass_UGameInfo_Statics; \
public: \
	DECLARE_CLASS(UGameInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGProject"), NO_API) \
	DECLARE_SERIALIZER(UGameInfo)


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	NO_API virtual ~UGameInfo();


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInfo(UGameInfo&&); \
	NO_API UGameInfo(const UGameInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInfo) \
	NO_API virtual ~UGameInfo();


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_118_PROLOG
#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_RPC_WRAPPERS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_INCLASS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_SPARSE_DATA \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_ACCESSORS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_INCLASS_NO_PURE_DECLS \
	FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPGPROJECT_API UClass* StaticClass<class UGameInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_RPGProject_RPGProject_Source_RPGProject_GameInfo_h


#define FOREACH_ENUM_EPLAYERJOB(op) \
	op(EPlayerJob::None) \
	op(EPlayerJob::Knight) \
	op(EPlayerJob::Archer) \
	op(EPlayerJob::Magicion) 

enum class EPlayerJob : uint8;
template<> struct TIsUEnumClass<EPlayerJob> { enum { Value = true }; };
template<> RPGPROJECT_API UEnum* StaticEnum<EPlayerJob>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
