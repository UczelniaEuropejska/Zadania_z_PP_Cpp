// Zadanie 1.01: Napisa� program obliczaj�cy pole ko�a o podanym przez u�ytkownika promieniu (Wz�r na pole ko�a P=pi*r*r). Uwaga: Warto�� PI (3.1415) nale�y zadeklarowa� jako sta��.

#include <iostream>
#include <math.h> // aby dzialalo PI*pow(r, 2)
using namespace std;

float x, y, r;

#define PI 3.1415 //zdefionwane pi

int main()
{

cout << "Podaj dlugosc promienia kola: ";
cin >> r;
			if (r==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Pole kola wynosi: " << PI*pow(r, 2) << endl;

return 0;
}
