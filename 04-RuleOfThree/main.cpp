#include <iostream>
#include "sfwdraw.h"
#include "Player.h"

int main()
{
	sfw::initContext(800, 600, "SFW");
	sfw::setBackgroundColor(BLACK);
	Player Cal;
	Cal.x = 300;
	Cal.y = 400;


	while (sfw::stepContext())
	{
		Cal.update();
		Cal.draw();

	}


	while (true){}
}