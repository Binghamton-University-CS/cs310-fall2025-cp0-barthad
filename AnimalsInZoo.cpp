#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal newAnimal) {
	numAnimals = 1;
	animal = newAnimal; 
}

AnimalsInZoo::AnimalsInZoo() {
	numAnimals = 0;
}

void AnimalsInZoo::display() {
	cout << "Number of Animals: " << numAnimals << endl;
	if (numAnimals == 1){
		animal.display();
	}
}
