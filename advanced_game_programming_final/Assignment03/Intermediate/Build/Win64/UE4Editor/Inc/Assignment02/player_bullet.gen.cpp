// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Projectiles/player_bullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayer_bullet() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Aplayer_bullet_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Aplayer_bullet();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Achair_throwable();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
// End Cross Module References
	void Aplayer_bullet::StaticRegisterNativesAplayer_bullet()
	{
	}
	UClass* Z_Construct_UClass_Aplayer_bullet_NoRegister()
	{
		return Aplayer_bullet::StaticClass();
	}
	struct Z_Construct_UClass_Aplayer_bullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplayer_bullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Achair_throwable,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_bullet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/player_bullet.h" },
		{ "ModuleRelativePath", "Public/Projectiles/player_bullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplayer_bullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplayer_bullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplayer_bullet_Statics::ClassParams = {
		&Aplayer_bullet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aplayer_bullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aplayer_bullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplayer_bullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplayer_bullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aplayer_bullet, 3373880639);
	template<> ASSIGNMENT02_API UClass* StaticClass<Aplayer_bullet>()
	{
		return Aplayer_bullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplayer_bullet(Z_Construct_UClass_Aplayer_bullet, &Aplayer_bullet::StaticClass, TEXT("/Script/Assignment02"), TEXT("Aplayer_bullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplayer_bullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
