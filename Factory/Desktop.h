#pragma once
#include "Computer.h"
#include <iostream>
using namespace std;

class Desktop: public Computer
 {
 public:
	  Desktop() { std::cout << "Desktop\n"; };

     void Run() override {mOn = true;}; 
     void Stop() override {mOn = false;}; 
     virtual ~Desktop() {};
 private:
     bool mOn; // Whether or not the machine has been turned on
 };
