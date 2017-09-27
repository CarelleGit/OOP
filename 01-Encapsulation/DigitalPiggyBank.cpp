#include "DigitalPiggyBank.h"
#include <iostream>
using std::cout;
using std::cin;

void DigitalPiggyBank::deposit(float net)
{
	currentBalance = currentBalance + net;
	cout << "Balance: " << currentBalance << "\n";
}

float DigitalPiggyBank::withdraw()
{
	--currentBalance;
	return currentBalance;
}
