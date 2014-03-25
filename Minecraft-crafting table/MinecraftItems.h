#pragma once

using namespace Windows::ApplicationModel::Resources::Core;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Media::Imaging;


namespace Blocks
{
	[Windows::UI::Xaml::Data::Bindable]
	public ref class MinecraftBlocks sealed
	{
		Platform::String^ blockTitle;	//title of the block
		Platform::String^ blockType; //'crafted', 'cooked', 'none'
		Platform::String^ blockID;	//blockID
		int blockOutput;	//how much of the block is produced
		ImageSource^ blockImage;

		event PropertyChangedEventHandler^ propertyChanged;


		public:

			MinecraftBlocks();

			void OnPropertyChanged(Platform::String^ propertyName);

			property Platform::String^ title
			{
				Platform::String^ get()
				{
					return blockTitle;
				}
				void set(Platform::String^ value)
				{
					blockTitle = value;
					OnPropertyChanged("title");
				}
			}

			property Platform::String^ type
			{
				Platform::String^ get()
				{
					return blockType;
				}
				void set(Platform::String^ value)
				{
					blockType = value;
					OnPropertyChanged("type");
				}
			}

			property Platform::String^ id
			{
				Platform::String^ get()
				{
					return blockID;
				}
				void set(Platform::String^ value)
				{
					blockID = value;
					OnPropertyChanged("id");
				}
			}

			property int output
			{
				int get()
				{
					return blockOutput;
				}
				void set(int value)
				{
					blockOutput = value;
					OnPropertyChanged("output");
				}
			}

			property ImageSource^ image
			{
				ImageSource^ get()
				{
					return blockImage;
				}
				void set(ImageSource^ value)
				{
					blockImage = value;
					OnPropertyChanged("image");
				}
			}

			void setImage(Windows::Foundation::Uri^ baseUri, Platform::String^ path);

	};

	public ref class StoreData sealed
	{
		Windows::UI::Xaml::Interop::IBindableObservableVector^ blocks;

		public:

			StoreData();	

			property Windows::UI::Xaml::Interop::IBindableObservableVector^ Blocks
			{
				Windows::UI::Xaml::Interop::IBindableObservableVector^ get()
				{
					return blocks;
				}
			}

	};
}