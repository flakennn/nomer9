#include <iostream>
using namespace std;
#include "nomer9.h"
Property::Property()
{
	worth = 0;
}
Property::Property(double worth)
{
	this->worth = worth;
}
double Property::calculation()
{
	return 0;
}

Apartment::Apartment(double worth) : Property(worth)
{
	this->worth = worth;
}
double Apartment::calculation()
{
	Property::calculation();
	return 0.001 * worth;
}

Car::Car(double worth) : Property(worth)
{
	this->worth = worth;
}
double Car::calculation()
{
	Property::calculation();
	return 0.005 * worth;
}

CountryHouse::CountryHouse(double worth) : Property(worth)
{
	this->worth = worth;
}
double CountryHouse::calculation()
{
	Property::calculation();
	return 0.002 * worth;
}