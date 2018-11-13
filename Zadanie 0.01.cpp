// Wprowadz 3 liczby i wyswietl sume oraz srednia
#include <iostream>

using namespace std;

float x, y, r;

int main() 
{

cout << "Podaj 1 liczbe: ";
		cin >> x;
			if (x==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 2 liczbe: ";
		cin >> y;
			if (y==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 3 liczbe: ";
		cin >> r;
			if (r==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Suma wynosi: " << x+y+r << endl;
	cout << "Srednia wynosi: " << x+y+r/3 << endl;
return 0;
}
