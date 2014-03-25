//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "pch.h"
#include "MainPage.g.h"
#include "MinecraftItems.h"

namespace Minecraft_crafting_table
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
		private:
			Blocks::StoreData^ blockListData;
			Windows::UI::Xaml::Interop::IBindableObservableVector^ favoriteList;
			Blocks::MinecraftBlocks^ currentBlock;
			void RecipeList_ItemClick(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e);
			
		public:
			MainPage();

			property Windows::UI::Xaml::Interop::IBindableObservableVector^ favorite
			{
				Windows::UI::Xaml::Interop::IBindableObservableVector^get()
				{
					return favoriteList;
				}
			}

		protected:
			virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
			

		
	private:
		void favoriteClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void FavoriteScreen_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
	};
}
