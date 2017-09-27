#include "Player.h"
#include "sfwdraw.h"
void Player1::update()
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

void Player1::draw()
{
	sfw::drawCircle(x, y, 50);
}
