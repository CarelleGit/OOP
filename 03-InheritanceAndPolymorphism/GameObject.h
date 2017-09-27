#pragma once
#include <string>
using std::string;

class GameOject
{
public:
	float x;
	float y;
	string name;

	bool enabled;

	virtual void draw();
	virtual void update();
};