#include "Television.h"
#include <iostream>
using std::cout;
using std::cin;
Television::Television(int chn, int vol)
{
	bool stop = false;
	while (stop == false)
	{
		char input;
		cout << "Increase Vol: i\tDecrease Vol: d\n";
		cout << "Increase Channel: 1\tDecrease Channel: 0\n";
		cout << "Stop: q\n";
		cin >> input;
		switch (input)
		{
		case 'i':
			increaseVolume();
			break;
		case 'd':
			decreaseVolume();
			break;
		case '1':
			increaseChannel();
				break;
			case '0':
				decreaseChannel();
				break;
		default: 
			case 'q':
				stop = true;
				cout << "Televesion: off\n";
			break;
		}

	}
	
}

void Television::increaseVolume()
{
	if (currentVolume >= 100)
	{
		cout << "Volume cannot go any higher\n";
	}
	else
	{
		++currentVolume;
		cout << "Volume: " << currentVolume << "\n\n";
	}
}

void Television::decreaseVolume()
{
	if (currentChannel <= 0)
	{
		cout << "Volume cannot go any lower\n";
	}
	else
	{
		--currentVolume;
		cout << "Volume: " << currentVolume << "\n";
		cout << "Channel: " << currentChannel << "\n\n";
	}
}

void Television::increaseChannel()
{
	if (currentChannel >= 100)
	{
		cout << "No more channels\n";
	}
	else
	{
		++currentChannel;
		cout << "Volume: " << currentVolume << "\n";
		cout << "Channel: " << currentChannel << "\n\n";
	}
}

void Television::decreaseChannel()
{
	if (currentChannel <= 0)
	{
		cout << "Can't go any lower\n";
	}
	else
	{
		--currentChannel;
		cout << "Volume: " << currentVolume << "\n";
		cout << "Channel: " << currentChannel << "\n\n";
	}
}
