#pragma once
#include "SingletonSoundSystem.h"

class DoomGame
{   public:
        DoomGame(SingletonSoundSystem* sound_system) : sound_system(sound_system) { 
		}
       
		void soundUp(){

			sound_system->soundUp();
			sound_system->showVolume();
		}


		void soundDown(){

			sound_system->soundDown();
			sound_system->showVolume();
		}

    private:
        SingletonSoundSystem* sound_system;
};

