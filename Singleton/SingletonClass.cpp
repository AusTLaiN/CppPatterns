#include "stdafx.h"
#include "Lock.h"
#include "SingletonClass.h"

Mutex SingletonClass::mutex;

SingletonClass* SingletonClass::GetInstance()
{
    Lock lock(mutex);

    cout << "Get Instance" << endl;

    // Initialized during first access
    static SingletonClass inst(1);

    return &inst;
}


