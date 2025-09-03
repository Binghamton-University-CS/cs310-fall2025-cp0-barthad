#pragma once
#include <iostream>
#include <stdlib.h>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
   public:
	AnimalsInZoo(Animal animal);
	AnimalsInZoo();
	void display();
   private:
 	int numAnimals;
	Animal animal;
};
