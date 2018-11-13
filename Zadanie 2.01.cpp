// Zadanie 2.01: Napisaæ program tablicuj¹cy funkcjê y=A*x^2+B w przedziale od 0.0 do 1.0 co 0.1 dla podanych przez u¿ytkownika wartoœci parametrów A i B.

#include <iostream>
#include <math.h>

using namespace std;

float A, B, y, i, tablica[ 10 ];

#define PI 3.1415 //zdefionwane PI

int main()
{
cout << "Podaj wartosc A: ";
		cin >> A;
			if (A==0) cout << "Nie liczymy zer! " <<endl;
	cout << "Podaj wartosc B: ";
		cin >> B;
			if (B==0) cout << "Nie liczymy zer! " <<endl;
    for( float i = 0.0; i <= 1.0; i += 0.1 )
    {
        y = A * pow( i, 2 ) + B;
tablica[( int )( i * 10 ) ] = y;
	}
    for( int i = 0; i < 10; i++ )
         printf( "Tablica zawiera %.3f \n", tablica[ i ] );
return 0;
}
