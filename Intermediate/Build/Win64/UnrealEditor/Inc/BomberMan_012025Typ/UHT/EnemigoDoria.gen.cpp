// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/EnemigoDoria.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoDoria() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoDoria();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoDoria_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class AEnemigoDoria
void AEnemigoDoria::StaticRegisterNativesAEnemigoDoria()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoDoria);
UClass* Z_Construct_UClass_AEnemigoDoria_NoRegister()
{
	return AEnemigoDoria::StaticClass();
}
struct Z_Construct_UClass_AEnemigoDoria_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoDoria.h" },
		{ "ModuleRelativePath", "EnemigoDoria.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoDoria>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoDoria_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDoria_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoDoria_Statics::ClassParams = {
	&AEnemigoDoria::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoDoria_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoDoria_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoDoria()
{
	if (!Z_Registration_Info_UClass_AEnemigoDoria.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoDoria.OuterSingleton, Z_Construct_UClass_AEnemigoDoria_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoDoria.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<AEnemigoDoria>()
{
	return AEnemigoDoria::StaticClass();
}
AEnemigoDoria::AEnemigoDoria() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoDoria);
AEnemigoDoria::~AEnemigoDoria() {}
// End Class AEnemigoDoria

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoDoria_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoDoria, AEnemigoDoria::StaticClass, TEXT("AEnemigoDoria"), &Z_Registration_Info_UClass_AEnemigoDoria, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoDoria), 705697373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoDoria_h_4136296517(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoDoria_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoDoria_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
