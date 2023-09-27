// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/UI/Level1Widget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevel1Widget() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_ULevel1Widget();
	RPGPROJECT_API UClass* Z_Construct_UClass_ULevel1Widget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void ULevel1Widget::StaticRegisterNativesULevel1Widget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevel1Widget);
	UClass* Z_Construct_UClass_ULevel1Widget_NoRegister()
	{
		return ULevel1Widget::StaticClass();
	}
	struct Z_Construct_UClass_ULevel1Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevel1Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel1Widget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Level1Widget.h" },
		{ "ModuleRelativePath", "UI/Level1Widget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevel1Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevel1Widget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevel1Widget_Statics::ClassParams = {
		&ULevel1Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevel1Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel1Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevel1Widget()
	{
		if (!Z_Registration_Info_UClass_ULevel1Widget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevel1Widget.OuterSingleton, Z_Construct_UClass_ULevel1Widget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevel1Widget.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ULevel1Widget>()
	{
		return ULevel1Widget::StaticClass();
	}
	ULevel1Widget::ULevel1Widget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevel1Widget);
	ULevel1Widget::~ULevel1Widget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_Level1Widget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_Level1Widget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevel1Widget, ULevel1Widget::StaticClass, TEXT("ULevel1Widget"), &Z_Registration_Info_UClass_ULevel1Widget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevel1Widget), 1507552796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_Level1Widget_h_2677688818(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_Level1Widget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_Level1Widget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
