// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/PlayerAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	RPGPROJECT_API UEnum* Z_Construct_UEnum_RPGProject_EPlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAnimType;
	static UEnum* EPlayerAnimType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGProject_EPlayerAnimType, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("EPlayerAnimType"));
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.OuterSingleton;
	}
	template<> RPGPROJECT_API UEnum* StaticEnum<EPlayerAnimType>()
	{
		return EPlayerAnimType_StaticEnum();
	}
	struct Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enumerators[] = {
		{ "EPlayerAnimType::Default", (int64)EPlayerAnimType::Default },
		{ "EPlayerAnimType::Jump", (int64)EPlayerAnimType::Jump },
		{ "EPlayerAnimType::Fall", (int64)EPlayerAnimType::Fall },
		{ "EPlayerAnimType::Death", (int64)EPlayerAnimType::Death },
		{ "EPlayerAnimType::Teleport", (int64)EPlayerAnimType::Teleport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Death.Name", "EPlayerAnimType::Death" },
		{ "Default.Name", "EPlayerAnimType::Default" },
		{ "Fall.Name", "EPlayerAnimType::Fall" },
		{ "Jump.Name", "EPlayerAnimType::Jump" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
		{ "Teleport.Name", "EPlayerAnimType::Teleport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RPGProject,
		nullptr,
		"EPlayerAnimType",
		"EPlayerAnimType",
		Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RPGProject_EPlayerAnimType()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton, Z_Construct_UEnum_RPGProject_EPlayerAnimType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAnimType.InnerSingleton;
	}
	void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
	UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_MoveSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_AnimType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AnimType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_AnimType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_AttackMontage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_AttackMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_MoveSpeed = { "m_MoveSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerAnimInstance, m_MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_MoveSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType = { "m_AnimType", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerAnimInstance, m_AnimType), Z_Construct_UEnum_RPGProject_EPlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData)) }; // 1491423831
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage_Inner = { "m_AttackMontage", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Player/PlayerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage = { "m_AttackMontage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerAnimInstance, m_AttackMontage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AnimType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_m_AttackMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
		&UPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UPlayerAnimInstance>()
	{
		return UPlayerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::EnumInfo[] = {
		{ EPlayerAnimType_StaticEnum, TEXT("EPlayerAnimType"), &Z_Registration_Info_UEnum_EPlayerAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1491423831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 3325014489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_638959607(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_PlayerAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
