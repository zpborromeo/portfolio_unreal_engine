// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/cpp_coin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_coin() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Acpp_coin_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_Acpp_coin();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ATouchInteractableBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void Acpp_coin::StaticRegisterNativesAcpp_coin()
	{
	}
	UClass* Z_Construct_UClass_Acpp_coin_NoRegister()
	{
		return Acpp_coin::StaticClass();
	}
	struct Z_Construct_UClass_Acpp_coin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coinMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_coinMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoinPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp_coin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATouchInteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "cpp_coin.h" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::NewProp_coinMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_coin_Statics::NewProp_coinMesh = { "coinMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_coin, coinMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::NewProp_coinMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::NewProp_coinMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::NewProp_CoinPickup_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_coin_Statics::NewProp_CoinPickup = { "CoinPickup", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_coin, CoinPickup), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::NewProp_CoinPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::NewProp_CoinPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acpp_coin_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_coin, PitchValue), METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::NewProp_PitchValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acpp_coin_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_coin, YawValue), METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_coin_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/cpp_coin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acpp_coin_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_coin, RollValue), METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::NewProp_RollValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Acpp_coin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_coin_Statics::NewProp_coinMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_coin_Statics::NewProp_CoinPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_coin_Statics::NewProp_PitchValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_coin_Statics::NewProp_YawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_coin_Statics::NewProp_RollValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp_coin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp_coin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp_coin_Statics::ClassParams = {
		&Acpp_coin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Acpp_coin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acpp_coin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_coin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp_coin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp_coin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_coin, 1764002757);
	template<> ASSIGNMENT02_API UClass* StaticClass<Acpp_coin>()
	{
		return Acpp_coin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_coin(Z_Construct_UClass_Acpp_coin, &Acpp_coin::StaticClass, TEXT("/Script/Assignment02"), TEXT("Acpp_coin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_coin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
