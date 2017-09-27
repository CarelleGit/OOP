#pragma once
#include <string>
using std::string;


struct ServerInfo
{
	string serverName;
	string Region;
	int playerCount;
	int MaxPlayer;
	int ping;
};
class ServerBrowserServer
{
public:
	ServerBrowserServer();
	bool regiseterServer(ServerInfo newServer);
	int getServer(ServerInfo * dstArry, size_t dstSize) const;
	int sgetServerPingLimit(ServerInfo * dstArry, size_t dstSize) const;
	int getserverReg(ServerInfo * dstArry, size_t dstSize, string region) const;
	int getEmptyServer(ServerInfo * dstArry, size_t dstSize) const;
	int getfull(ServerInfo * dstArry, size_t dstSize) const;

private:
	const static int SERVERINFO_CAPATACITY = 20;
	ServerInfo servers[SERVERINFO_CAPATACITY];
	int serverCounter;
};


