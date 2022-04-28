#ifndef NOMER9_H
#define NOMER9_H
#include <iostream>;
using namespace std;

class Property
{
public:
	double worth;
	Property();
	Property(double worth);
	virtual double calculation();
};

class Apartment : public Property
{
public:
	Apartment(double worth);
	double calculation();
};

class Car : public Property
{
public:
	Car(double worth);
	double calculation();
};

class CountryHouse : public Property
{
public:
	CountryHouse(double worth);
	double calculation();
};

#endif
