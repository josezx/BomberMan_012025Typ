// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/EnemigoMinvo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoMinvo() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoBase();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoMinvo();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_AEnemigoMinvo_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class AEnemigoMinvo
void AEnemigoMinvo::StaticRegisterNativesAEnemigoMinvo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoMinvo);
UClass* Z_Construct_UClass_AEnemigoMinvo_NoRegister()
{
	return AEnemigoMinvo::StaticClass();
}
struct Z_Construct_UClass_AEnemigoMinvo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EnemigoMinvo.h" },
		{ "ModuleRelativePath", "EnemigoMinvo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoMinvo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemigoMinvo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMinvo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoMinvo_Statics::ClassParams = {
	&AEnemigoMinvo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMinvo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoMinvo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoMinvo()
{
	if (!Z_Registration_Info_UClass_AEnemigoMinvo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoMinvo.OuterSingleton, Z_Construct_UClass_AEnemigoMinvo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoMinvo.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<AEnemigoMinvo>()
{
	return AEnemigoMinvo::StaticClass();
}
AEnemigoMinvo::AEnemigoMinvo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoMinvo);
AEnemigoMinvo::~AEnemigoMinvo() {}
// End Class AEnemigoMinvo

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoMinvo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoMinvo, AEnemigoMinvo::StaticClass, TEXT("AEnemigoMinvo"), &Z_Registration_Info_UClass_AEnemigoMinvo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoMinvo), 3850534783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoMinvo_h_491391030(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoMinvo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_EnemigoMinvo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
