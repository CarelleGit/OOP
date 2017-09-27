#include <iostream>
#include"Television.h"
#include"DigitalPiggyBank.h"
#include "Person.h"
#include "ServerInfo.h"
using std::cout;
using std::cin;

int main()
{

	char input;
	int chn = 0;
	int vol = 0;
	Television(chn, vol);
	bool stop = false;
	DigitalPiggyBank bank;
	float net = 1.00f;
	while (stop == false)
	{
	cout << "\n\nWelcome\n";
	cout << "Withdraw: w\tDeposit: d\tStop: s\n";
		cin >> input;
			switch (input)
			{
			case 'w':
				cout << "Balance: " << bank.withdraw();
				break;
			case 'd':
				bank.deposit(net);
				break;
			default:
			case 's':
				stop = true;
				cout << "Bank closed\n\n\n";
				break;
			}
		}
	ServerInfo server01[5];
	for (int i = 0; i < 5; i++)
	{
		server01[i].serverName = "Food";
		server01[i].Region = "NA";
		server01[i].MaxPlayer = 12;
		server01[i].playerCount = 3;
		server01[i].ping = i * 3;
	}
	
	

	ServerBrowserServer serverBrowserServic;
	for (int i = 0; i < 5; i++)
	{
		serverBrowserServic.regiseterServer(server01[i]);
	}
	
	ServerInfo *arr[20];
	serverBrowserServic.getServer(arr[20], 5);



	while (true) {}
}