#pragma once
#include <string>
using std::string;

class Person
{


	string Soc;
public:
	Person(string n, int a, string s);
	string name;
	int age;
	void print();
	bool checkSoc(string test);

};
