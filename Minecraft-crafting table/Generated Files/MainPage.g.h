﻿

#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class TextBlock;
                ref class Image;
                ref class ListView;
            }
        }
    }
}

namespace Minecraft_crafting_table
{
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::TextBlock^ Title;
        private: ::Windows::UI::Xaml::Controls::Image^ RecipeScreen;
        private: ::Windows::UI::Xaml::Controls::ListView^ FavoriteScreen;
        private: ::Windows::UI::Xaml::Controls::ListView^ RecipeList;
    };
}

