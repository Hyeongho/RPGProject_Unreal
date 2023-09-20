// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIMinionCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMinionCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAICharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIMinionCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIMinionCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AAIMinionCharacter::StaticRegisterNativesAAIMinionCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIMinionCharacter);
	UClass* Z_Construct_UClass_AAIMinionCharacter_NoRegister()
	{
		return AAIMinionCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIMinionCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Ragdoll_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Ragdoll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIMinionCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAICharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMinionCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIMinionCharacter.h" },
		{ "ModuleRelativePath", "AI/AIMinionCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMinionCharacter_Statics::NewProp_m_Ragdoll_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "AI/AIMinionCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAIMinionCharacter_Statics::NewProp_m_Ragdoll = { "m_Ragdoll", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAIMinionCharacter, m_Ragdoll), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIMinionCharacter_Statics::NewProp_m_Ragdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMinionCharacter_Statics::NewProp_m_Ragdoll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIMinionCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIMinionCharacter_Statics::NewProp_m_Ragdoll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIMinionCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIMinionCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIMinionCharacter_Statics::ClassParams = {
		&AAIMinionCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIMinionCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIMinionCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIMinionCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMinionCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIMinionCharacter()
	{
		if (!Z_Registration_Info_UClass_AAIMinionCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIMinionCharacter.OuterSingleton, Z_Construct_UClass_AAIMinionCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIMinionCharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AAIMinionCharacter>()
	{
		return AAIMinionCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIMinionCharacter);
	AAIMinionCharacter::~AAIMinionCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIMinionCharacter, AAIMinionCharacter::StaticClass, TEXT("AAIMinionCharacter"), &Z_Registration_Info_UClass_AAIMinionCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIMinionCharacter), 3171574901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionCharacter_h_542000209(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
