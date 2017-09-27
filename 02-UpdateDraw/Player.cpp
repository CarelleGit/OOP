#include "..\03-InheritanceAndPolymorphism\Player.h"
#include "..\03-InheritanceAndPolymorphism\Player.h"
#include "Player.h"
#include "sfwdraw.h"
#include <iostream>
using std::cout;
using std::cin;



void Player::update()
{
	if (active == true)
	{
		if (sfw::getKey('W'))
		{
			y += 5;
		}
		if (sfw::getKey('S'))
		{
			y -= 5;
		}
		if (sfw::getKey('A'))
		{
			x -= 5;
		}
		if (sfw::getKey('D'))
		{
			x += 5;
		}
		
		if (x > 800)
		{
			x = 0;
		}
		if (x < 0)
		{
			x = 800;
		}
		if (y > 600)
		{
			y = 0;
		}
		if (y < 0)
		{
			y = 600;
		}
		
	}

}

void Player::draw()
{
	if (active == true)
	{
		sfw::drawCircle(x, y, 25);
	}
}

void Player2::update()
{
	if (active2 == true)
	{
		if (sfw::getKey(KEY_UP))
		{
			y += 5;
		}
		if (sfw::getKey(KEY_DOWN))
		{
			y -= 5;
		}
		if (sfw::getKey(KEY_LEFT))
		{
			x -= 5;
		}
		if (sfw::getKey(KEY_RIGHT))
		{
			x += 5;
		}
		if (x > 800)
		{
			x = 0;
		}
		if (x < 0)
		{
			x = 800;
		}
		if (y > 600)
		{
			y = 0;
		}
		if (y < 0)
		{
			y = 600;
		}
	}
}

void Player2::draw()
{
	if (active2 == true)
	{
		sfw::drawCircle(x, y, 25);
	}
}

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius);
}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void Box::update()
{
	if (sfw::getKey('I'))
	{
		sY += 5;
		eY += 5;

		sY2 += 5;
		eY2 += 5;

		sY3 += 5;
		eY3 += 5;

		sY4 += 5;
		eY4 += 5;

	}
	if (sfw::getKey('K'))
	{
		sY -= 5;
		eY -= 5;

		sY2 -= 5;
		eY2 -= 5;

		sY3 -= 5;
		eY3 -= 5;

		sY4 -= 5;
		eY4 -= 5;

	}
	if (sfw::getKey('J'))
	{
		sX -= 5;
		eX -= 5;

		sX2 -= 5;
		eX2 -= 5;

		sX3 -= 5;
		eX3 -= 5;

		sX4 -= 5;
		eX4 -= 5;
	}
	if (sfw::getKey('L'))
	{
		sX += 5;
		eX += 5;

		sX2 += 5;
		eX2 += 5;

		sX3 += 5;
		eX3 += 5;

		sX4 += 5;
		eX4 += 5;
	}
	/*if (sX && eX && sX2 && eX2 && sX3 && eX3 && sX4 && eX4 > 800)
	{
		sX = 0;
		eX = 0;

		sX2 = 0;
		eX2 = 0;

		sX3 = 0;
		eX3 = 0;

		sX4 = 0;
		eX4 = 0;
	}
	if (sX && eX && sX2 && eX2 && sX3 && eX3 && sX4 && eX4 > 0)
	{
		sX = 800;
		eX = 800;

		sX2 = 800;
		eX2 = 800;

		sX3 = 800;
		eX3 = 800;

		sX4 = 800;
		eX4 = 800;
	}
	if (sY && eY && sY2 && eY2 && sY3 && eY3 && sY4 && eY4 > 600)
	{
		sY = 0;
		eY = 0;

		sY2 = 0;
		eY2 = 0;

		sY3 = 0;
		eY3 = 0;

		sY4 = 0;
		eY4 = 0;
	}
	if (sY && eY && sY2 && eY2 && sY3 && eY3 && sY4 && eY4 > 0)
	{
		sY = 800;
		eY = 800;

		sY2 = 800;
		eY2 = 800;

		sY3 = 800;
		eY3 = 800;

		sY4 = 800;
		eY4 = 800;
	}*/




}

void Box::draw()
{
	sfw::drawLine(sX, sY, eX, eY);
	sfw::drawLine(sX2, sY2, eX2, eY2);
	sfw::drawLine(sX3, sY3, eX3, eY3);
	sfw::drawLine(sX4, sY4, eX4, eY4);

}
