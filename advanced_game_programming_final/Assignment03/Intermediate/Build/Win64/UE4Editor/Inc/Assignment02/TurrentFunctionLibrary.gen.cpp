// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Projectiles/TurrentFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurrentFunctionLibrary() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_UTurrentFunctionLibrary_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_UTurrentFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTurrentFunctionLibrary::execHasLineOfSight)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_From);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_To);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTurrentFunctionLibrary::HasLineOfSight(Z_Param_WorldContextObject,Z_Param_Out_Hit,Z_Param_Out_From,Z_Param_Out_To,Z_Param_Out_ActorsToIgnore);
		P_NATIVE_END;
	}
	void UTurrentFunctionLibrary::StaticRegisterNativesUTurrentFunctionLibrary()
	{
		UClass* Class = UTurrentFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasLineOfSight", &UTurrentFunctionLibrary::execHasLineOfSight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics
	{
		struct TurrentFunctionLibrary_eventHasLineOfSight_Parms
		{
			const UObject* WorldContextObject;
			FHitResult Hit;
			FVector From;
			FVector To;
			TArray<AActor*> ActorsToIgnore;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_To;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurrentFunctionLibrary_eventHasLineOfSight_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurrentFunctionLibrary_eventHasLineOfSight_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurrentFunctionLibrary_eventHasLineOfSight_Parms, From), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurrentFunctionLibrary_eventHasLineOfSight_Parms, To), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_To_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TurrentFunctionLibrary_eventHasLineOfSight_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore_MetaData)) };
	void Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TurrentFunctionLibrary_eventHasLineOfSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TurrentFunctionLibrary_eventHasLineOfSight_Parms), &Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TurretSystem" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurrentFunctionLibrary, nullptr, "HasLineOfSight", nullptr, nullptr, sizeof(TurrentFunctionLibrary_eventHasLineOfSight_Parms), Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTurrentFunctionLibrary_NoRegister()
	{
		return UTurrentFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTurrentFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurrentFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTurrentFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurrentFunctionLibrary_HasLineOfSight, "HasLineOfSight" }, // 1787977124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurrentFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectiles/TurrentFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurrentFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurrentFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTurrentFunctionLibrary_Statics::ClassParams = {
		&UTurrentFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTurrentFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurrentFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurrentFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTurrentFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTurrentFunctionLibrary, 1272506632);
	template<> ASSIGNMENT02_API UClass* StaticClass<UTurrentFunctionLibrary>()
	{
		return UTurrentFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTurrentFunctionLibrary(Z_Construct_UClass_UTurrentFunctionLibrary, &UTurrentFunctionLibrary::StaticClass, TEXT("/Script/Assignment02"), TEXT("UTurrentFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurrentFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
