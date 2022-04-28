#include <iostream>
#include <windows.h>
#include "nomer9.h"
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Property d;
	Apartment a(100);
	Property *P[7];
	P[0] = new Apartment(100000);
	P[1] = new Apartment(100000);
	P[2] = new Apartment(100000);
	P[3] = new Car(100000);
	P[4] = new Car(100000);
	P[5] = new CountryHouse(100000);
	P[6] = new CountryHouse(100000);
	for (int i = 0; i < 7; i++)
	{
		cout << "Величина налога для объекта №" << i+1 << " = " << P[i]->calculation() << endl;
	}
	delete *P;
	return 0;
}