#pragma once



class Television
{
public:
	Television(int chn, int vol);

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();


private:
	int currentChannel = 0;
	int currentVolume = 0;
};
