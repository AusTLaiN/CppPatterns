// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "SingletonSoundSystem.h"
#include "YouTube.h"
#include "DoomGame.h"

using namespace std;

// initialization
SingletonSoundSystem* SingletonSoundSystem::me=nullptr;
double SingletonSoundSystem::volume=100;

int _tmain(int argc, _TCHAR* argv[])
{


	SingletonSoundSystem* sound_system ;
	
	
	
	
	YouTube* youtube = new YouTube(sound_system->CreateInstance());
	DoomGame* doom = new DoomGame(sound_system->CreateInstance());


	youtube->soundDown();
	youtube->soundDown();
	youtube->soundDown();

	cout<<"--------------------------"<<endl;

	doom->soundUp();
	doom->soundUp();


	std::cin.get();

    return 0;
}
