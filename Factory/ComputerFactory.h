#pragma once
#include <string>
#include <memory>
#include "Computer.h"
#include "Laptop.h"
#include "Desktop.h"

 class ComputerFactory
 {
 public:
     static Computer *NewComputer(const std::string &description)
     {
         if(description == "laptop")
             return new Laptop;
         if(description == "desktop")
             return new Desktop;
         return NULL;
     }
 };

