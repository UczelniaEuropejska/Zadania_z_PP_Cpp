// Zadanie 1.05: Napisać program obliczający pole trapezu o podanych przez użytkownika długościach podstaw (a i b), oraz wysokości (h). P=0.5*(a+b)*h.

#include <iostream>

using namespace std;

float x, y, r;

int main()
{
	cout << "Podaj 1 dlugosc podstawy trapezu: ";
		cin >> x;
			if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Podaj 2 dlugosc podstawy trapezu: ";
		cin >> y;
            if (y==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Podaj wysokosc trapezu: ";
		cin >> r;
			if (r==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Pole trapezu wynosi: " << 0.5*(x+y)*r << endl;
return 0;
}
