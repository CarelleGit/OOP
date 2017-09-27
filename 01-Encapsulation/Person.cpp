#include "Person.h"
#include <iostream>
using std::cout;
using std::cin;
Person::Person(string n, int a, string s)
{
	name = n;
	age = a;
	Soc = s;
}
void Person::print()
{
	cout << name << "\n";
	cout << age << "\n";
}

bool Person::checkSoc(string test)
{
	return Soc == test;
}
