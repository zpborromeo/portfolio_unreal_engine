// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/SDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDoor() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ASDoor_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ASDoor();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AInteractableBase();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASDoor::execCloseDoor)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor(Z_Param_Caller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASDoor::execOpenDoor)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor(Z_Param_Caller);
		P_NATIVE_END;
	}
	void ASDoor::StaticRegisterNativesASDoor()
	{
		UClass* Class = ASDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ASDoor::execCloseDoor },
			{ "OpenDoor", &ASDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASDoor_CloseDoor_Statics
	{
		struct SDoor_eventCloseDoor_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASDoor_CloseDoor_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SDoor_eventCloseDoor_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDoor_CloseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDoor_CloseDoor_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDoor, nullptr, "CloseDoor", nullptr, nullptr, sizeof(SDoor_eventCloseDoor_Parms), Z_Construct_UFunction_ASDoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDoor_CloseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASDoor_OpenDoor_Statics
	{
		struct SDoor_eventOpenDoor_Parms
		{
			AActor* Caller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASDoor_OpenDoor_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SDoor_eventOpenDoor_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDoor_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDoor_OpenDoor_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(SDoor_eventOpenDoor_Parms), Z_Construct_UFunction_ASDoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASDoor_NoRegister()
	{
		return ASDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorFrameMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doorFrameMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxDegree_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDegree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doorSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_doorSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASDoor_CloseDoor, "CloseDoor" }, // 1949428418
		{ &Z_Construct_UFunction_ASDoor_OpenDoor, "OpenDoor" }, // 3020176030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SDoor.h" },
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDoor_Statics::NewProp_doorMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDoor_Statics::NewProp_doorMesh = { "doorMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDoor, doorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDoor_Statics::NewProp_doorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::NewProp_doorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDoor_Statics::NewProp_doorFrameMesh_MetaData[] = {
		{ "Category", "Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASDoor_Statics::NewProp_doorFrameMesh = { "doorFrameMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDoor, doorFrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASDoor_Statics::NewProp_doorFrameMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::NewProp_doorFrameMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDoor_Statics::NewProp_maxDegree_MetaData[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDoor_Statics::NewProp_maxDegree = { "maxDegree", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDoor, maxDegree), METADATA_PARAMS(Z_Construct_UClass_ASDoor_Statics::NewProp_maxDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::NewProp_maxDegree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDoor_Statics::NewProp_doorSpeed_MetaData[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "SDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASDoor_Statics::NewProp_doorSpeed = { "doorSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASDoor, doorSpeed), METADATA_PARAMS(Z_Construct_UClass_ASDoor_Statics::NewProp_doorSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::NewProp_doorSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDoor_Statics::NewProp_doorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDoor_Statics::NewProp_doorFrameMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDoor_Statics::NewProp_maxDegree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASDoor_Statics::NewProp_doorSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASDoor_Statics::ClassParams = {
		&ASDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASDoor, 3789313571);
	template<> ASSIGNMENT02_API UClass* StaticClass<ASDoor>()
	{
		return ASDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDoor(Z_Construct_UClass_ASDoor, &ASDoor::StaticClass, TEXT("/Script/Assignment02"), TEXT("ASDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
