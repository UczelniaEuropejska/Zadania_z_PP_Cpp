//Zadanie 1.08: Napisaæ program obliczaj¹cy obwód prostok¹ta o podanych przez u¿ytkownika bokach a i b. Ob=2*a+2*b.

#include <iostream>

using namespace std;

float x, y;

int main()
{
	cout << "Podaj 1 wielkosc boku prostokata aby obliczyc obwod: ";
		cin >> x;
			if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Podaj 2 wielkosc boku prostokata aby obliczyc obwod: ";
		cin >> y;
			if (y==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Obwod kwadratu wynosi: " << 2*x+2*y << endl;
	
return 0;
}
