// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAICharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UAIState_NoRegister();
	RPGPROJECT_API UEnum* Z_Construct_UEnum_RPGProject_EAICharacterState();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAICharacterState;
	static UEnum* EAICharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAICharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAICharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGProject_EAICharacterState, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("EAICharacterState"));
		}
		return Z_Registration_Info_UEnum_EAICharacterState.OuterSingleton;
	}
	template<> RPGPROJECT_API UEnum* StaticEnum<EAICharacterState>()
	{
		return EAICharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_RPGProject_EAICharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enumerators[] = {
		{ "EAICharacterState::Alive", (int64)EAICharacterState::Alive },
		{ "EAICharacterState::Death", (int64)EAICharacterState::Death },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enum_MetaDataParams[] = {
		{ "Alive.Name", "EAICharacterState::Alive" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EAICharacterState::Death" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RPGProject,
		nullptr,
		"EAICharacterState",
		"EAICharacterState",
		Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RPGProject_EAICharacterState()
	{
		if (!Z_Registration_Info_UEnum_EAICharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAICharacterState.InnerSingleton, Z_Construct_UEnum_RPGProject_EAICharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAICharacterState.InnerSingleton;
	}
	void AAICharacter::StaticRegisterNativesAAICharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAICharacter);
	UClass* Z_Construct_UClass_AAICharacter_NoRegister()
	{
		return AAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AIState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_AIState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_m_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_DissolveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_DissolveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AICharacter.h" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State = { "m_State", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAICharacter, m_State), Z_Construct_UEnum_RPGProject_EAICharacterState, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State_MetaData)) }; // 747177807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAICharacter, m_Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_m_AIState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_AIState = { "m_AIState", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAICharacter, m_AIState), Z_Construct_UClass_UAIState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_AIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_AIState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Name = { "m_Name", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAICharacter, m_Name), METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_m_DissolveTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "ModuleRelativePath", "AI/AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_m_DissolveTime = { "m_DissolveTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAICharacter, m_DissolveTime), METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_DissolveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_m_DissolveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_AIState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_m_DissolveTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_Statics::ClassParams = {
		&AAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacter()
	{
		if (!Z_Registration_Info_UClass_AAICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAICharacter.OuterSingleton, Z_Construct_UClass_AAICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAICharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AAICharacter>()
	{
		return AAICharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter);
	AAICharacter::~AAICharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::EnumInfo[] = {
		{ EAICharacterState_StaticEnum, TEXT("EAICharacterState"), &Z_Registration_Info_UEnum_EAICharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747177807U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAICharacter, AAICharacter::StaticClass, TEXT("AAICharacter"), &Z_Registration_Info_UClass_AAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAICharacter), 2822321377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_2172654431(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AICharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
