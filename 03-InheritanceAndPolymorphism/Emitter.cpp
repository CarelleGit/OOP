#include "Emitter.h"
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; i++)
	{
		P[i].enabled = false;
	}
	accumu = 0.0f;
}

void Emitter::update()
{
	accumu += sfw::getDeltaTime();

	if (accumu > Spawn)
	{
		for (int i = 0; i < 100; i++)
		{
			if (P[i].enabled == false)
			{
				BaseParticle &baby = P[i];
				baby.x = 400;
				baby.y = 300;
				baby.speedX = 0;
				baby.speedY = 2;
				baby.enabled = true;
				accumu = 0.0f;
				break;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (P[i].enabled == true)
		{
			P[i].update();
		}

	}

}

void Emitter::draw()
{
	for (int i = 0; i < 100; i++)
	{
		if (P[i].enabled)
		{
			P[i].draw();
		}
	}

}
