// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Projectiles/chair_throwable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodechair_throwable() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Achair_throwable_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Achair_throwable();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AProjectileBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
// End Cross Module References
	void Achair_throwable::StaticRegisterNativesAchair_throwable()
	{
	}
	UClass* Z_Construct_UClass_Achair_throwable_NoRegister()
	{
		return Achair_throwable::StaticClass();
	}
	struct Z_Construct_UClass_Achair_throwable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Achair_throwable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achair_throwable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/chair_throwable.h" },
		{ "ModuleRelativePath", "Public/Projectiles/chair_throwable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Achair_throwable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Achair_throwable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Achair_throwable_Statics::ClassParams = {
		&Achair_throwable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Achair_throwable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Achair_throwable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Achair_throwable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Achair_throwable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Achair_throwable, 2776762159);
	template<> ASSIGNMENT02_API UClass* StaticClass<Achair_throwable>()
	{
		return Achair_throwable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Achair_throwable(Z_Construct_UClass_Achair_throwable, &Achair_throwable::StaticClass, TEXT("/Script/Assignment02"), TEXT("Achair_throwable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Achair_throwable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
