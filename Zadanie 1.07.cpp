//Zadanie 1.07: Napisa� program obliczaj�cy obw�d kwadratu o podanym przez u�ytkownika boku a. Ob=4*a.

#include <iostream>

using namespace std;

float x;

int main()
{
	cout << "Podaj wielkosc boku kwadratu aby obliczyc obwod: ";
		cin >> x;
			if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
	cout << "Obwod kwadratu wynosi: " << 4*x << endl;
	
return 0;
}
