/* WprowadŸ 3 liczby ca³kowite które s¹ d³ugoœciami boków trójk¹ta i sprawdŸ czy z tych boków da siê zbudowaæ trójk¹t.*/ 

#include <iostream>

using namespace std;

int x, y, z; //liczby ca³kowite....

int main() 
{
cout << "Wproawdz 3 liczby aby sprawdzic czy otrzymasz trojkat"<<endl;
cout << "Podaj 1 liczbe: ";
		cin >> x;
			if (x==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 2 liczbe: ";
		cin >> y;
			if (y==0) cout << "Nie dodajemy zer! " <<endl;
	cout << "Podaj 3 liczbe: ";
		cin >> z;
			if (z==0) cout << "Nie dodajemy zer! " <<endl;
if ((x+y>z) && (x+z>y) && (y+z>x)) // Czyli suma 2 boków musi byæ wiêksza od 3 go boku..
		cout << "Masz doczynienia z trojkatem :-)" <<endl;
	else 
		cout << "To nie jest trojkat" <<endl;
return 0;
}
