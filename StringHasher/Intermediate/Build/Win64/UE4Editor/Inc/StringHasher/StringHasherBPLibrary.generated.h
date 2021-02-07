// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STRINGHASHER_StringHasherBPLibrary_generated_h
#error "StringHasherBPLibrary.generated.h already included, missing '#pragma once' in StringHasherBPLibrary.h"
#endif
#define STRINGHASHER_StringHasherBPLibrary_generated_h

#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextToSave); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStringHasherBPLibrary::SaveTextFile(Z_Param_TextToSave,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FileContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStringHasherBPLibrary::LoadFile(Z_Param_FileName,Z_Param_Out_FileContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToSHA1) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringToConvert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringHasherBPLibrary::StringToSHA1(Z_Param_Out_StringToConvert); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToMD5) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringToConvert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringHasherBPLibrary::StringToMD5(Z_Param_Out_StringToConvert); \
		P_NATIVE_END; \
	}


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TextToSave); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStringHasherBPLibrary::SaveTextFile(Z_Param_TextToSave,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FileContent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UStringHasherBPLibrary::LoadFile(Z_Param_FileName,Z_Param_Out_FileContent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToSHA1) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringToConvert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringHasherBPLibrary::StringToSHA1(Z_Param_Out_StringToConvert); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToMD5) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringToConvert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringHasherBPLibrary::StringToMD5(Z_Param_Out_StringToConvert); \
		P_NATIVE_END; \
	}


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringHasherBPLibrary(); \
	friend struct Z_Construct_UClass_UStringHasherBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UStringHasherBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StringHasher"), NO_API) \
	DECLARE_SERIALIZER(UStringHasherBPLibrary)


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUStringHasherBPLibrary(); \
	friend struct Z_Construct_UClass_UStringHasherBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UStringHasherBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StringHasher"), NO_API) \
	DECLARE_SERIALIZER(UStringHasherBPLibrary)


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringHasherBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringHasherBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringHasherBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringHasherBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringHasherBPLibrary(UStringHasherBPLibrary&&); \
	NO_API UStringHasherBPLibrary(const UStringHasherBPLibrary&); \
public:


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringHasherBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringHasherBPLibrary(UStringHasherBPLibrary&&); \
	NO_API UStringHasherBPLibrary(const UStringHasherBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringHasherBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringHasherBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringHasherBPLibrary)


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_25_PROLOG
#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_RPC_WRAPPERS \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_INCLASS \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StringHasherBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STRINGHASHER_API UClass* StaticClass<class UStringHasherBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginMaker_Plugins_StringHasher_Source_StringHasher_Public_StringHasherBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
