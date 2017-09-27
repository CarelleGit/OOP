#pragma once



class DigitalPiggyBank
{
private:
	// Maintains the current balance of the piggy bank.
	float currentBalance = 1.00f;
public:
	// Add funds to the value of the current balance.
	void deposit(float net);

	// Returns and clears the total current balance.
	float withdraw();
};