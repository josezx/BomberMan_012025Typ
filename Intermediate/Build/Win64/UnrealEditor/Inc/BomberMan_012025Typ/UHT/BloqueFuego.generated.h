// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueFuego.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025TYP_BloqueFuego_generated_h
#error "BloqueFuego.generated.h already included, missing '#pragma once' in BloqueFuego.h"
#endif
#define BOMBERMAN_012025TYP_BloqueFuego_generated_h

#define FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueFuego(); \
	friend struct Z_Construct_UClass_ABloqueFuego_Statics; \
public: \
	DECLARE_CLASS(ABloqueFuego, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025Typ"), NO_API) \
	DECLARE_SERIALIZER(ABloqueFuego) \
	virtual UObject* _getUObject() const override { return const_cast<ABloqueFuego*>(this); }


#define FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueFuego(ABloqueFuego&&); \
	ABloqueFuego(const ABloqueFuego&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueFuego); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueFuego); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueFuego) \
	NO_API virtual ~ABloqueFuego();


#define FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_12_PROLOG
#define FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_15_INCLASS_NO_PURE_DECLS \
	FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025TYP_API UClass* StaticClass<class ABloqueFuego>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan_012025Typ_Source_BomberMan_012025Typ_BloqueFuego_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
