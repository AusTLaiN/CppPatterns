// Observer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ClientStatistic.h"
#include "ClientCurrentCondition.h"
#include "WeatherServer.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	WeatherServer * server = new WeatherServer;
    ClientStatistic* client_statistic = new ClientStatistic(*server);
    ClientCurrentCondition* client_current = new ClientCurrentCondition(*server);

    server->SensorDataChange(10.2, 28.2, 1001);
    server->SensorDataChange(12, 30.12, 1003);
    server->SensorDataChange(10.2, 26, 806);
    server->SensorDataChange(10.3, 35.9, 900);

    server->removeClient(client_current);

	cout<<"\n\nAfter deleting ClientCurrentCondition....\n\n";

    server->SensorDataChange(100, 40, 1900);  

	cin.get();
    

	return 0;
}

