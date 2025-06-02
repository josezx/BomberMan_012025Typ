// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/EnemigoOnil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoOnil() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoOnil();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoOnil_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class AEnemigoOnil
void AEnemigoOnil::StaticRegisterNativesAEnemigoOnil()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoOnil);
UClass* Z_Construct_UClass_AEnemigoOnil_NoRegister()
{
	return AEnemigoOnil::StaticClass();
}
struct Z_Construct_UClass_AEnemigoOnil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoOnil.h" },
		{ "ModuleRelativePath", "EnemigoOnil.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoOnil>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoOnil_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoOnil_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoOnil_Statics::ClassParams = {
	&AEnemigoOnil::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoOnil_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoOnil_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoOnil()
{
	if (!Z_Registration_Info_UClass_AEnemigoOnil.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoOnil.OuterSingleton, Z_Construct_UClass_AEnemigoOnil_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoOnil.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<AEnemigoOnil>()
{
	return AEnemigoOnil::StaticClass();
}
AEnemigoOnil::AEnemigoOnil() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoOnil);
AEnemigoOnil::~AEnemigoOnil() {}
// End Class AEnemigoOnil

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoOnil_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoOnil, AEnemigoOnil::StaticClass, TEXT("AEnemigoOnil"), &Z_Registration_Info_UClass_AEnemigoOnil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoOnil), 58012516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoOnil_h_2669492566(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoOnil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoOnil_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
