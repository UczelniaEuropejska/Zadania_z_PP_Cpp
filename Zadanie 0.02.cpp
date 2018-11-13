// Konwersja stopni Celsjusza na Fahrenheita i Kelvina

#include <iostream>

using namespace std;

float x;

int main()
{
	cout << "Podaj stopnie Celsjusza: ";
		cin >> x;
			if (x==0) cout << "Nie liczymy zer! " <<endl;
	cout << "Stopnie Kelvina: " << x+274 << endl;
	cout << "Stopnie Fahrenheita: " << x*1.8+32 << endl;
return 0;
}
