#pragma once
#include <iostream>

using namespace std;

class SingletonSoundSystem
{ 

public:

		static SingletonSoundSystem* CreateInstance(){

			if (!me){
				me = new SingletonSoundSystem();
			}
			return me;
				
		}


		static void DeleteInstance(){
        
        	if (me!=NULL)
				delete me;

			cout << "In Destructor" << endl; 
		
		}
		
		void soundUp(){
			me->volume++;
		}

		void soundDown(){
			me->volume--;
		}

		void showVolume(){
			cout << "Valume: " <<me->volume <<endl; 
		}
		
	private:

		static SingletonSoundSystem* me;
		static double volume;

		//to prevent copying creating and deleting make all private

        SingletonSoundSystem() { 
			cout << "In Constructor" << endl; 
		}
    
		~SingletonSoundSystem() { 
	
		}



        
        SingletonSoundSystem(const SingletonSoundSystem& );
        SingletonSoundSystem& operator =(const SingletonSoundSystem& other);
};

