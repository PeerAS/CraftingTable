﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "MainPage.xaml.h"

#include "App.g.hpp"
#include "MainPage.g.hpp"

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        _otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::Platform::String^ typeName)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(typeName);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(::Windows::UI::Xaml::Interop::TypeName t)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(t);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    if (typeName == L"Windows.UI.Xaml.Controls.Page")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.UserControl")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Interop.IBindableObservableVector")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Object")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Media.ImageSource")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Int32")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"String")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Minecraft_crafting_table.MainPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Minecraft_crafting_table::MainPage(); 
            };
        userType->AddMemberName(L"favorite");
        return userType;
    }

    if (typeName == L"Blocks.MinecraftBlocks")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::Blocks::MinecraftBlocks(); 
            };
        userType->AddMemberName(L"image");
        userType->AddMemberName(L"output");
        userType->AddMemberName(L"id");
        userType->AddMemberName(L"type");
        userType->AddMemberName(L"title");
        userType->SetIsBindable();
        return userType;
    }

    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    if (longMemberName == L"Minecraft_crafting_table.MainPage.favorite")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"favorite", L"Windows.UI.Xaml.Interop.IBindableObservableVector");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Minecraft_crafting_table::MainPage^)instance;
                return that->favorite;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"Blocks.MinecraftBlocks.image")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"image", L"Windows.UI.Xaml.Media.ImageSource");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                return that->image;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                that->image = (::Windows::UI::Xaml::Media::ImageSource^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Blocks.MinecraftBlocks.output")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"output", L"Int32");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                auto value = ref new ::Platform::Box<::default::int32>(that->output);
                return value;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                auto boxedValue = (::Platform::IBox<::default::int32>^)value;
                that->output = boxedValue->Value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Blocks.MinecraftBlocks.id")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"id", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                return that->id;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                that->id = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Blocks.MinecraftBlocks.type")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"type", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                return that->type;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                that->type = (::Platform::String^)value;
            };
        return xamlMember;
    }

    if (longMemberName == L"Blocks.MinecraftBlocks.title")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"title", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                return that->title;
            };

        xamlMember->Setter =
            [](Object^ instance, Object^ value) -> void
            {
                auto that = (::Blocks::MinecraftBlocks^)instance;
                that->title = (::Platform::String^)value;
            };
        return xamlMember;
    }

    return nullptr;
}

