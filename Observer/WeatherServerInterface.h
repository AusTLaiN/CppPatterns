#pragma once
#include "ClientInterface.h"
class WeatherServerInterface
{
public:

	virtual void registerClient(ClientInterface* ob) = 0;
    virtual void removeClient(ClientInterface* ob) = 0;
    virtual void notifyClients() = 0;
};

