#pragma once
#include <string>
using std::string;

class Person
{
protected:
	string fullname;
	int happiness;
public:
	Person();
	Person(string iniName, int iniHappiness);
	virtual void greet();

	bool isHappy();

private:

};