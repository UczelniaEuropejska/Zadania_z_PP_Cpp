// Zadanie 1.06: Napisa� program obliczaj�cy obw�d ko�a o podanym przez u�ytkownika promieniu r. Ob=2*PI*r. Uwaga: PI nale�y zadeklarowa� jako sta��.

#include <iostream>

using namespace std;

#define PI 3.1415 //zdefionwane pi

float r;

int main()
{
	cout << "Podaj promien aby obliczyc obwod kola: ";
		cin >> r;
			if (r==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Obwod kola wynosi: " << 2*PI*r << endl;	
return 0;
}
