#pragma once

#include "pch.h"
#include "MinecraftItems.h"

using namespace Windows::UI::Xaml::Media;
using namespace Blocks;

MinecraftBlocks::MinecraftBlocks()
{
	blockTitle = "";
	blockType = "";
	blockID = "";
	blockOutput = NULL;
	blockImage = nullptr;
};

void MinecraftBlocks::OnPropertyChanged(Platform::String^ propertyName)
{
	PropertyChangedEventArgs^ args = ref new PropertyChangedEventArgs(propertyName);
	propertyChanged(this, args);
};

void MinecraftBlocks::setImage(Windows::Foundation::Uri^ baseUri, Platform::String^ path)
{
	Windows::Foundation::Uri^ uri = ref new Windows::Foundation::Uri("ms-appx:///" + path);
	image = ref new BitmapImage(uri);
}

StoreData::StoreData()
{
	blocks = ref new Platform::Collections::Vector<MinecraftBlocks^>();
	Windows::Foundation::Uri^ baseUri = ref new Windows::Foundation::Uri("ms-appx:///");

	MinecraftBlocks^ block;
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/1.png");
	block->title = "Stone";
	block->type = "cooked";
	block->id = "1";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/2.png");
	block->title = "Grass Block";
	block->type = "none";
	block->id = "2";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/3.png");
	block->title = "Dirt";
	block->type = "none";
	block->id = "3";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/4.png");
	block->title = "Cobblestone";
	block->type = "none";
	block->id = "4";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/5-0.png");
	block->title = "Oak Wooden Plank";
	block->type = "crafted";
	block->id = "5-0";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/5-1.png");
	block->title = "Spruce Wooden Plank";
	block->type = "crafted";
	block->id = "5-1";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/5-2.png");
	block->title = "Birch Wooden Plank";
	block->type = "crafted";
	block->id = "5-2";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/5-3.png");
	block->title = "Jungle Wooden Plank";
	block->type = "crafted";
	block->id = "5-3";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/6.png");
	block->title = "Saplings";
	block->type = "none";
	block->id = "6";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/7.png");
	block->title = "Bedrock";
	block->type = "none";
	block->id = "7";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/8.png");
	block->title = "Water";
	block->type = "none";
	block->id = "8";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/9.png");
	block->title = "Stationary Water";
	block->type = "none";
	block->id = "9";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/10.png");
	block->title = "Lava";
	block->type = "none";
	block->id = "10";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/11.png");
	block->title = "Stationary Lava";
	block->type = "none";
	block->id = "11";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/12.png");
	block->title = "Sand";
	block->type = "none";
	block->id = "12";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/13.png");
	block->title = "Gravel";
	block->type = "none";
	block->id = "13";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/14.png");
	block->title = "Gold Ore";
	block->type = "none";
	block->id = "14";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/15.png");
	block->title = "Iron Ore";
	block->type = "none";
	block->id = "15";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/16.png");
	block->title = "Coal Ore";
	block->type = "none";
	block->id = "16";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/17-0.png");
	block->title = "Oak Wood";
	block->type = "none";
	block->id = "17-0";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/17-1.png");
	block->title = "Spruce Wood";
	block->type = "none";
	block->id = "17-1";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/17-2.png");
	block->title = "Birch Wood";
	block->type = "none";
	block->id = "17-2";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/17-3.png");
	block->title = "Jungle Wood";
	block->type = "none";
	block->id = "17-3";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/18.png");
	block->title = "Leaves";
	block->type = "none";
	block->id = "18";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/19.png");
	block->title = "Sponge";
	block->type = "none";
	block->id = "19";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/20.png");
	block->title = "Glass";
	block->type = "cooked";
	block->id = "20";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/21.png");
	block->title = "Lapis Lazuli Ore";
	block->type = "none";
	block->id = "21";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/22.png");
	block->title = "Lapis Lazuli Block";
	block->type = "crafted";
	block->id = "22";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/23.png");
	block->title = "Dispenser";
	block->type = "crafted";
	block->id = "23";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/24.png");
	block->title = "Sandstone";
	block->type = "crafted";
	block->id = "24";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/25.png");
	block->title = "Note Block";
	block->type = "crafted";
	block->id = "25";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/26.png");
	block->title = "Bed (block)";
	block->type = "none";
	block->id = "26";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/27.png");
	block->title = "Powered Rail";
	block->type = "crafted";
	block->id = "27";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/28.png");
	block->title = "Detector Rail";
	block->type = "crafted";
	block->id = "28";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/29.png");
	block->title = "Sticky Piston";
	block->type = "crafted";
	block->id = "29";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/30.png");
	block->title = "Cobweb";
	block->type = "none";
	block->id = "30";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/31.png");
	block->title = "Grass";
	block->type = "none";
	block->id = "31";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/32.png");
	block->title = "Dead Bush";
	block->type = "none";
	block->id = "32";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/33.png");
	block->title = "Piston";
	block->type = "crafted";
	block->id = "33";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/34.png");
	block->title = "Piston Extension";
	block->type = "none";
	block->id = "34";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-0.png");
	block->title = "White Wool";
	block->type = "crafted";
	block->id = "35-0";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-1.png");
	block->title = "Orange Wool";
	block->type = "crafted";
	block->id = "35-1";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-2.png");
	block->title = "Magenta Wool";
	block->type = "crafted";
	block->id = "35-2";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-3.png");
	block->title = "Light Blue Wool";
	block->type = "crafted";
	block->id = "35-3";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-4.png");
	block->title = "Yellow Wool";
	block->type = "crafted";
	block->id = "35-4";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-5.png");
	block->title = "Lime Wool";
	block->type = "crafted";
	block->id = "35-5";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-6.png");
	block->title = "Pink Wool";
	block->type = "crafted";
	block->id = "35-6";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-7.png");
	block->title = "Gray Wool";
	block->type = "crafted";
	block->id = "35-7";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-8.png");
	block->title = "Light Gray Wool";
	block->type = "crafted";
	block->id = "35-8";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-9.png");
	block->title = "Cyan Wool";
	block->type = "crafted";
	block->id = "35-9";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-10.png");
	block->title = "Purple Wool";
	block->type = "crafted";
	block->id = "35-10";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-11.png");
	block->title = "Blue Wool";
	block->type = "crafted";
	block->id = "35-11";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-12.png");
	block->title = "Brown Wool";
	block->type = "crafted";
	block->id = "35-12";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-13.png");
	block->title = "Green Wool";
	block->type = "crafted";
	block->id = "35-13";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-14.png");
	block->title = "Red Wool";
	block->type = "crafted";
	block->id = "35-14";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/35-15.png");
	block->title = "Black Wool";
	block->type = "crafted";
	block->id = "35-15";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/37.png");
	block->title = "Dandelion";
	block->type = "none";
	block->id = "37";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/38.png");
	block->title = "Rose";
	block->type = "none";
	block->id = "38";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/39.png");
	block->title = "Brown Mushroom";
	block->type = "none";
	block->id = "39";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/40.png");
	block->title = "Red Mushroom";
	block->type = "none";
	block->id = "40";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/41.png");
	block->title = "Block of Goold";
	block->type = "crafted";
	block->id = "41";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/42.png");
	block->title = "Block of Iron";
	block->type = "crafted";
	block->id = "";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/43.png");
	block->title = "Double Slabs";
	block->type = "none";
	block->id = "43";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/44.png");
	block->title = "Slabs";
	block->type = "crafted";
	block->id = "44";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/45.png");
	block->title = "Bricks";
	block->type = "crafted";
	block->id = "45";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/46.png");
	block->title = "TNT";
	block->type = "crafted";
	block->id = "46";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/47.png");
	block->title = "Bookshelf";
	block->type = "crafted";
	block->id = "47";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/48.png");
	block->title = "Moss Stone";
	block->type = "none";
	block->id = "48";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/49.png");
	block->title = "Obsidian";
	block->type = "none";
	block->id = "49";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/50.png");
	block->title = "Torch";
	block->type = "crafted";
	block->id = "50";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/51.png");
	block->title = "Fire";
	block->type = "none";
	block->id = "51";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/52.png");
	block->title = "Monster Spawner";
	block->type = "none";
	block->id = "52";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/53.png");
	block->title = "Wooden Stairs";
	block->type = "none";
	block->id = "53";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/54.png");
	block->title = "Chest";
	block->type = "crafted";
	block->id = "54";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/55.png");
	block->title = "Redstone Wire";
	block->type = "none";
	block->id = "55";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/56.png");
	block->title = "Diamond Ore";
	block->type = "none";
	block->id = "56";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/57.png");
	block->title = "Block of Diamond";
	block->type = "crafted";
	block->id = "57";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/58.png");
	block->title = "Crafting Table";
	block->type = "crafted";
	block->id = "58";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/59.png");
	block->title = "Wheat";
	block->type = "none";
	block->id = "59";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/60.png");
	block->title = "Farmland";
	block->type = "none";
	block->id = "60";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/61.png");
	block->title = "Furnace";
	block->type = "crafted";
	block->id = "61";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/62.png");
	block->title = "Burning Furnace";
	block->type = "none";
	block->id = "62";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/63.png");
	block->title = "Sign Post";
	block->type = "none";
	block->id = "63";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/64.png");
	block->title = "Wooden Door";
	block->type = "none";
	block->id = "64";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/65.png");
	block->title = "Ladders";
	block->type = "crafted";
	block->id = "65";
	block->output = 3;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/66.png");
	block->title = "Rails";
	block->type = "crafted";
	block->id = "66";
	block->output = 16;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/67.png");
	block->title = "Cobblestone Stairs";
	block->type = "crafted";
	block->id = "67";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/68.png");
	block->title = "Wall Sign";
	block->type = "none";
	block->id = "68";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/69.png");
	block->title = "Lever";
	block->type = "crafted";
	block->id = "69";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/70.png");
	block->title = "Stone Pressure Plate";
	block->type = "crafted";
	block->id = "70";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/71.png");
	block->title = "Iron Door";
	block->type = "none";
	block->id = "71";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/72.png");
	block->title = "Wooden Pressure Plate";
	block->type = "crafted";
	block->id = "72";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/73.png");
	block->title = "Redstone Ore";
	block->type = "none";
	block->id = "73";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/74.png");
	block->title = "Glowing Redstone Ore";
	block->type = "none";
	block->id = "74";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/75.png");
	block->title = "Redstone Torch";
	block->type = "crafted";
	block->id = "75";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/77.png");
	block->title = "Stone Button";
	block->type = "crafted";
	block->id = "77";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/78.png");
	block->title = "Snow";
	block->type = "none";
	block->id = "78";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/79.png");
	block->title = "Ice";
	block->type = "none";
	block->id = "79";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/80.png");
	block->title = "Snow Block";
	block->type = "crafted";
	block->id = "80";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/81.png");
	block->title = "Cactus";
	block->type = "none";
	block->id = "81";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/82.png");
	block->title = "Clay Block";
	block->type = "crafted";
	block->id = "82";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/83.png");
	block->title = "Sugar Cane";
	block->type = "none";
	block->id = "83";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/84.png");
	block->title = "Jukebox";
	block->type = "crafted";
	block->id = "84";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/85.png");
	block->title = "Fence";
	block->type = "crafted";
	block->id = "85";
	block->output = 2;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/86.png");
	block->title = "Punpkin";
	block->type = "none";
	block->id = "86";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/87.png");
	block->title = "Netherrack";
	block->type = "none";
	block->id = "87";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/88.png");
	block->title = "Soul Sand";
	block->type = "none";
	block->id = "88";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/89.png");
	block->title = "Glowstone";
	block->type = "crafted";
	block->id = "89";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/90.png");
	block->title = "Portal";
	block->type = "none";
	block->id = "90";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/91.png");
	block->title = "Jack O'Lantern";
	block->type = "crafted";
	block->id = "91";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/92.png");
	block->title = "Cake Block";
	block->type = "none";
	block->id = "92";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/93.png");
	block->title = "Redstone Repeater";
	block->type = "crafted";
	block->id = "93";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/96.png");
	block->title = "Trapdoor";
	block->type = "crafted";
	block->id = "96";
	block->output = 2;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/97.png");
	block->title = "Monster Egg";
	block->type = "none";
	block->id = "97";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/98.png");
	block->title = "Stone Bricks";
	block->type = "crafted";
	block->id = "98";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/99.png");
	block->title = "Huge Brown Mushroom";
	block->type = "none";
	block->id = "99";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/100.png");
	block->title = "Huge Red Mushroom";
	block->type = "none";
	block->id = "100";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/101.png");
	block->title = "Iron Bars";
	block->type = "crafted";
	block->id = "101";
	block->output = 16;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/102.png");
	block->title = "Glass Pane";
	block->type = "crafted";
	block->id = "102";
	block->output = 16;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/103.png");
	block->title = "Melon";
	block->type = "crafted";
	block->id = "103";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/104.png");
	block->title = "Pumpkin Stem";
	block->type = "none";
	block->id = "104";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/105.png");
	block->title = "Melon Stem";
	block->type = "none";
	block->id = "105";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/106.png");
	block->title = "Vines";
	block->type = "none";
	block->id = "106";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/107.png");
	block->title = "Fence Gate";
	block->type = "crafted";
	block->id = "107";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/108.png");
	block->title = "Brick Stairs";
	block->type = "crafted";
	block->id = "108";
	block->output = 4;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/109.png");
	block->title = "Stone Brick Stairs";
	block->type = "crafted";
	block->id = "109";
	block->output = 4;
	blocks->Append(block);
	block = ref new MinecraftBlocks();

	block->setImage(baseUri, "DB/Images/110.png");
	block->title = "Mycelium";
	block->type = "none";
	block->id = "110";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/111.png");
	block->title = "Lily Pad";
	block->type = "none";
	block->id = "111";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/112.png");
	block->title = "Nether Brick";
	block->type = "crafted";
	block->id = "112";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/113.png");
	block->title = "Nether Brick Fence";
	block->type = "crafted";
	block->id = "113";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/114.png");
	block->title = "Nether Brick Stairs";
	block->type = "unknown"; // ------------------------------wtf peer 4 hva er det?
	block->id = "114";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/115.png");
	block->title = "Nether Wart";
	block->type = "none";
	block->id = "115";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/116.png");
	block->title = "Enchantment Table";
	block->type = "crafted";
	block->id = "116";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/117.png");
	block->title = "Brewing Stand";
	block->type = "none";
	block->id = "117";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/118.png");
	block->title = "Cauldron";
	block->type = "none";
	block->id = "118";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/119.png");
	block->title = "End Portal";
	block->type = "none";
	block->id = "119";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/120.png");
	block->title = "End Portal Block";
	block->type = "none";
	block->id = "120";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/121.png");
	block->title = "End Stone";
	block->type = "none";
	block->id = "121";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/122.png");
	block->title = "Dragon Egg";
	block->type = "none";
	block->id = "122";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/123.png");
	block->title = "Redstone Lamp";
	block->type = "crafted";
	block->id = "123";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/125-1.png");
	block->title = "Spruce Wooden Double Slab";
	block->type = "crafted";
	block->id = "125-1";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/125-2.png");
	block->title = "Birch Wooden Double Slab";
	block->type = "crafted";
	block->id = "125-2";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/125-3.png");
	block->title = "Jungle Wooden Double Slab";
	block->type = "crafted";
	block->id = "125-3";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/126-0.png");
	block->title = "Oak Wooden Slab";
	block->type = "crafted";
	block->id = "126-0";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/126-1.png");
	block->title = "SpruceWooden Slab";
	block->type = "crafted";
	block->id = "126-1";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/126-2.png");
	block->title = "Birch Wooden Slab";
	block->type = "crafted";
	block->id = "126-2";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/126-3.png");
	block->title = "Jungle Wooden Slab";
	block->type = "crafted";
	block->id = "126-3";
	block->output = 6;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/127.png");
	block->title = "Cocoa";
	block->type = "none";
	block->id = "127";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/128.png");
	block->title = "Sandstone Stairs";
	block->type = "crafted";
	block->id = "128";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/129.png");
	block->title = "Emerald Ore";
	block->type = "none";
	block->id = "129";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/130.png");
	block->title = "Ender Chest";
	block->type = "crafted";
	block->id = "130";
	block->output = 1;
	blocks->Append(block);

	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/131.png");
	block->title = "Tripwire Hook";
	block->type = "crafted";
	block->id = "131";
	block->output = 2;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/132.png");
	block->title = "Tripwire";
	block->type = "none";
	block->id = "132";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/133.png");
	block->title = "Block of Emerald";
	block->type = "crafted";
	block->id = "133";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/134.png");
	block->title = "Spruce Wood Stairs";
	block->type = "crafted";
	block->id = "134";
	block->output = 4;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/135.png");
	block->title = "Birch Wood Stairs";
	block->type = "crafted";
	block->id = "135";
	block->output = 4;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/136.png");
	block->title = "Jungle Wood Stairs";
	block->type = "crafted";
	block->id = "136";
	block->output = 4;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/137.png");
	block->title = "Command Block";
	block->type = "none";
	block->id = "137";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/138.png");
	block->title = "Beacon";
	block->type = "crafted";
	block->id = "138";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/139.png");
	block->title = "Cobblestone Wall";
	block->type = "crafted";
	block->id = "139";
	block->output = 6;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/140.png");
	block->title = "Flower Pot";
	block->type = "none";
	block->id = "140";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/141.png");
	block->title = "Carrots";
	block->type = "none";
	block->id = "141";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/142.png");
	block->title = "Potatoes";
	block->type = "none";
	block->id = "142";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/143.png");
	block->title = "Wooden Button";
	block->type = "crafted";
	block->id = "143";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/144.png");
	block->title = "Mob Head";
	block->type = "none";
	block->id = "144";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/145.png");
	block->title = "Anvil";
	block->type = "crafted";
	block->id = "145";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/147.png");
	block->title = "Weighted Pressure Plate (Light)";
	block->type = "crafted";
	block->id = "147";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/148.png");
	block->title = "Weighted Pressure Plate (Heavy)";
	block->type = "crafted";
	block->id = "148";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/149.png");
	block->title = "Redstone Comparator";
	block->type = "none";
	block->id = "149";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/151.png");
	block->title = "Daylight Sensor";
	block->type = "crafted";
	block->id = "151";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/152.png");
	block->title = "Block of Redstone";
	block->type = "crafted";
	block->id = "152";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/153.png");
	block->title = "Nether Quartz Ore";
	block->type = "none";
	block->id = "153";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/154.png");
	block->title = "Hopper";
	block->type = "crafted";
	block->id = "154";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/155-0.png");
	block->title = "Block of Quartz";
	block->type = "crafted";
	block->id = "155-0";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/156.png");
	block->title = "Quartz Stairs";
	block->type = "crafted";
	block->id = "156";
	block->output = 4;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/157.png");
	block->title = "Activator Rail";
	block->type = "crafted";
	block->id = "157";
	block->output = 6;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/158.png");
	block->title = "Dropper";
	block->type = "crafted";
	block->id = "158";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/159.png");
	block->title = "Stained Clay";
	block->type = "crafted";
	block->id = "159";
	block->output = 8;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/170.png");
	block->title = "Hay Block";
	block->type = "crafted";
	block->id = "170";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-0.png");
	block->title = "Carpet White";
	block->type = "crafted";
	block->id = "171-0";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-1.png");
	block->title = "Carpet Orange";
	block->type = "crafted";
	block->id = "171-1";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-2.png");
	block->title = "Carpet Magenta";
	block->type = "crafted";
	block->id = "171-2";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-3.png");
	block->title = "Carpet Light Blue";
	block->type = "crafted";
	block->id = "171-3";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-4.png");
	block->title = "Carpet Yellow";
	block->type = "crafted";
	block->id = "171-4";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-5.png");
	block->title = "Carpet Lime";
	block->type = "crafted";
	block->id = "171-5";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-6.png");
	block->title = "Carpet Pink";
	block->type = "crafted";
	block->id = "171-6";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-7.png");
	block->title = "Carpet Gray";
	block->type = "crafted";
	block->id = "171-7";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-8.png");
	block->title = "Carpet Light Gray";
	block->type = "crafted";
	block->id = "171-8";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-9.png");
	block->title = "Carpet Cyan";
	block->type = "crafted";
	block->id = "171-9";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-10.png");
	block->title = "Carpet Purple";
	block->type = "crafted";
	block->id = "171-10";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-11.png");
	block->title = "Carpet Blue";
	block->type = "crafted";
	block->id = "171-11";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-12.png");
	block->title = "Carpet Brown";
	block->type = "crafted";
	block->id = "171-12";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-13.png");
	block->title = "Carpet Green";
	block->type = "crafted";
	block->id = "171-13";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-14.png");
	block->title = "Carpet Red";
	block->type = "crafted";
	block->id = "171-14";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/171-15.png");
	block->title = "Carpet Black";
	block->type = "crafted";
	block->id = "171-15";
	block->output = 3;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/172.png");
	block->title = "Hardened Clay";
	block->type = "cooked";
	block->id = "172";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/173.png");
	block->title = "Block of Coal";
	block->type = "crafted";
	block->id = "173";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/256.png");
	block->title = "Iron Shovel";
	block->type = "crafted";
	block->id = "256";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/257.png");
	block->title = "Iron Pickaxe";
	block->type = "crafted";
	block->id = "257";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/258.png");
	block->title = "Iron Axe";
	block->type = "crafted";
	block->id = "258";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/259.png");
	block->title = "Flint and Steel";
	block->type = "crafted";
	block->id = "259";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/260.png");
	block->title = "Apple";
	block->type = "none";
	block->id = "260";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/261.png");
	block->title = "Bow";
	block->type = "crafted";
	block->id = "261";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/262.png");
	block->title = "Arrow";
	block->type = "crafted";
	block->id = "262";
	block->output = 4;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/263-0.png");
	block->title = "Coal";
	block->type = "none";
	block->id = "263-0";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/263-1.png");
	block->title = "Charcoal";
	block->type = "cooked";
	block->id = "263-1";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/264.png");
	block->title = "Diamond";
	block->type = "none";
	block->id = "264";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/265.png");
	block->title = "Iron Ingot";
	block->type = "cooked";
	block->id = "265";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/266.png");
	block->title = "Gold Ingot";
	block->type = "cooked";
	block->id = "266";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/267.png");
	block->title = "Iron Sword";
	block->type = "crafted";
	block->id = "267";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/268.png");
	block->title = "Wooden Sword";
	block->type = "crafted";
	block->id = "268";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/269.png");
	block->title = "Wooden Shovel";
	block->type = "crafted";
	block->id = "269";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/270.png");
	block->title = "Wooden Pickaxe";
	block->type = "crafted";
	block->id = "270";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/271.png");
	block->title = "Wooden Axe";
	block->type = "crafted";
	block->id = "271";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/272.png");
	block->title = "Stone Sword";
	block->type = "crafted";
	block->id = "272";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/273.png");
	block->title = "Stone Shovel";
	block->type = "crafted";
	block->id = "273";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/274.png");
	block->title = "Stone Pickaxe";
	block->type = "crafted";
	block->id = "274";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/275.png");
	block->title = "Stone Axe";
	block->type = "crafted";
	block->id = "275";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/275.png");
	block->title = "Stone Axe";
	block->type = "crafted";
	block->id = "275";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/276.png");
	block->title = "Diamond Sword";
	block->type = "crafted";
	block->id = "276";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/277.png");
	block->title = "Diamond Shovel";
	block->type = "crafted";
	block->id = "277";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/278.png");
	block->title = "Diamond Pickaxe";
	block->type = "crafted";
	block->id = "278";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/279.png");
	block->title = "Diamond Axe";
	block->type = "crafted";
	block->id = "279";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/280.png");
	block->title = "Stick";
	block->type = "crafted";
	block->id = "280";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/281.png");
	block->title = "Bowl";
	block->type = "crafted";
	block->id = "281";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/282.png");
	block->title = "Mushroom Stew";
	block->type = "crafted";
	block->id = "282";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/283.png");
	block->title = "Golden Sword";
	block->type = "crafted";
	block->id = "283";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/284.png");
	block->title = "Golden Shovel";
	block->type = "crafted";
	block->id = "284";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/285.png");
	block->title = "Golden Pickaxe";
	block->type = "crafted";
	block->id = "285";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/286.png");
	block->title = "Golden Axe";
	block->type = "crafted";
	block->id = "286";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/287.png");
	block->title = "String";
	block->type = "none";
	block->id = "287";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/288.png");
	block->title = "Feather";
	block->type = "none";
	block->id = "288";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/289.png");
	block->title = "Gunpowder";
	block->type = "none";
	block->id = "289";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/290.png");
	block->title = "Wooden Hoe";
	block->type = "crafted";
	block->id = "290";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/291.png");
	block->title = "Stone Hoe";
	block->type = "crafted";
	block->id = "291";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/292.png");
	block->title = "Iron Hoe";
	block->type = "crafted";
	block->id = "292";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/293.png");
	block->title = "Diamond Hoe";
	block->type = "crafted";
	block->id = "293";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/294.png");
	block->title = "Gold Hoe";
	block->type = "crafted";
	block->id = "294";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/295.png");
	block->title = "Seeds";
	block->type = "none";
	block->id = "295";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/296.png");
	block->title = "Wheat";
	block->type = "none";
	block->id = "296";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/297.png");
	block->title = "Bread";
	block->type = "crafted";
	block->id = "297";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/298.png");
	block->title = "Leather Cap";
	block->type = "crafted";
	block->id = "298";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/299.png");
	block->title = "Leather Tunic";
	block->type = "crafted";
	block->id = "299";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/300.png");
	block->title = "Leather Pants";
	block->type = "crafted";
	block->id = "300";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/301.png");
	block->title = "Leather Boots";
	block->type = "crafted";
	block->id = "301";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/302.png");
	block->title = "Chain Helmet";
	block->type = "crafted";
	block->id = "302";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/303.png");
	block->title = "Chain Chestplate";
	block->type = "crafted";
	block->id = "303";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/304.png");
	block->title = "Chain Leggings";
	block->type = "crafted";
	block->id = "304";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/305.png");
	block->title = "Chain Boots";
	block->type = "crafted";
	block->id = "305";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/306.png");
	block->title = "Iron Helmet";
	block->type = "crafted";
	block->id = "306";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/307.png");
	block->title = "Iron Chestplate";
	block->type = "crafted";
	block->id = "307";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/308.png");
	block->title = "Iron Leggings";
	block->type = "crafted";
	block->id = "308";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/309.png");
	block->title = "Iron Boots";
	block->type = "crafted";
	block->id = "309";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/310.png");
	block->title = "Diamond Helmet";
	block->type = "crafted";
	block->id = "310";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/311.png");
	block->title = "Diamond Chestplate";
	block->type = "crafted";
	block->id = "311";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/312.png");
	block->title = "Diamond Leggings";
	block->type = "crafted";
	block->id = "312";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/313.png");
	block->title = "Diamond Boots";
	block->type = "crafted";
	block->id = "313";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/314.png");
	block->title = "Golden Helmet";
	block->type = "crafted";
	block->id = "314";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/315.png");
	block->title = "Golden Chestplate";
	block->type = "crafted";
	block->id = "315";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/316.png");
	block->title = "Golden Leggings";
	block->type = "crafted";
	block->id = "316";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/317.png");
	block->title = "Golden Boots";
	block->type = "crafted";
	block->id = "317";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/318.png");
	block->title = "Flint";
	block->type = "none";
	block->id = "318";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/319.png");
	block->title = "Raw Porkchop";
	block->type = "none";
	block->id = "319";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/320.png");
	block->title = "Cooked Porkchop";
	block->type = "cooked";
	block->id = "320";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/321.png");
	block->title = "Painting";
	block->type = "crafted";
	block->id = "321";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/322-0.png");
	block->title = "Golden Apple";
	block->type = "crafted";
	block->id = "322-0";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/322-1.png");
	block->title = "Enchanted Golden Apple";
	block->type = "crafted";
	block->id = "322-1";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/323.png");
	block->title = "Sign";
	block->type = "crafted";
	block->id = "323";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/324.png");
	block->title = "Wooden Door";
	block->type = "crafted";
	block->id = "324";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/325.png");
	block->title = "Bucket";
	block->type = "crafted";
	block->id = "325";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/326.png");
	block->title = "Water Bucket";
	block->type = "none";
	block->id = "326";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/327.png");
	block->title = "Lava Bucket";
	block->type = "none";
	block->id = "327";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/328.png");
	block->title = "Minecart";
	block->type = "crafted";
	block->id = "328";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/329.png");
	block->title = "Saddle";
	block->type = "none";
	block->id = "329";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/330.png");
	block->title = "Iron Door";
	block->type = "crafted";
	block->id = "330";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/331.png");
	block->title = "Redstone";
	block->type = "crafted";
	block->id = "331";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/332.png");
	block->title = "Snowball";
	block->type = "none";
	block->id = "332";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/333.png");
	block->title = "Boat";
	block->type = "crafted";
	block->id = "333";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/334.png");
	block->title = "Leather";
	block->type = "none";
	block->id = "334";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/335.png");
	block->title = "Milk";
	block->type = "none";
	block->id = "335";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/336.png");
	block->title = "Brick";
	block->type = "cooked";
	block->id = "336";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/337.png");
	block->title = "Clay";
	block->type = "none";
	block->id = "337";
	block->output = 1;
	blocks->Append(block);
	
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/338.png");
	block->title = "Sugar Canes";
	block->type = "none";
	block->id = "338";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/339.png");
	block->title = "Paper";
	block->type = "crafted";
	block->id = "339";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/340.png");
	block->title = "Book";
	block->type = "crafted";
	block->id = "340";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/341.png");
	block->title = "Slimeball";
	block->type = "none";
	block->id = "341";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/342.png");
	block->title = "Minecart with Chest";
	block->type = "crafted";
	block->id = "342";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/343.png");
	block->title = "Minecart with Furnance";
	block->type = "crafted";
	block->id = "343";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/344.png");
	block->title = "Egg";
	block->type = "none";
	block->id = "344";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/345.png");
	block->title = "Compass";
	block->type = "crafted";
	block->id = "345";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/346.png");
	block->title = "Fishing Rod";
	block->type = "crafted";
	block->id = "346";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/347.png");
	block->title = "Clock";
	block->type = "crafted";
	block->id = "347";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/348.png");
	block->title = "Glowstone Dust";
	block->type = "none";
	block->id = "348";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/349.png");
	block->title = "Raw Fish";
	block->type = "none";
	block->id = "349";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/350.png");
	block->title = "Cooked Fish";
	block->type = "cooked";
	block->id = "350";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-0.png");
	block->title = "Dye - Ink sac";
	block->type = "none";
	block->id = "351-0";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-1.png");
	block->title = "Dye - Rose Red";
	block->type = "crafted";
	block->id = "351-1";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-2.png");
	block->title = "Dye - Cactus";
	block->type = "cooked";
	block->id = "351-2";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-3.png");
	block->title = "Dye - Cocoa";
	block->type = "none";
	block->id = "351-3";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-4.png");
	block->title = "Dye - Lapis";
	block->type = "none";
	block->id = "351-4";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-5.png");
	block->title = "Dye - Purple";
	block->type = "crafted";
	block->id = "351-5";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-6.png");
	block->title = "Dye - Cyan";
	block->type = "crafted";
	block->id = "351-6";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-7.png");
	block->title = "Dye - Light Gray";
	block->type = "crafted";
	block->id = "351-7";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-8.png");
	block->title = "Dye - Gray";
	block->type = "crafted";
	block->id = "351-8";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-9.png");
	block->title = "Dye - Pink";
	block->type = "crafted";
	block->id = "351-9";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-10.png");
	block->title = "Dye - Lime";
	block->type = "crafted";
	block->id = "351-10";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-11.png");
	block->title = "Dye - Dandelion";
	block->type = "crafted";
	block->id = "351-11";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-12.png");
	block->title = "Dye - Light blue";
	block->type = "crafted";
	block->id = "351-12";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-13.png");
	block->title = "Dye - Magenta";
	block->type = "crafted";
	block->id = "351-13";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-14.png");
	block->title = "Dye - Orange";
	block->type = "crafted";
	block->id = "351-14";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/351-15.png");
	block->title = "Dye - Bone Meal";
	block->type = "crafted";
	block->id = "351-15";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/352.png");
	block->title = "Bone";
	block->type = "crafted";
	block->id = "352";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/353.png");
	block->title = "Sugar";
	block->type = "crafted";
	block->id = "353";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/354.png");
	block->title = "Cake";
	block->type = "crafted";
	block->id = "354";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/355.png");
	block->title = "Bed (item)";
	block->type = "crafted";
	block->id = "355";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/356.png");
	block->title = "Redstone Repeater";
	block->type = "crafted";
	block->id = "356";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/357.png");
	block->title = "Cookie";
	block->type = "crafted";
	block->id = "357";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/358.png");
	block->title = "Map";
	block->type = "none";
	block->id = "358";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/359.png");
	block->title = "Shears";
	block->type = "crafted";
	block->id = "359";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/360.png");
	block->title = "Melon";
	block->type = "none";
	block->id = "360";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/361.png");
	block->title = "Pumpkin Seeds";
	block->type = "none";
	block->id = "361";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/362.png");
	block->title = "Melon Seeds";
	block->type = "crafted";
	block->id = "362";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/363.png");
	block->title = "Raw Beef";
	block->type = "none";
	block->id = "363";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/364.png");
	block->title = "Steak";
	block->type = "cooked";
	block->id = "364";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/365.png");
	block->title = "Raw Chicken";
	block->type = "none";
	block->id = "365";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/366.png");
	block->title = "Cooked Chicken";
	block->type = "cooked";
	block->id = "366";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/367.png");
	block->title = "Rotten Flesh";
	block->type = "none";
	block->id = "367";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/368.png");
	block->title = "Ender Pearl";
	block->type = "none";
	block->id = "368";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/369.png");
	block->title = "Blaze Rod";
	block->type = "none";
	block->id = "369";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/370.png");
	block->title = "Ghast Tear";
	block->type = "none";
	block->id = "370";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/371.png");
	block->title = "Gold Nugget";
	block->type = "crafted";
	block->id = "371";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/372.png");
	block->title = "Nether Wart";
	block->type = "none";
	block->id = "372";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/373.png");
	block->title = "Potions";
	block->type = "unknown"; // -----------------------------wtf peer!
	block->id = "373";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/374.png");
	block->title = "Glass Bottle";
	block->type = "crafted";
	block->id = "374";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/375.png");
	block->title = "Spider Eye";
	block->type = "none";
	block->id = "375";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/376.png");
	block->title = "Fermented Spider Eye";
	block->type = "crafted";
	block->id = "376";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/377.png");
	block->title = "Blaze Powder";
	block->type = "crafted";
	block->id = "377";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/378.png");
	block->title = "Magma Cream";
	block->type = "crafted";
	block->id = "378";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/379.png");
	block->title = "Brewing Stand";
	block->type = "crafted";
	block->id = "379";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/380.png");
	block->title = "Cauldron";
	block->type = "crafted";
	block->id = "380";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/381.png");
	block->title = "Eye of Ender";
	block->type = "crafted";
	block->id = "381";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/382.png");
	block->title = "Glistering Melon";
	block->type = "crafted";
	block->id = "382";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/383.png");
	block->title = "Spawn Egg";
	block->type = "none";
	block->id = "383";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/384.png");
	block->title = "Bottle o' Enchanting";
	block->type = "none";
	block->id = "384";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/385.png");
	block->title = "Fire Charge";
	block->type = "crafted";
	block->id = "385";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/386.png");
	block->title = "Book and Quill";
	block->type = "crafted";
	block->id = "386";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/387.png");
	block->title = "Written Book";
	block->type = "none";
	block->id = "387";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/388.png");
	block->title = "Emerald";
	block->type = "none";
	block->id = "388";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/389.png");
	block->title = "Item Frame";
	block->type = "crafted";
	block->id = "389";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/390.png");
	block->title = "Flower Pot";
	block->type = "crafted";
	block->id = "390";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/391.png");
	block->title = "Carrot";
	block->type = "none";
	block->id = "391";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/392.png");
	block->title = "Potato";
	block->type = "none";
	block->id = "392";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/393.png");
	block->title = "Baked Potato";
	block->type = "cooked";
	block->id = "393";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/394.png");
	block->title = "Poisonous Potato";
	block->type = "none";
	block->id = "394";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/395.png");
	block->title = "Empty Map";
	block->type = "crafted";
	block->id = "395";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/396.png");
	block->title = "Golden Carrot";
	block->type = "crafted";
	block->id = "396";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/397.png");
	block->title = "Mob Head";
	block->type = "none";
	block->id = "397";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/398.png");
	block->title = "Carrot on a Stick";
	block->type = "crafted";
	block->id = "398";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/399.png");
	block->title = "Nether Star";
	block->type = "none";
	block->id = "399";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/400.png");
	block->title = "Pumpkin Pie";
	block->type = "crafted";
	block->id = "400";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/401.png");
	block->title = "Firework Rocket";
	block->type = "crafted";
	block->id = "401";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/402.png");
	block->title = "Firework Star";
	block->type = "crafted";
	block->id = "402";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/403.png");
	block->title = "Enchanted Book";
	block->type = "none";
	block->id = "403";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/404.png");
	block->title = "Redstone Comparator";
	block->type = "crafted";
	block->id = "404";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/405.png");
	block->title = "Nether Brick";
	block->type = "cooked";
	block->id = "405";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/406.png");
	block->title = "Nether Quartz";
	block->type = "none";
	block->id = "406";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/407.png");
	block->title = "Minecart with TNT";
	block->type = "crafted";
	block->id = "407";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/408.png");
	block->title = "Minecart with Hopper";
	block->type = "crafted";
	block->id = "408";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/417.png");
	block->title = "Iron Horse Armor";
	block->type = "none";
	block->id = "417";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/418.png");
	block->title = "Gold Horse Armor";
	block->type = "none";
	block->id = "418";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/419.png");
	block->title = "Diamond Horse Armor";
	block->type = "none";
	block->id = "419";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/420.png");
	block->title = "Lead";
	block->type = "crafted";
	block->id = "420";
	block->output = 1;
	blocks->Append(block);
	
	block = ref new MinecraftBlocks();
	block->setImage(baseUri, "DB/Images/421.png");
	block->title = "Name Tag";
	block->type = "none";
	block->id = "421";
	block->output = 1;
	blocks->Append(block);
}