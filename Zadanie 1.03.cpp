//Zadanie 1.03: Napisaæ program obliczaj¹cy pole trójk¹ta o podanych przez u¿ytkownika: podstawie (a) i wysokoœci (h). P=0.5*a*h.

#include <iostream>

using namespace std;

float x,y;

int main()
{

cout << "Podaj dlugosc boku trojkata: ";
cin >> x;
	if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Podaj wysokosc trojkata: ";
cin >> y;
	if (y==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Pole trojkata wynosi: " << x*y/2 << endl;

return 0;
}
