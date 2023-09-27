// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIModule/BTDecorator_CheckTargetDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckTargetDistance() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTDecorator_CheckTargetDistance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTDecorator_CheckTargetDistance_NoRegister();
	RPGPROJECT_API UEnum* Z_Construct_UEnum_RPGProject_ECheckDistanceType();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheckDistanceType;
	static UEnum* ECheckDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECheckDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECheckDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RPGProject_ECheckDistanceType, (UObject*)Z_Construct_UPackage__Script_RPGProject(), TEXT("ECheckDistanceType"));
		}
		return Z_Registration_Info_UEnum_ECheckDistanceType.OuterSingleton;
	}
	template<> RPGPROJECT_API UEnum* StaticEnum<ECheckDistanceType>()
	{
		return ECheckDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enumerators[] = {
		{ "ECheckDistanceType::Attack", (int64)ECheckDistanceType::Attack },
		{ "ECheckDistanceType::Interaction", (int64)ECheckDistanceType::Interaction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "Attack.Name", "ECheckDistanceType::Attack" },
		{ "BlueprintType", "true" },
		{ "Interaction.Name", "ECheckDistanceType::Interaction" },
		{ "ModuleRelativePath", "AI/AIModule/BTDecorator_CheckTargetDistance.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RPGProject,
		nullptr,
		"ECheckDistanceType",
		"ECheckDistanceType",
		Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RPGProject_ECheckDistanceType()
	{
		if (!Z_Registration_Info_UEnum_ECheckDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheckDistanceType.InnerSingleton, Z_Construct_UEnum_RPGProject_ECheckDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECheckDistanceType.InnerSingleton;
	}
	void UBTDecorator_CheckTargetDistance::StaticRegisterNativesUBTDecorator_CheckTargetDistance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CheckTargetDistance);
	UClass* Z_Construct_UClass_UBTDecorator_CheckTargetDistance_NoRegister()
	{
		return UBTDecorator_CheckTargetDistance::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_CheckType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CheckType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_CheckType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AIModule/BTDecorator_CheckTargetDistance.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTDecorator_CheckTargetDistance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BTDecorator_CheckTargetDistance" },
		{ "ModuleRelativePath", "AI/AIModule/BTDecorator_CheckTargetDistance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType = { "m_CheckType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_CheckTargetDistance, m_CheckType), Z_Construct_UEnum_RPGProject_ECheckDistanceType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType_MetaData)) }; // 1517118177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::NewProp_m_CheckType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckTargetDistance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::ClassParams = {
		&UBTDecorator_CheckTargetDistance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CheckTargetDistance()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_CheckTargetDistance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CheckTargetDistance.OuterSingleton, Z_Construct_UClass_UBTDecorator_CheckTargetDistance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_CheckTargetDistance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UBTDecorator_CheckTargetDistance>()
	{
		return UBTDecorator_CheckTargetDistance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckTargetDistance);
	UBTDecorator_CheckTargetDistance::~UBTDecorator_CheckTargetDistance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::EnumInfo[] = {
		{ ECheckDistanceType_StaticEnum, TEXT("ECheckDistanceType"), &Z_Registration_Info_UEnum_ECheckDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1517118177U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CheckTargetDistance, UBTDecorator_CheckTargetDistance::StaticClass, TEXT("UBTDecorator_CheckTargetDistance"), &Z_Registration_Info_UClass_UBTDecorator_CheckTargetDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CheckTargetDistance), 177634620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_3139527637(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_CheckTargetDistance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
