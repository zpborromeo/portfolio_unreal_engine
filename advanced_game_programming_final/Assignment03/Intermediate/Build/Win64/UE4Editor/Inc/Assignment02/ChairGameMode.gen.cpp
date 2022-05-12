// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/character_stuff/ChairGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChairGameMode() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AChairGameMode_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AChairGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AChairGameMode::StaticRegisterNativesAChairGameMode()
	{
	}
	UClass* Z_Construct_UClass_AChairGameMode_NoRegister()
	{
		return AChairGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChairGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameCompleteWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultGameCompleteWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCompleteWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameCompleteWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChairGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChairGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "character_stuff/ChairGameMode.h" },
		{ "ModuleRelativePath", "Public/character_stuff/ChairGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChairGameMode_Statics::NewProp_DefaultGameCompleteWidget_MetaData[] = {
		{ "Category", "UMG" },
		{ "ModuleRelativePath", "Public/character_stuff/ChairGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChairGameMode_Statics::NewProp_DefaultGameCompleteWidget = { "DefaultGameCompleteWidget", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChairGameMode, DefaultGameCompleteWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChairGameMode_Statics::NewProp_DefaultGameCompleteWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChairGameMode_Statics::NewProp_DefaultGameCompleteWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChairGameMode_Statics::NewProp_GameCompleteWidget_MetaData[] = {
		{ "Category", "UMG" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/character_stuff/ChairGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChairGameMode_Statics::NewProp_GameCompleteWidget = { "GameCompleteWidget", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChairGameMode, GameCompleteWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChairGameMode_Statics::NewProp_GameCompleteWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChairGameMode_Statics::NewProp_GameCompleteWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChairGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChairGameMode_Statics::NewProp_DefaultGameCompleteWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChairGameMode_Statics::NewProp_GameCompleteWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChairGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChairGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChairGameMode_Statics::ClassParams = {
		&AChairGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChairGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChairGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChairGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChairGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChairGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChairGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChairGameMode, 406678389);
	template<> ASSIGNMENT02_API UClass* StaticClass<AChairGameMode>()
	{
		return AChairGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChairGameMode(Z_Construct_UClass_AChairGameMode, &AChairGameMode::StaticClass, TEXT("/Script/Assignment02"), TEXT("AChairGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChairGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
