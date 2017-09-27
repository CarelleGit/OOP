#include "BaseParticle.h"
#include "sfwdraw.h"

void BaseParticle::update()
{
	x += speedX * sfw::getDeltaTime();
	y += speedY * sfw::getDeltaTime();
}

void BaseParticle::draw()
{
		sfw::drawCircle(x, y, 1);
		
}

void boxParticle::draw()
{
	float halFX = dimX / 2.0f;
	float halfFY = dimY / 2.0f;
	//left
	sfw::drawLine(x - halFX, y - halfFY, x - halFX, y + halfFY);
	//right
	sfw::drawLine(x + halFX, y - halfFY, x + halFX, y + halfFY);
	//top
	sfw::drawLine(x - halFX, y + halfFY, x + halFX, y + halfFY);
	//bottom
	sfw::drawLine(x - halFX, y - halfFY, x + halFX, y - halfFY);

}
