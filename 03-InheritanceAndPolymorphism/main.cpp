#include <iostream>
#include <ctime>
#include <random>
#include "sfwdraw.h"
#include "GameObject.h"
#include "Player.h"
#include "BaseParticle.h"
#include "Emitter.h"
using std::cout;
using std::cin;

int main()
{
	sfw::initContext(800, 600, "SFW");

	sfw::setBackgroundColor(BLACK);
	srand(time(NULL));
	int randX = 0;
	int randY = 0;
	int sX = 0;
	int sY = 0;
	/*Person me("Cala", 60);
	me.greet();
	me.isHappy();

	Officer sal("Sal", 60, 2134);
	sal.greet();
	sal.isHappy();*/
	Emitter e;
	
	Player1 num1;
	num1.x = 300;
	num1.y = 400;
	BaseParticle circle[100];
	boxParticle Box[100];
	for (int i = 0; i < 100; i++)
	{
		randX = rand() % 400 + 1;
		randY = rand() % 400 + 1;
		sX = rand() % 100 + 1;
		sY = rand() % 100 + 1;
		int randBX = rand() % 400 + 1;
		int randBY = rand() % 400 + 1;
		int sBX = rand() % 80 + 1;
		int sBY = rand() % 70 + 1;
		circle[i].x = randX;
		circle[i].y = randY;
		circle[i].speedX = sX;
		circle[i].speedY = sY;
		Box[i].x = randBX;
		Box[i].y = randBY;
		Box[i].speedX = sBX;
		Box[i].speedY = sBY;
		Box[i].dimX = 1;
		Box[i].dimY = 1;

	}
	while (sfw::stepContext())
	{
		num1.draw();
		num1.update();
		e.update();
		e.draw();

		for (int i = 0; i < 100; i++)
		{
			circle[i].update();
			Box[i].update();
		}
		for (int i = 0; i < 100; i++)
		{
			circle[i].draw();
			Box[i].draw();
		}
	}


	while (true){}
}