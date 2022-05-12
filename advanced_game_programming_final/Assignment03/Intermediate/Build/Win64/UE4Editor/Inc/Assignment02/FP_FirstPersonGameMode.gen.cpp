// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/FP_FirstPerson/FP_FirstPersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonGameMode() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
// End Cross Module References
	void AFP_FirstPersonGameMode::StaticRegisterNativesAFP_FirstPersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister()
	{
		return AFP_FirstPersonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFP_FirstPersonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_FirstPersonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::ClassParams = {
		&AFP_FirstPersonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonGameMode, 2983915953);
	template<> ASSIGNMENT02_API UClass* StaticClass<AFP_FirstPersonGameMode>()
	{
		return AFP_FirstPersonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonGameMode(Z_Construct_UClass_AFP_FirstPersonGameMode, &AFP_FirstPersonGameMode::StaticClass, TEXT("/Script/Assignment02"), TEXT("AFP_FirstPersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
