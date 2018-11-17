/* WprowadŸ ci¹g 10 liczb ca³kowitych na ekranie ma wyœwietliæ:
- sumê parzystych i nieparzystych liczb
- œredni¹ parzystych i nieparzystych liczb
- no i ekstra zadanie ma wyœwietliæ medianê
liczba parzysta binarna – to liczba binarna koñcz¹ca siê cyfr¹ 0.
liczba nieparzysta binarna – to liczba binarna koñcz¹ca siê cyfr¹ 1.
*/ 

#include <iostream> 

using namespace std; 
int main () 
{ 
   int i,n,x; 
   float b,c;
   cout << "Program sumujacy liczby parzyste i nieparzyste." << endl; 
   b=c=0; 
   for (i=0; i<10; i++) //bez pentli for nie zrobilbym tego inaczej ;/
   { 
      cout << "Podaj liczbe: "; cin >> x; 
      if (x%2) 
           b+=x; 
      else
           c+=x; 
   } 
cout << "Suma liczb parzystych wynosi: "; cout << c <<endl; 
cout << "Srednia liczb parzystych wynosi: "; cout << c/10 <<endl;
cout << "Mediana liczb parzystych wynosi: "; cout << (c/2)+1 <<endl;
cout << "Suma liczb nieparzystych wynosi: "; cout << b << endl;
cout << "Srednia liczb nieparzystych wynosi: "; cout << b/10 <<endl;
cout << "Mediana liczb nieparzystych wynosi: "; cout << (b+1)/2 << endl; 
    system("PAUSE");
return 0; 
}


