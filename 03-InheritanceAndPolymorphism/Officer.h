#pragma once

#include "Person.h"

class Officer : public Person
{
protected:
	int BadgeNum;
public:
	Officer();
	Officer(string initname, int iniHappiness, int iniBadge);
	virtual void greet() override;

};
