#pragma once
#include "WeatherServerInterface.h"
#include "ClientInterface.h"

#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

class WeatherServer: public WeatherServerInterface
{
public:
    void SensorDataChange(float humidity,float temperature,float pressure)
    {
        m_humidity = humidity;
        m_temperature = temperature;
        m_pressure = pressure;
        notifyClients();
    }

    void registerClient(ClientInterface* client)
    {
        clients.push_back(client);
    }
public:
    void removeClient(ClientInterface* client)
    {
        clients.remove(client);
    }
	protected:
    void notifyClients()
    {
        list<ClientInterface*>::iterator pos = clients.begin();
        while (pos != clients.end())
        {
            ((ClientInterface* )(*pos))->update(m_humidity,m_temperature,m_pressure);
            (dynamic_cast<ClientInterface*>(*pos))->show();
            ++pos;
        }
    }

private:
    float        m_humidity;
    float        m_temperature;
    float        m_pressure;
    list<ClientInterface* > clients;
};

