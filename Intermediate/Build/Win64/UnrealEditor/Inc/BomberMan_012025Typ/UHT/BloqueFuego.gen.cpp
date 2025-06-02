// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025Typ/BloqueFuego.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFuego() {}

// Begin Cross Module References
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABloqueFuego();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_ABloqueFuego_NoRegister();
BOMBERMAN_012025TYP_API UClass* Z_Construct_UClass_UIPrototypeBloques_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025Typ();
// End Cross Module References

// Begin Class ABloqueFuego
void ABloqueFuego::StaticRegisterNativesABloqueFuego()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFuego);
UClass* Z_Construct_UClass_ABloqueFuego_NoRegister()
{
	return ABloqueFuego::StaticClass();
}
struct Z_Construct_UClass_ABloqueFuego_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueFuego.h" },
		{ "ModuleRelativePath", "BloqueFuego.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DanioPorFuego_MetaData[] = {
		{ "Category", "Fuego" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 A\xc3\xb1""ade aqu\xc3\xad las propiedades que est\xc3\xa1s tratando de clonar\n" },
#endif
		{ "ModuleRelativePath", "BloqueFuego.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 A\xc3\xb1""ade aqu\xc3\xad las propiedades que est\xc3\xa1s tratando de clonar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorFuego_MetaData[] = {
		{ "Category", "Fuego" },
		{ "ModuleRelativePath", "BloqueFuego.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocidadParticulas_MetaData[] = {
		{ "Category", "Fuego" },
		{ "ModuleRelativePath", "BloqueFuego.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DanioPorFuego;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorFuego;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocidadParticulas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFuego>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_DanioPorFuego = { "DanioPorFuego", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, DanioPorFuego), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DanioPorFuego_MetaData), NewProp_DanioPorFuego_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_ColorFuego = { "ColorFuego", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, ColorFuego), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorFuego_MetaData), NewProp_ColorFuego_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABloqueFuego_Statics::NewProp_VelocidadParticulas = { "VelocidadParticulas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFuego, VelocidadParticulas), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocidadParticulas_MetaData), NewProp_VelocidadParticulas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueFuego_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_DanioPorFuego,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_ColorFuego,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFuego_Statics::NewProp_VelocidadParticulas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueFuego_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025Typ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueFuego_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIPrototypeBloques_NoRegister, (int32)VTABLE_OFFSET(ABloqueFuego, IIPrototypeBloques), false },  // 1620634205
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFuego_Statics::ClassParams = {
	&ABloqueFuego::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueFuego_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFuego_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFuego_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFuego()
{
	if (!Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton, Z_Construct_UClass_ABloqueFuego_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFuego.OuterSingleton;
}
template<> BOMBERMAN_012025TYP_API UClass* StaticClass<ABloqueFuego>()
{
	return ABloqueFuego::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFuego);
ABloqueFuego::~ABloqueFuego() {}
// End Class ABloqueFuego

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFuego, ABloqueFuego::StaticClass, TEXT("ABloqueFuego"), &Z_Registration_Info_UClass_ABloqueFuego, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFuego), 3287712058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_1405661384(TEXT("/Script/BomberMan_012025Typ"),
	Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
