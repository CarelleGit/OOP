#include <iostream>
#include "sfwdraw.h"
#include "Player.h"
using std::cout;
using std::cin;

int main()
{
	sfw::initContext(800, 600, "SFW");


	sfw::setBackgroundColor(BLACK);

	Player2 you;
	you.y = 300;
	you.x = 400;
	Player me;
	me.x = 400;
	me.y = 300;
	Circle ball;
	ball.posX = 400;
	ball.posY = 300;
	ball.radius = 20;
	Line stick;
	stick.startX = 400;
	stick.startY = 300;
	stick.endX = 200;
	stick.endY = 600;
	Box Player3;
	Player3.sX = 400;
	Player3.sY = 350;
	Player3.eX = 400;
	Player3.eY = 300;

	Player3.sX2 = 400;
	Player3.sY2 = 350;
	Player3.eX2 = 350;
	Player3.eY2 = 350;

	Player3.sX3 = 350;
	Player3.sY3 = 350;
	Player3.eX3 = 350;
	Player3.eY3 = 300;

	Player3.sX4 = 350;
	Player3.sY4 = 300;
	Player3.eX4 = 400;
	Player3.eY4 = 300;
	while (sfw::stepContext())
	{


		you.draw();
		you.update();

		me.update();
		me.draw();

		ball.draw();


		stick.draw();

		Player3.draw();
		Player3.update();
	}

	sfw::termContext();
	while (true) {}
}