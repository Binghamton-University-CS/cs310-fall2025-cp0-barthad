#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Animal {
   public:
      Animal(std:: string name, unsigned int year);

      Animal() : name(""), year(0) {};

      void display();    

   private:
      std:: string name = "";
      unsigned int year = 0;
};

