#include "Animal.h"
using namespace std;

Animal:: Animal(std:: string name, unsigned int year)
{
	std:: string speciesName = name;
	unsigned int discoveryYear = year;
}

void Animal:: display(std:: string name, unsigned int year)
{
	cout << name << " [" << year << "]" << endl;
}



