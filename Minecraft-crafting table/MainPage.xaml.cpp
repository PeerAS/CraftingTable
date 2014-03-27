//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace Minecraft_crafting_table;
using namespace Blocks;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
	blockListData = ref new Blocks::StoreData();
	favoriteList = ref new Platform::Collections::Vector<MinecraftBlocks^>();
	RecipeList->ItemsSource = blockListData->Blocks;
	FavoriteScreen->ItemsSource = favoriteList;
	currentBlock = nullptr;
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void MainPage::OnNavigatedTo(NavigationEventArgs^ e)
{
	(void) e;	// Unused parameter
}



void Minecraft_crafting_table::MainPage::RecipeList_ItemClick(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e)
{
	MinecraftBlocks^ blockClicked = safe_cast<MinecraftBlocks^>(e->ClickedItem);
	
	if (blockClicked != nullptr)
		currentBlock = blockClicked;
}


void Minecraft_crafting_table::MainPage::favoriteClick(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (currentBlock != nullptr)
	{
		favoriteList->Append(currentBlock);
	}
}

void Minecraft_crafting_table::MainPage::FavoriteScreen_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{

}
