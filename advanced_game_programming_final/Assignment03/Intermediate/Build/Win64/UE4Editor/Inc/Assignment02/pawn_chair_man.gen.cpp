// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/character_stuff/pawn_chair_man.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepawn_chair_man() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Apawn_chair_man_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Apawn_chair_man();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void Apawn_chair_man::StaticRegisterNativesApawn_chair_man()
	{
	}
	UClass* Z_Construct_UClass_Apawn_chair_man_NoRegister()
	{
		return Apawn_chair_man::StaticClass();
	}
	struct Z_Construct_UClass_Apawn_chair_man_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPcameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FPcameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPcrouchCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FPcrouchCameraLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Apawn_chair_man_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apawn_chair_man_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "character_stuff/pawn_chair_man.h" },
		{ "ModuleRelativePath", "character_stuff/pawn_chair_man.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcameraLocation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "character_stuff/pawn_chair_man.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcameraLocation = { "FPcameraLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apawn_chair_man, FPcameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcrouchCameraLocation_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "character_stuff/pawn_chair_man.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcrouchCameraLocation = { "FPcrouchCameraLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apawn_chair_man, FPcrouchCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcrouchCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcrouchCameraLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Apawn_chair_man_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Apawn_chair_man_Statics::NewProp_FPcrouchCameraLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Apawn_chair_man_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Apawn_chair_man>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Apawn_chair_man_Statics::ClassParams = {
		&Apawn_chair_man::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Apawn_chair_man_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Apawn_chair_man_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Apawn_chair_man_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Apawn_chair_man_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Apawn_chair_man()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Apawn_chair_man_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Apawn_chair_man, 963944314);
	template<> ASSIGNMENT02_API UClass* StaticClass<Apawn_chair_man>()
	{
		return Apawn_chair_man::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Apawn_chair_man(Z_Construct_UClass_Apawn_chair_man, &Apawn_chair_man::StaticClass, TEXT("/Script/Assignment02"), TEXT("Apawn_chair_man"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Apawn_chair_man);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
