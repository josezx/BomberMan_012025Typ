// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/EnemigoBallom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoBallom() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBallom();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBallom_NoRegister();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class AEnemigoBallom
void AEnemigoBallom::StaticRegisterNativesAEnemigoBallom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoBallom);
UClass* Z_Construct_UClass_AEnemigoBallom_NoRegister()
{
	return AEnemigoBallom::StaticClass();
}
struct Z_Construct_UClass_AEnemigoBallom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoBallom.h" },
		{ "ModuleRelativePath", "EnemigoBallom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoBallom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoBallom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBallom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoBallom_Statics::ClassParams = {
	&AEnemigoBallom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBallom_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoBallom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoBallom()
{
	if (!Z_Registration_Info_UClass_AEnemigoBallom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoBallom.OuterSingleton, Z_Construct_UClass_AEnemigoBallom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoBallom.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<AEnemigoBallom>()
{
	return AEnemigoBallom::StaticClass();
}
AEnemigoBallom::AEnemigoBallom() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoBallom);
AEnemigoBallom::~AEnemigoBallom() {}
// End Class AEnemigoBallom

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBallom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoBallom, AEnemigoBallom::StaticClass, TEXT("AEnemigoBallom"), &Z_Registration_Info_UClass_AEnemigoBallom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoBallom), 302428963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBallom_h_2911532412(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBallom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoBallom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
