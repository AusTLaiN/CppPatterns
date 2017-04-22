#pragma once

class Computer
 {
 public:
     virtual void Run() = 0;
     virtual void Stop() = 0;
     
     virtual ~Computer() {}; /* without this, you do not call Laptop or Desktop destructor in this example! */


 };

