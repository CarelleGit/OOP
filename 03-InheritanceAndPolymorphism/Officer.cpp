#include "Officer.h"
#include <iostream>
using std::cout;
using std::cin;
Officer::Officer()
{
	fullname = "";
	happiness = 60;
	BadgeNum = 0;
}
Officer::Officer(string initname, int iniHappiness, int iniBadge)
{
	fullname = initname;
	happiness = iniHappiness;
	BadgeNum = iniBadge;
}
void Officer::greet()
{
	Person::greet();
	cout << "Officer number " << BadgeNum << ".\b";
}
