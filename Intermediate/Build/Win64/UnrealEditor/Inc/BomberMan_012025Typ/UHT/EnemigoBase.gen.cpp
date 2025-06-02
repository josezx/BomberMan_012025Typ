// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/EnemigoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoBase() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class AEnemigoBase
void AEnemigoBase::StaticRegisterNativesAEnemigoBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoBase);
UClass* Z_Construct_UClass_AEnemigoBase_NoRegister()
{
	return AEnemigoBase::StaticClass();
}
struct Z_Construct_UClass_AEnemigoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoBase.h" },
		{ "ModuleRelativePath", "EnemigoBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshEnemigoBase_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaEnemigo_MetaData[] = {
		{ "Category", "EnemigoBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshEnemigoBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaEnemigo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoBase_Statics::NewProp_MeshEnemigoBase = { "MeshEnemigoBase", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoBase, MeshEnemigoBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshEnemigoBase_MetaData), NewProp_MeshEnemigoBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoBase_Statics::NewProp_MallaEnemigo = { "MallaEnemigo", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoBase, MallaEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaEnemigo_MetaData), NewProp_MallaEnemigo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBase_Statics::NewProp_MeshEnemigoBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBase_Statics::NewProp_MallaEnemigo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoBase_Statics::ClassParams = {
	&AEnemigoBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoBase()
{
	if (!Z_Registration_Info_UClass_AEnemigoBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoBase.OuterSingleton, Z_Construct_UClass_AEnemigoBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoBase.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<AEnemigoBase>()
{
	return AEnemigoBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoBase);
AEnemigoBase::~AEnemigoBase() {}
// End Class AEnemigoBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoBase, AEnemigoBase::StaticClass, TEXT("AEnemigoBase"), &Z_Registration_Info_UClass_AEnemigoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoBase), 544198071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBase_h_1081242074(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
