#include "Person.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

Person::Person()
{
	fullname = "";
	happiness = 50;
}

Person::Person(string iniName, int iniHappiness)
{
	fullname = iniName;
	happiness = iniHappiness;
}

void Person::greet()
{
	cout << "Hello, my name is " << fullname << ".\n";
}

bool Person::isHappy()
{

	return happiness > 70;
}
