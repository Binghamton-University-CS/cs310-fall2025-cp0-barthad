#include <iostream>
#include <stdlib.h>
#include <string.h>
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

AnimalsInZoo::AnimalsInZoo(Animal animal) {
	numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	cout << "Number of Animals: " << numAnimals << endl;
	if (numsAnimals == 1){
		animal.display();
	}
}
