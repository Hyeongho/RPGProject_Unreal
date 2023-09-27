// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/DefaultAIAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAIAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UDefaultAIAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UDefaultAIAnimInstance_NoRegister();
	RPGPROJECT_API UEnum* Z_Construct_UEnum_RPGProject_EAIAnimType();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIAnimType;
	static UEnum* EAIAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGProject_EAIAnimType, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("EAIAnimType"));
		}
		return Z_Registration_Info_UEnum_EAIAnimType.OuterSingleton;
	}
	template<> RPGPROJECT_API UEnum* StaticEnum<EAIAnimType>()
	{
		return EAIAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_RPGProject_EAIAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enumerators[] = {
		{ "EAIAnimType::Start", (int64)EAIAnimType::Start },
		{ "EAIAnimType::Idle", (int64)EAIAnimType::Idle },
		{ "EAIAnimType::Walk", (int64)EAIAnimType::Walk },
		{ "EAIAnimType::Run", (int64)EAIAnimType::Run },
		{ "EAIAnimType::Attack", (int64)EAIAnimType::Attack },
		{ "EAIAnimType::Death", (int64)EAIAnimType::Death },
		{ "EAIAnimType::Skill1", (int64)EAIAnimType::Skill1 },
		{ "EAIAnimType::Skill2", (int64)EAIAnimType::Skill2 },
		{ "EAIAnimType::Skill3", (int64)EAIAnimType::Skill3 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "EAIAnimType::Attack" },
		{ "BlueprintType", "true" },
		{ "Death.Name", "EAIAnimType::Death" },
		{ "Idle.Name", "EAIAnimType::Idle" },
		{ "ModuleRelativePath", "AI/DefaultAIAnimInstance.h" },
		{ "Run.Name", "EAIAnimType::Run" },
		{ "Skill1.Name", "EAIAnimType::Skill1" },
		{ "Skill2.Name", "EAIAnimType::Skill2" },
		{ "Skill3.Name", "EAIAnimType::Skill3" },
		{ "Start.Name", "EAIAnimType::Start" },
		{ "Walk.Name", "EAIAnimType::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RPGProject,
		nullptr,
		"EAIAnimType",
		"EAIAnimType",
		Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RPGProject_EAIAnimType()
	{
		if (!Z_Registration_Info_UEnum_EAIAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIAnimType.InnerSingleton, Z_Construct_UEnum_RPGProject_EAIAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIAnimType.InnerSingleton;
	}
	void UDefaultAIAnimInstance::StaticRegisterNativesUDefaultAIAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultAIAnimInstance);
	UClass* Z_Construct_UClass_UDefaultAIAnimInstance_NoRegister()
	{
		return UDefaultAIAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultAIAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_AnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_AnimType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultAIAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultAIAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/DefaultAIAnimInstance.h" },
		{ "ModuleRelativePath", "AI/DefaultAIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "AI/DefaultAIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType = { "m_AnimType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultAIAnimInstance, m_AnimType), Z_Construct_UEnum_RPGProject_EAIAnimType, METADATA_PARAMS(Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType_MetaData)) }; // 4008858893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultAIAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAIAnimInstance_Statics::NewProp_m_AnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultAIAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAIAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAIAnimInstance_Statics::ClassParams = {
		&UDefaultAIAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultAIAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAIAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultAIAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAIAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultAIAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UDefaultAIAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultAIAnimInstance.OuterSingleton, Z_Construct_UClass_UDefaultAIAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultAIAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UDefaultAIAnimInstance>()
	{
		return UDefaultAIAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAIAnimInstance);
	UDefaultAIAnimInstance::~UDefaultAIAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::EnumInfo[] = {
		{ EAIAnimType_StaticEnum, TEXT("EAIAnimType"), &Z_Registration_Info_UEnum_EAIAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4008858893U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultAIAnimInstance, UDefaultAIAnimInstance::StaticClass, TEXT("UDefaultAIAnimInstance"), &Z_Registration_Info_UClass_UDefaultAIAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultAIAnimInstance), 2685581510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_2390782398(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
