// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Interact/InteractableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AInteractableBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractableBase::execEndFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractableBase::execStartFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractableBase::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	static FName NAME_AInteractableBase_EndFocus = FName(TEXT("EndFocus"));
	void AInteractableBase::EndFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractableBase_EndFocus),NULL);
	}
	static FName NAME_AInteractableBase_OnInteract = FName(TEXT("OnInteract"));
	void AInteractableBase::OnInteract(AActor* Caller)
	{
		InteractableBase_eventOnInteract_Parms Parms;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_AInteractableBase_OnInteract),&Parms);
	}
	static FName NAME_AInteractableBase_StartFocus = FName(TEXT("StartFocus"));
	void AInteractableBase::StartFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractableBase_StartFocus),NULL);
	}
	void AInteractableBase::StaticRegisterNativesAInteractableBase()
	{
		UClass* Class = AInteractableBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &AInteractableBase::execEndFocus },
			{ "OnInteract", &AInteractableBase::execOnInteract },
			{ "StartFocus", &AInteractableBase::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractableBase_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableBase_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableBase_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableBase, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableBase_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableBase_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractableBase_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractableBase_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableBase_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableBase, nullptr, "OnInteract", nullptr, nullptr, sizeof(InteractableBase_eventOnInteract_Parms), Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableBase_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractableBase_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractableBase_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractableBase_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableBase_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableBase, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractableBase_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractableBase_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractableBase_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
	{
		return AInteractableBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractableBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableBase_EndFocus, "EndFocus" }, // 2482624458
		{ &Z_Construct_UFunction_AInteractableBase_OnInteract, "OnInteract" }, // 1279156606
		{ &Z_Construct_UFunction_AInteractableBase_StartFocus, "StartFocus" }, // 827194747
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interact/InteractableBase.h" },
		{ "ModuleRelativePath", "Public/Interact/InteractableBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableBase, IInteractableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
		&AInteractableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableBase, 408706856);
	template<> ASSIGNMENT02_API UClass* StaticClass<AInteractableBase>()
	{
		return AInteractableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableBase(Z_Construct_UClass_AInteractableBase, &AInteractableBase::StaticClass, TEXT("/Script/Assignment02"), TEXT("AInteractableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
