#include <string>
#include <iostream>
using namespace std;

class CommonCar //Our Abstract base class
{
        protected:
                string _str;
        public:
                CommonCar()
                {
                        _str = "Unknown Car";
                }
 
                virtual string getDescription()
                {       
                        return _str;
                }
 
                virtual double getCost() = 0;
 
                virtual ~CommonCar()
                {
                        cout << "~Car()\n";
                }
};
