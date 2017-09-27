#pragma once
#include "GameObject.h"

class Player1 : public GameOject
{
public:
	float x;
	float y;

	bool enabled;
	virtual void update() override;
	virtual void draw() override;
};
