
#pragma once
#include "Computer.h"
#include <iostream>
using namespace std;

class Laptop: public Computer
 {
 public:
	 Laptop() { std::cout << "Laptop\n"; };

     void Run() override {mHibernating = false;}; 
     void Stop() override {mHibernating = true;}; 
     virtual ~Laptop() {}; /* because we have virtual functions, we need virtual destructor */
 private:
     bool mHibernating; // Whether or not the machine is hibernating
 };;

