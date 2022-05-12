// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/MovingAutomatic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingAutomatic() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AMovingAutomatic_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AMovingAutomatic();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ATouchInteractableBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AMovingAutomatic::StaticRegisterNativesAMovingAutomatic()
	{
	}
	UClass* Z_Construct_UClass_AMovingAutomatic_NoRegister()
	{
		return AMovingAutomatic::StaticClass();
	}
	struct Z_Construct_UClass_AMovingAutomatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movingSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_waitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingAutomatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATouchInteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingAutomatic.h" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPoint_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPoint = { "endPoint", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, endPoint), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_startPos_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, startPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_startPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_startPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPos_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPos = { "endPos", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, endPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_movingSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_movingSound = { "movingSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, movingSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_movingSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_movingSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_moveDuration_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_moveDuration = { "moveDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, moveDuration), METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_moveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_moveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_waitTime_MetaData[] = {
		{ "Category", "Moving Settings" },
		{ "ModuleRelativePath", "Public/MovingAutomatic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_waitTime = { "waitTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingAutomatic, waitTime), METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_waitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_waitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingAutomatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_startPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_endPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_movingSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_moveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingAutomatic_Statics::NewProp_waitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingAutomatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingAutomatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingAutomatic_Statics::ClassParams = {
		&AMovingAutomatic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingAutomatic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingAutomatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingAutomatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingAutomatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingAutomatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingAutomatic, 683103618);
	template<> ASSIGNMENT02_API UClass* StaticClass<AMovingAutomatic>()
	{
		return AMovingAutomatic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingAutomatic(Z_Construct_UClass_AMovingAutomatic, &AMovingAutomatic::StaticClass, TEXT("/Script/Assignment02"), TEXT("AMovingAutomatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingAutomatic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
