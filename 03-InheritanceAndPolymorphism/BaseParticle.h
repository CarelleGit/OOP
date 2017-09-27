#pragma once
#include "GameObject.h"

class BaseParticle : public GameOject
{
public:
	float speedX;
	float speedY;
	
	bool gen = true;

	virtual void update() override;
	virtual void draw() override;

};


class boxParticle : public BaseParticle
{
	

public:
	float dimX;
	float dimY;

	virtual void draw() override;


};
