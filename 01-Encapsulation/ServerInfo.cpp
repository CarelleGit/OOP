#include "ServerInfo.h"
#include <iostream>
using std::cout;
using std::cin;

ServerBrowserServer::ServerBrowserServer()
{
	serverCounter = 0;
}

bool ServerBrowserServer::regiseterServer(ServerInfo newServer)
{

	if (serverCounter < SERVERINFO_CAPATACITY)
	{
		servers[serverCounter] = newServer;
		serverCounter++;
		return true;
	}
	else
	{
		return false;
	}

}

	
int ServerBrowserServer::getServer(ServerInfo * dstArry, size_t dstSize) const
{
	int size = 0;
	for (int i = 0; i < dstSize; i++)
	{
		dstArry[i] = servers[i];
		size++;

	}
	bool loop = false;
	while (loop == false)
	{
		
		int checker = 0;
		for (int i = 0; i < dstSize - 1; i++)
		{
			if (dstArry[i].playerCount <= dstArry[i + 1].playerCount)
			{
				checker++;
			}
			else
			{
				int dummy = dstArry[i + 1].playerCount;
				dstArry[i].playerCount = dstArry[i].playerCount;
				dstArry[i + 1].playerCount = dummy; 
			}
		}
		if (checker == dstSize - 1)
		{
			loop = true;
		}
	}


	return size;
}

int ServerBrowserServer::getserverReg(ServerInfo * dstArry, size_t dstSize, string region) const
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].Region == region)
		{
			dstArry[i] = servers[i];
			size++;
		}

	}

	return size;
}

int ServerBrowserServer::getEmptyServer(ServerInfo * dstArry, size_t dstSize) const
{


	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].playerCount == 0)
		{
			dstArry[i] = servers[i];
			size++;
		}

	}

	return size;

	return 0;
}

int ServerBrowserServer::getfull(ServerInfo * dstArry, size_t dstSize) const
{
	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].MaxPlayer == servers[i].MaxPlayer)
		{
			dstArry[i] = servers[i];
			size++;
		}

	}

	return size;
}

int ServerBrowserServer::sgetServerPingLimit(ServerInfo * dstArry, size_t dstSize) const
{

	int size = 0;

	for (int i = 0; i < dstSize; i++)
	{
		if (servers[i].ping < 10)
		{
			dstArry[i] = servers[i];
			size++;
		}

	}

	return size;
}
