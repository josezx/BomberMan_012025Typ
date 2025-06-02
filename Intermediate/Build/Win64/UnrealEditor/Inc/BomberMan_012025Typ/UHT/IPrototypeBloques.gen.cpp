// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/IPrototypeBloques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPrototypeBloques() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_UIPrototypeBloques();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_UIPrototypeBloques_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Interface UIPrototypeBloques
void UIPrototypeBloques::StaticRegisterNativesUIPrototypeBloques()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPrototypeBloques);
UClass* Z_Construct_UClass_UIPrototypeBloques_NoRegister()
{
	return UIPrototypeBloques::StaticClass();
}
struct Z_Construct_UClass_UIPrototypeBloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IPrototypeBloques.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPrototypeBloques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIPrototypeBloques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPrototypeBloques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPrototypeBloques_Statics::ClassParams = {
	&UIPrototypeBloques::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPrototypeBloques_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPrototypeBloques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIPrototypeBloques()
{
	if (!Z_Registration_Info_UClass_UIPrototypeBloques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPrototypeBloques.OuterSingleton, Z_Construct_UClass_UIPrototypeBloques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPrototypeBloques.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<UIPrototypeBloques>()
{
	return UIPrototypeBloques::StaticClass();
}
UIPrototypeBloques::UIPrototypeBloques(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIPrototypeBloques);
UIPrototypeBloques::~UIPrototypeBloques() {}
// End Interface UIPrototypeBloques

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_IPrototypeBloques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPrototypeBloques, UIPrototypeBloques::StaticClass, TEXT("UIPrototypeBloques"), &Z_Registration_Info_UClass_UIPrototypeBloques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPrototypeBloques), 1620634205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_IPrototypeBloques_h_1737295821(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_IPrototypeBloques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_IPrototypeBloques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
