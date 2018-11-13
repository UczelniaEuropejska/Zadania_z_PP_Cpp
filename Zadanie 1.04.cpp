// Zadanie 1.04: Napisaæ program obliczaj¹cy pole równoleg³oboku o podanych przez u¿ytkownika przek¹tnych p i q. P=0.5*p*q.

#include <iostream>

using namespace std;

float x,y;

int main()
{
cout << "Podaj 1 przekatna rownolegloboku: ";
cin >> x;
	if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Podaj 2 przekatna rownolegloboku: ";
cin >> y;
	if (y==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Pole rownolegloboku wynosi: " << 0.5*x*y << endl;
return 0;
}
