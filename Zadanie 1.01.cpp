// Zadanie 1.01: Napisaæ program obliczaj¹cy pole ko³a o podanym przez u¿ytkownika promieniu (Wzór na pole ko³a P=pi*r*r). Uwaga: Wartoœæ PI (3.1415) nale¿y zadeklarowaæ jako sta³¹.

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
