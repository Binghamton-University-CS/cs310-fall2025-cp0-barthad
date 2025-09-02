#include "Animal.h"
using namespace std;

Animal:: Animal(std:: string speciesName, unsigned int discoveryYear)
{
	name = speciesName;
	year = discoveryYear;
}

void Animal:: display()
{
	cout << name << " [" << year << "]" << endl;
}



