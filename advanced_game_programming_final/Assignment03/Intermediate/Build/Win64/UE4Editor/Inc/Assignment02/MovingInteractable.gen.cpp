// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Interact/Moving/MovingInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingInteractable() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AMovingInteractable_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AMovingInteractable();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AMovingAutomatic();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMovingInteractable::execmoveMesh)
	{
		P_GET_OBJECT(AActor,Z_Param_caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->moveMesh(Z_Param_caller);
		P_NATIVE_END;
	}
	void AMovingInteractable::StaticRegisterNativesAMovingInteractable()
	{
		UClass* Class = AMovingInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "moveMesh", &AMovingInteractable::execmoveMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics
	{
		struct MovingInteractable_eventmoveMesh_Parms
		{
			AActor* caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::NewProp_caller = { "caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingInteractable_eventmoveMesh_Parms, caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::NewProp_caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact/Moving/MovingInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingInteractable, nullptr, "moveMesh", nullptr, nullptr, sizeof(MovingInteractable_eventmoveMesh_Parms), Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingInteractable_moveMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingInteractable_moveMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovingInteractable_NoRegister()
	{
		return AMovingInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AMovingInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMovingAutomatic,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingInteractable_moveMesh, "moveMesh" }, // 612289235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingInteractable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Interact/Moving/MovingInteractable.h" },
		{ "ModuleRelativePath", "Public/Interact/Moving/MovingInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingInteractable_Statics::ClassParams = {
		&AMovingInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingInteractable, 1407787767);
	template<> ASSIGNMENT02_API UClass* StaticClass<AMovingInteractable>()
	{
		return AMovingInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingInteractable(Z_Construct_UClass_AMovingInteractable, &AMovingInteractable::StaticClass, TEXT("/Script/Assignment02"), TEXT("AMovingInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
