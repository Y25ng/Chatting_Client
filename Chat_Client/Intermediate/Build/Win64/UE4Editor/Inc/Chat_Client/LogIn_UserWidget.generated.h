// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_CLIENT_LogIn_UserWidget_generated_h
#error "LogIn_UserWidget.generated.h already included, missing '#pragma once' in LogIn_UserWidget.h"
#endif
#define CHAT_CLIENT_LogIn_UserWidget_generated_h

#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_SPARSE_DATA
#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBtn_LogIn_Func);


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBtn_LogIn_Func);


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogIn_UserWidget(); \
	friend struct Z_Construct_UClass_ULogIn_UserWidget_Statics; \
public: \
	DECLARE_CLASS(ULogIn_UserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chat_Client"), NO_API) \
	DECLARE_SERIALIZER(ULogIn_UserWidget)


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULogIn_UserWidget(); \
	friend struct Z_Construct_UClass_ULogIn_UserWidget_Statics; \
public: \
	DECLARE_CLASS(ULogIn_UserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chat_Client"), NO_API) \
	DECLARE_SERIALIZER(ULogIn_UserWidget)


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogIn_UserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogIn_UserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogIn_UserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogIn_UserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogIn_UserWidget(ULogIn_UserWidget&&); \
	NO_API ULogIn_UserWidget(const ULogIn_UserWidget&); \
public:


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogIn_UserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogIn_UserWidget(ULogIn_UserWidget&&); \
	NO_API ULogIn_UserWidget(const ULogIn_UserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogIn_UserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogIn_UserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogIn_UserWidget)


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Btn_LogIn() { return STRUCT_OFFSET(ULogIn_UserWidget, Btn_LogIn); } \
	FORCEINLINE static uint32 __PPO__EditableTextBox_LogIn() { return STRUCT_OFFSET(ULogIn_UserWidget, EditableTextBox_LogIn); }


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_19_PROLOG
#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_SPARSE_DATA \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_RPC_WRAPPERS \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_INCLASS \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_SPARSE_DATA \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_INCLASS_NO_PURE_DECLS \
	Chat_Client_Source_Chat_Client_LogIn_UserWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_CLIENT_API UClass* StaticClass<class ULogIn_UserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chat_Client_Source_Chat_Client_LogIn_UserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
