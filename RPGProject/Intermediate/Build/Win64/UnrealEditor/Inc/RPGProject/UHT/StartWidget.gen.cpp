// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/UI/StartWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartWidget() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_UStartWidget();
	RPGPROJECT_API UClass* Z_Construct_UClass_UStartWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	DEFINE_FUNCTION(UStartWidget::execExitButtonUnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitButtonUnHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execExitButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execExitButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execStartButtonUnHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonUnHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execStartButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execStartButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonClick();
		P_NATIVE_END;
	}
	void UStartWidget::StaticRegisterNativesUStartWidget()
	{
		UClass* Class = UStartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitButtonClick", &UStartWidget::execExitButtonClick },
			{ "ExitButtonHovered", &UStartWidget::execExitButtonHovered },
			{ "ExitButtonUnHovered", &UStartWidget::execExitButtonUnHovered },
			{ "StartButtonClick", &UStartWidget::execStartButtonClick },
			{ "StartButtonHovered", &UStartWidget::execStartButtonHovered },
			{ "StartButtonUnHovered", &UStartWidget::execStartButtonUnHovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "ExitButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_ExitButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_ExitButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "ExitButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_ExitButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_ExitButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "ExitButtonUnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "StartButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_StartButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_StartButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "StartButtonHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_StartButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_StartButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "StartButtonUnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_StartButtonUnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStartWidget_StartButtonUnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStartWidget);
	UClass* Z_Construct_UClass_UStartWidget_NoRegister()
	{
		return UStartWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartWidget_ExitButtonClick, "ExitButtonClick" }, // 1097103725
		{ &Z_Construct_UFunction_UStartWidget_ExitButtonHovered, "ExitButtonHovered" }, // 313653148
		{ &Z_Construct_UFunction_UStartWidget_ExitButtonUnHovered, "ExitButtonUnHovered" }, // 2856065593
		{ &Z_Construct_UFunction_UStartWidget_StartButtonClick, "StartButtonClick" }, // 2228818621
		{ &Z_Construct_UFunction_UStartWidget_StartButtonHovered, "StartButtonHovered" }, // 2879815115
		{ &Z_Construct_UFunction_UStartWidget_StartButtonUnHovered, "StartButtonUnHovered" }, // 3648496814
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/StartWidget.h" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStartWidget_Statics::ClassParams = {
		&UStartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartWidget()
	{
		if (!Z_Registration_Info_UClass_UStartWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStartWidget.OuterSingleton, Z_Construct_UClass_UStartWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStartWidget.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UStartWidget>()
	{
		return UStartWidget::StaticClass();
	}
	UStartWidget::UStartWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartWidget);
	UStartWidget::~UStartWidget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_StartWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_StartWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStartWidget, UStartWidget::StaticClass, TEXT("UStartWidget"), &Z_Registration_Info_UClass_UStartWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStartWidget), 273704342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_StartWidget_h_3117114760(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_StartWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_UI_StartWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
