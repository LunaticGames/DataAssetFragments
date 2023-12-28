// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnifiedItemAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnifiedItemAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UFragmentCollection();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UFragmentCollection_NoRegister();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UItemFragment();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UItemFragment_NoRegister();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UTestConvertAsset();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UTestConvertAsset_NoRegister();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UUnifiedItemAsset();
	DATAASSETFRAGMENTS_API UClass* Z_Construct_UClass_UUnifiedItemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DataAssetFragments();
// End Cross Module References
	void UItemFragment::StaticRegisterNativesUItemFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment);
	UClass* Z_Construct_UClass_UItemFragment_NoRegister()
	{
		return UItemFragment::StaticClass();
	}
	struct Z_Construct_UClass_UItemFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FragmentLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataAssetFragments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFragment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Fragment" },
		{ "IncludePath", "UnifiedItemAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemFragment_Statics::NewProp_FragmentLabel_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UItemFragment_Statics::NewProp_FragmentLabel = { "FragmentLabel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemFragment, FragmentLabel), METADATA_PARAMS(Z_Construct_UClass_UItemFragment_Statics::NewProp_FragmentLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Statics::NewProp_FragmentLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Statics::NewProp_FragmentLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Statics::ClassParams = {
		&UItemFragment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemFragment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemFragment()
	{
		if (!Z_Registration_Info_UClass_UItemFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment.OuterSingleton, Z_Construct_UClass_UItemFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemFragment.OuterSingleton;
	}
	template<> DATAASSETFRAGMENTS_API UClass* StaticClass<UItemFragment>()
	{
		return UItemFragment::StaticClass();
	}
	UItemFragment::UItemFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment);
	UItemFragment::~UItemFragment() {}
	void UFragmentCollection::StaticRegisterNativesUFragmentCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFragmentCollection);
	UClass* Z_Construct_UClass_UFragmentCollection_NoRegister()
	{
		return UFragmentCollection::StaticClass();
	}
	struct Z_Construct_UClass_UFragmentCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFragmentCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataAssetFragments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFragmentCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Fragment Collection\n" },
		{ "IncludePath", "UnifiedItemAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
		{ "ToolTip", "Fragment Collection" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Fragments" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Fragments" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x001400800001000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFragmentCollection, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFragmentCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentCollection_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFragmentCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFragmentCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFragmentCollection_Statics::ClassParams = {
		&UFragmentCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFragmentCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentCollection_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFragmentCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFragmentCollection()
	{
		if (!Z_Registration_Info_UClass_UFragmentCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFragmentCollection.OuterSingleton, Z_Construct_UClass_UFragmentCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFragmentCollection.OuterSingleton;
	}
	template<> DATAASSETFRAGMENTS_API UClass* StaticClass<UFragmentCollection>()
	{
		return UFragmentCollection::StaticClass();
	}
	UFragmentCollection::UFragmentCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFragmentCollection);
	UFragmentCollection::~UFragmentCollection() {}
	DEFINE_FUNCTION(UUnifiedItemAsset::execFindFragmentByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemFragmentClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_ItemFragmentClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnifiedItemAsset::execGetAllValidFragments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UItemFragment*>*)Z_Param__Result=P_THIS->GetAllValidFragments();
		P_NATIVE_END;
	}
	void UUnifiedItemAsset::StaticRegisterNativesUUnifiedItemAsset()
	{
		UClass* Class = UUnifiedItemAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindFragmentByClass", &UUnifiedItemAsset::execFindFragmentByClass },
			{ "GetAllValidFragments", &UUnifiedItemAsset::execGetAllValidFragments },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics
	{
		struct UnifiedItemAsset_eventFindFragmentByClass_Parms
		{
			TSubclassOf<UItemFragment>  ItemFragmentClass;
			const UItemFragment* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemFragmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ItemFragmentClass = { "ItemFragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnifiedItemAsset_eventFindFragmentByClass_Parms, ItemFragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnifiedItemAsset_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_UItemFragment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ItemFragmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "ItemFragmentClass" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnifiedItemAsset, nullptr, "FindFragmentByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::UnifiedItemAsset_eventFindFragmentByClass_Parms), Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics
	{
		struct UnifiedItemAsset_eventGetAllValidFragments_Parms
		{
			TArray<UItemFragment*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UItemFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800000058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UnifiedItemAsset_eventGetAllValidFragments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnifiedItemAsset, nullptr, "GetAllValidFragments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::UnifiedItemAsset_eventGetAllValidFragments_Parms), Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnifiedItemAsset);
	UClass* Z_Construct_UClass_UUnifiedItemAsset_NoRegister()
	{
		return UUnifiedItemAsset::StaticClass();
	}
	struct Z_Construct_UClass_UUnifiedItemAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FragmentCollection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnifiedItemAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DataAssetFragments,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnifiedItemAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnifiedItemAsset_FindFragmentByClass, "FindFragmentByClass" }, // 1677281992
		{ &Z_Construct_UFunction_UUnifiedItemAsset_GetAllValidFragments, "GetAllValidFragments" }, // 3685539482
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnifiedItemAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Data Asset Definition\n" },
		{ "IncludePath", "UnifiedItemAsset.h" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
		{ "ToolTip", "Data Asset Definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_FragmentCollection_MetaData[] = {
		{ "Category", "Fragment Collection" },
		{ "Comment", "//UFragmentCollection* TemplateCollection = nullptr;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
		{ "ToolTip", "UFragmentCollection* TemplateCollection = nullptr;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_FragmentCollection = { "FragmentCollection", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnifiedItemAsset, FragmentCollection), Z_Construct_UClass_UFragmentCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_FragmentCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_FragmentCollection_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UItemFragment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments_MetaData[] = {
		{ "Category", "Fragments" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x001400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnifiedItemAsset, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnifiedItemAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_FragmentCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnifiedItemAsset_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnifiedItemAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnifiedItemAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnifiedItemAsset_Statics::ClassParams = {
		&UUnifiedItemAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUnifiedItemAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnifiedItemAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnifiedItemAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnifiedItemAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnifiedItemAsset()
	{
		if (!Z_Registration_Info_UClass_UUnifiedItemAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnifiedItemAsset.OuterSingleton, Z_Construct_UClass_UUnifiedItemAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnifiedItemAsset.OuterSingleton;
	}
	template<> DATAASSETFRAGMENTS_API UClass* StaticClass<UUnifiedItemAsset>()
	{
		return UUnifiedItemAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnifiedItemAsset);
	UUnifiedItemAsset::~UUnifiedItemAsset() {}
	void UTestConvertAsset::StaticRegisterNativesUTestConvertAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestConvertAsset);
	UClass* Z_Construct_UClass_UTestConvertAsset_NoRegister()
	{
		return UTestConvertAsset::StaticClass();
	}
	struct Z_Construct_UClass_UTestConvertAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RandomNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_something_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_something;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestConvertAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnifiedItemAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DataAssetFragments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestConvertAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//testing how to convert old assets to this type\n" },
		{ "IncludePath", "UnifiedItemAsset.h" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
		{ "ToolTip", "testing how to convert old assets to this type" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Whack" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestConvertAsset, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_RandomNumber_MetaData[] = {
		{ "Category", "Whack" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_RandomNumber = { "RandomNumber", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestConvertAsset, RandomNumber), METADATA_PARAMS(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_RandomNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_RandomNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_something_MetaData[] = {
		{ "Category", "Whack" },
		{ "ModuleRelativePath", "Public/UnifiedItemAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_something = { "something", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestConvertAsset, something), METADATA_PARAMS(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_something_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_something_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestConvertAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_RandomNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestConvertAsset_Statics::NewProp_something,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestConvertAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestConvertAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestConvertAsset_Statics::ClassParams = {
		&UTestConvertAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestConvertAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestConvertAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestConvertAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestConvertAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestConvertAsset()
	{
		if (!Z_Registration_Info_UClass_UTestConvertAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestConvertAsset.OuterSingleton, Z_Construct_UClass_UTestConvertAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestConvertAsset.OuterSingleton;
	}
	template<> DATAASSETFRAGMENTS_API UClass* StaticClass<UTestConvertAsset>()
	{
		return UTestConvertAsset::StaticClass();
	}
	UTestConvertAsset::UTestConvertAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestConvertAsset);
	UTestConvertAsset::~UTestConvertAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_giddy_Documents_Unreal_Projects_PlatformPlay_Plugins_DataAssetFragments_Source_DataAssetFragments_Public_UnifiedItemAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_giddy_Documents_Unreal_Projects_PlatformPlay_Plugins_DataAssetFragments_Source_DataAssetFragments_Public_UnifiedItemAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment, UItemFragment::StaticClass, TEXT("UItemFragment"), &Z_Registration_Info_UClass_UItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment), 149169821U) },
		{ Z_Construct_UClass_UFragmentCollection, UFragmentCollection::StaticClass, TEXT("UFragmentCollection"), &Z_Registration_Info_UClass_UFragmentCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFragmentCollection), 149336244U) },
		{ Z_Construct_UClass_UUnifiedItemAsset, UUnifiedItemAsset::StaticClass, TEXT("UUnifiedItemAsset"), &Z_Registration_Info_UClass_UUnifiedItemAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnifiedItemAsset), 2684132524U) },
		{ Z_Construct_UClass_UTestConvertAsset, UTestConvertAsset::StaticClass, TEXT("UTestConvertAsset"), &Z_Registration_Info_UClass_UTestConvertAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestConvertAsset), 1874007440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_giddy_Documents_Unreal_Projects_PlatformPlay_Plugins_DataAssetFragments_Source_DataAssetFragments_Public_UnifiedItemAsset_h_1154754752(TEXT("/Script/DataAssetFragments"),
		Z_CompiledInDeferFile_FID_Users_giddy_Documents_Unreal_Projects_PlatformPlay_Plugins_DataAssetFragments_Source_DataAssetFragments_Public_UnifiedItemAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_giddy_Documents_Unreal_Projects_PlatformPlay_Plugins_DataAssetFragments_Source_DataAssetFragments_Public_UnifiedItemAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
