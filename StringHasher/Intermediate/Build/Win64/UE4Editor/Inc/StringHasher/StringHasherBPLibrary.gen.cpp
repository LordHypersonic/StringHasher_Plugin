// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StringHasher/Public/StringHasherBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringHasherBPLibrary() {}
// Cross Module References
	STRINGHASHER_API UClass* Z_Construct_UClass_UStringHasherBPLibrary_NoRegister();
	STRINGHASHER_API UClass* Z_Construct_UClass_UStringHasherBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StringHasher();
	STRINGHASHER_API UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile();
	STRINGHASHER_API UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile();
	STRINGHASHER_API UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5();
	STRINGHASHER_API UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1();
// End Cross Module References
	void UStringHasherBPLibrary::StaticRegisterNativesUStringHasherBPLibrary()
	{
		UClass* Class = UStringHasherBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFile", &UStringHasherBPLibrary::execLoadFile },
			{ "SaveTextFile", &UStringHasherBPLibrary::execSaveTextFile },
			{ "StringToMD5", &UStringHasherBPLibrary::execStringToMD5 },
			{ "StringToSHA1", &UStringHasherBPLibrary::execStringToSHA1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics
	{
		struct StringHasherBPLibrary_eventLoadFile_Parms
		{
			FString FileName;
			FString FileContent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileContent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StringHasherBPLibrary_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringHasherBPLibrary_eventLoadFile_Parms), &Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_FileContent = { "FileContent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventLoadFile_Parms, FileContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventLoadFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_FileContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "String Hasher" },
		{ "DisplayName", "Load Text from File" },
		{ "Keywords", "StringHasher load text from file" },
		{ "ModuleRelativePath", "Public/StringHasherBPLibrary.h" },
		{ "ToolTip", "Funcion to Load text from file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringHasherBPLibrary, nullptr, "LoadFile", sizeof(StringHasherBPLibrary_eventLoadFile_Parms), Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics
	{
		struct StringHasherBPLibrary_eventSaveTextFile_Parms
		{
			FString TextToSave;
			FString FileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StringHasherBPLibrary_eventSaveTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringHasherBPLibrary_eventSaveTextFile_Parms), &Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventSaveTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_TextToSave = { "TextToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventSaveTextFile_Parms, TextToSave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::NewProp_TextToSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "String Hasher" },
		{ "DisplayName", "Save Text to File" },
		{ "Keywords", "StringHasher save text into file" },
		{ "ModuleRelativePath", "Public/StringHasherBPLibrary.h" },
		{ "ToolTip", "Function to save text into file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringHasherBPLibrary, nullptr, "SaveTextFile", sizeof(StringHasherBPLibrary_eventSaveTextFile_Parms), Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics
	{
		struct StringHasherBPLibrary_eventStringToMD5_Parms
		{
			FString StringToConvert;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToConvert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventStringToMD5_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::NewProp_StringToConvert = { "StringToConvert", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventStringToMD5_Parms, StringToConvert), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::NewProp_StringToConvert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::Function_MetaDataParams[] = {
		{ "Category", "String Hasher" },
		{ "DisplayName", "String To MD5 String" },
		{ "Keywords", "StringHasher String to MD5 hash" },
		{ "ModuleRelativePath", "Public/StringHasherBPLibrary.h" },
		{ "ToolTip", "Function to convert string to MD5 hash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringHasherBPLibrary, nullptr, "StringToMD5", sizeof(StringHasherBPLibrary_eventStringToMD5_Parms), Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics
	{
		struct StringHasherBPLibrary_eventStringToSHA1_Parms
		{
			FString StringToConvert;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringToConvert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventStringToSHA1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::NewProp_StringToConvert = { "StringToConvert", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringHasherBPLibrary_eventStringToSHA1_Parms, StringToConvert), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::NewProp_StringToConvert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::Function_MetaDataParams[] = {
		{ "Category", "String Hasher" },
		{ "DisplayName", "String To SHA-1 String" },
		{ "Keywords", "StringHasher string to SHA-1 hash" },
		{ "ModuleRelativePath", "Public/StringHasherBPLibrary.h" },
		{ "ToolTip", "Function to convert string to SHA-1 hash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringHasherBPLibrary, nullptr, "StringToSHA1", sizeof(StringHasherBPLibrary_eventStringToSHA1_Parms), Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStringHasherBPLibrary_NoRegister()
	{
		return UStringHasherBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStringHasherBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringHasherBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StringHasher,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStringHasherBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStringHasherBPLibrary_LoadFile, "LoadFile" }, // 3567383720
		{ &Z_Construct_UFunction_UStringHasherBPLibrary_SaveTextFile, "SaveTextFile" }, // 3034889529
		{ &Z_Construct_UFunction_UStringHasherBPLibrary_StringToMD5, "StringToMD5" }, // 2055525581
		{ &Z_Construct_UFunction_UStringHasherBPLibrary_StringToSHA1, "StringToSHA1" }, // 60803632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringHasherBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StringHasherBPLibrary.h" },
		{ "ModuleRelativePath", "Public/StringHasherBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringHasherBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringHasherBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringHasherBPLibrary_Statics::ClassParams = {
		&UStringHasherBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringHasherBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStringHasherBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringHasherBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringHasherBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringHasherBPLibrary, 2477191687);
	template<> STRINGHASHER_API UClass* StaticClass<UStringHasherBPLibrary>()
	{
		return UStringHasherBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringHasherBPLibrary(Z_Construct_UClass_UStringHasherBPLibrary, &UStringHasherBPLibrary::StaticClass, TEXT("/Script/StringHasher"), TEXT("UStringHasherBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringHasherBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
