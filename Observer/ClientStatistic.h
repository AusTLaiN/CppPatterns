#pragma once
#include "ClientInterface.h"
#include "WeatherServer.h"
#include <iostream>
using namespace std;

class ClientStatistic:public ClientInterface
{
public:
    ClientStatistic(WeatherServer& server):server(server)
    {
		server.registerClient(this);
		m_count=0;
		m_mint=1000;
		m_maxt=-1000;
    }

    void show()
    {
        cout<<"________StatisticBoard_________"<<endl;
        cout<<"lowest  temperature: "<<m_mint<<endl;
        cout<<"highest temperature: "<<m_maxt<<endl;
        cout<<"average temperature: "<<m_avet<<endl;
        cout<<"_______________________________"<<endl;
    }

    void update(float h, float t, float p)
    {
        ++m_count;
        if (t>m_maxt)
        {
            m_maxt = t;
        }
        if (t<m_mint)
        {
            m_mint = t;
        }
        m_avet = (m_avet * (m_count-1) + t)/m_count;
    }

private:
    float m_maxt;
    float  m_mint;
    float m_avet;
    int m_count;
    WeatherServer& server;
};

