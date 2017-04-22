#pragma once
#include <iostream>
#include "Mutex.h"

using namespace std;

class SingletonClass
{   public:
        static SingletonClass* GetInstance();
        int a;
        ~SingletonClass() { cout << "In Destructor" << endl; }

    private:
        SingletonClass(int _a) : a(_a) { cout << "In Constructor" << endl; }
    

        static Mutex mutex;

        // Not defined, to prevent copying
        SingletonClass(const SingletonClass& );
        SingletonClass& operator =(const SingletonClass& other);
};

