// Zadanie 1.10: Napisaæ program obliczaj¹cy pole powierzchni kuli o promieniu r. P=4*PI*r*r. Uwaga: PI nale¿y zadeklarowaæ jako sta³¹.

#include <iostream>

using namespace std;

float r;

#define PI 3.1415 //zdefionwane PI

int main()
{
	cout << "Podaj wielkosc promienia r aby obliczyc pole powierzchni kuli ";
		cin >> r;
			if (r==0) cout << "Nie mnozymy zer! " <<endl;
	
	cout << "Pole powierzchni kuli wynosi: " << 4*PI*r*r << endl;

return 0;
}
