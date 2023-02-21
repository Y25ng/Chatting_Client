// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chat_Client/LogIn_UserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogIn_UserWidget() {}
// Cross Module References
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ULogIn_UserWidget_NoRegister();
	CHAT_CLIENT_API UClass* Z_Construct_UClass_ULogIn_UserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Chat_Client();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULogIn_UserWidget::execBtn_LogIn_Func)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Btn_LogIn_Func();
		P_NATIVE_END;
	}
	void ULogIn_UserWidget::StaticRegisterNativesULogIn_UserWidget()
	{
		UClass* Class = ULogIn_UserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Btn_LogIn_Func", &ULogIn_UserWidget::execBtn_LogIn_Func },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LogIn_UserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogIn_UserWidget, nullptr, "Btn_LogIn_Func", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULogIn_UserWidget_NoRegister()
	{
		return ULogIn_UserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULogIn_UserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Btn_LogIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Btn_LogIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_LogIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_LogIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogIn_UserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Chat_Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogIn_UserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogIn_UserWidget_Btn_LogIn_Func, "Btn_LogIn_Func" }, // 1003955750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogIn_UserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LogIn_UserWidget.h" },
		{ "ModuleRelativePath", "LogIn_UserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_Btn_LogIn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// ?\xce\xb1??? ??\xc6\xb0\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LogIn_UserWidget.h" },
		{ "ToolTip", "?\xce\xb1??? ??\xc6\xb0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_Btn_LogIn = { "Btn_LogIn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogIn_UserWidget, Btn_LogIn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_Btn_LogIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_Btn_LogIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_EditableTextBox_LogIn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// ?\xce\xb1??? ?\xd4\xb7?\xc3\xa2\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LogIn_UserWidget.h" },
		{ "ToolTip", "?\xce\xb1??? ?\xd4\xb7?\xc3\xa2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_EditableTextBox_LogIn = { "EditableTextBox_LogIn", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogIn_UserWidget, EditableTextBox_LogIn), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_EditableTextBox_LogIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_EditableTextBox_LogIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogIn_UserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_Btn_LogIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogIn_UserWidget_Statics::NewProp_EditableTextBox_LogIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogIn_UserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogIn_UserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULogIn_UserWidget_Statics::ClassParams = {
		&ULogIn_UserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULogIn_UserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogIn_UserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULogIn_UserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogIn_UserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogIn_UserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULogIn_UserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULogIn_UserWidget, 1652671546);
	template<> CHAT_CLIENT_API UClass* StaticClass<ULogIn_UserWidget>()
	{
		return ULogIn_UserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogIn_UserWidget(Z_Construct_UClass_ULogIn_UserWidget, &ULogIn_UserWidget::StaticClass, TEXT("/Script/Chat_Client"), TEXT("ULogIn_UserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogIn_UserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
