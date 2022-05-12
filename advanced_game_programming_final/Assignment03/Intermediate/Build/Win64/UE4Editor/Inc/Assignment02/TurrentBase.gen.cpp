// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Projectiles/TurrentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurrentBase() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ATurrentBase_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_ATurrentBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATurrentBase::execFindTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindTarget();
		P_NATIVE_END;
	}
	void ATurrentBase::StaticRegisterNativesATurrentBase()
	{
		UClass* Class = ATurrentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindTarget", &ATurrentBase::execFindTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurrentBase_FindTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurrentBase_FindTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurrentBase_FindTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurrentBase, nullptr, "FindTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurrentBase_FindTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATurrentBase_FindTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurrentBase_FindTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurrentBase_FindTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATurrentBase_NoRegister()
	{
		return ATurrentBase::StaticClass();
	}
	struct Z_Construct_UClass_ATurrentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretSM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretSM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SenseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSphere_MetaData[];
#endif
		static void NewProp_EnableSphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSoundEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSoundEffect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorIgnoreSphereOverlap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorIgnoreSphereOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorIgnoreSphereOverlap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BestTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationAC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurrentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurrentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurrentBase_FindTarget, "FindTarget" }, // 669559037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectiles/TurrentBase.h" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_TurretSM_MetaData[] = {
		{ "Category", "TurrentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_TurretSM = { "TurretSM", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, TurretSM), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_TurretSM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_TurretSM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "TurrentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "TurrentBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_SenseRange_MetaData[] = {
		{ "Category", "TurretConfig" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
		{ "UIMax", "2000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_SenseRange = { "SenseRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, SenseRange), METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_SenseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_SenseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere_MetaData[] = {
		{ "Category", "TurretConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	void Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere_SetBit(void* Obj)
	{
		((ATurrentBase*)Obj)->EnableSphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere = { "EnableSphere", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurrentBase), &Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationSoundCue_MetaData[] = {
		{ "Category", "TurretConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationSoundCue = { "RotationSoundCue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, RotationSoundCue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "TurretConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "FireConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, FireRate), METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_ProjectileActor_MetaData[] = {
		{ "Category", "FireConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ProjectileActor = { "ProjectileActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, ProjectileActor), Z_Construct_UClass_AProjectileBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ProjectileActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ProjectileActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireSoundEffect_MetaData[] = {
		{ "Category", "FireConfig" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireSoundEffect = { "FireSoundEffect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, FireSoundEffect), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireSoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireSoundEffect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap_Inner = { "ActorIgnoreSphereOverlap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap = { "ActorIgnoreSphereOverlap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, ActorIgnoreSphereOverlap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_BestTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_BestTarget = { "BestTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, BestTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_BestTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_BestTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationAC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationAC = { "RotationAC", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, RotationAC), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationAC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireAC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectiles/TurrentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireAC = { "FireAC", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurrentBase, FireAC), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireAC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurrentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_TurretSM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_SenseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_EnableSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ProjectileActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireSoundEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_ActorIgnoreSphereOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_TraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_BestTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_RotationAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurrentBase_Statics::NewProp_FireAC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurrentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurrentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurrentBase_Statics::ClassParams = {
		&ATurrentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurrentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurrentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurrentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurrentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurrentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurrentBase, 3436882226);
	template<> ASSIGNMENT02_API UClass* StaticClass<ATurrentBase>()
	{
		return ATurrentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurrentBase(Z_Construct_UClass_ATurrentBase, &ATurrentBase::StaticClass, TEXT("/Script/Assignment02"), TEXT("ATurrentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurrentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
