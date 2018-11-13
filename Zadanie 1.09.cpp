//Zadanie 1.09: Napisaæ program obliczaj¹cy obwód trapezu o podanych przez u¿ytkownika bokach a, b, c i d. Ob=a+b+c+d.

#include <iostream>

using namespace std;

float x, y, r, z;

int main()
{
	cout << "Podaj 1 wielkosc boku trapezu aby obliczyc obwod: ";
		cin >> x;
			if (x==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 2 wielkosc boku trapezu aby obliczyc obwod: ";
		cin >> y;
			if (y==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 3 wielkosc boku trapezu aby obliczyc obwod: ";
		cin >> r;
			if (r==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 4 wielkosc boku trapezu aby obliczyc obwod: ";
		cin >> z;
			if (z==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Obwod trapezu wynosi: " << x+y+r+z << endl;
	
return 0;
}
