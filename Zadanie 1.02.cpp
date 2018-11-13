//Zadanie 1.02: Napisaæ program obliczaj¹cy pole prostok¹ta o podanych przez u¿ytkownika bokach a i b (P=a*b).
#include <iostream>

using namespace std;

float x,y;

int main(int argc, char* argvp[]) 
{

cout << "Podaj 1 dlugosci bokow prostokata: " <<endl;
cin >> x;
			if (x==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Podaj 2 dlugosci bokow prostokata: ";
cin >> y;
            if (y==0) cout << "Nie mnozymy przez zero! " <<endl;
cout << "Pole prostokata wynosi: " << x*y << endl;

return 0;
}
