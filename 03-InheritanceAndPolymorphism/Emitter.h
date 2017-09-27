#pragma once
#include "GameObject.h"
#include "BaseParticle.h"


class Emitter : public GameOject
{
	float accumu;
public:
	Emitter();

	BaseParticle P[100];
	float Spawn;
	int particleId;

	virtual void update();
	virtual void draw();


};