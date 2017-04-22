#pragma once
#include "ClientInterface.h"
#include "WeatherServer.h"
#include <iostream>
using namespace std;

class ClientCurrentCondition:public ClientInterface
{
public:
    ClientCurrentCondition(WeatherServer& server):server(server)
    {
		server.registerClient(this);
    }

  void show()
    {
        cout<<"_____CurrentConditionBoard_____"<<endl;
        cout<<"humidity: "<<m_h<<endl;
        cout<<"temperature: "<<m_t<<endl;
        cout<<"pressure: "<<m_p<<endl;
        cout<<"_______________________________"<<endl;
    }

    void update(float h, float t, float p)
    {
        m_h = h;
        m_t = t;
        m_p = p;
    }

private:
    float m_h;
    float m_t;
    float m_p;
    WeatherServer& server;
};

