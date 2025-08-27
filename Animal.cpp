#include "Animal.h"
using namespace std;

Animal:: Animal(std:: string speciesName, unsigned int discoveryYear)
{
	std:: string name = speciesName;
	unsigned int year = discoveryYear;
}

void Animal:: display()
{
	cout << name << " [" << year << "]" << endl;
}



