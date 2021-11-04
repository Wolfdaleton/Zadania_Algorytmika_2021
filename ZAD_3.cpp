//      PSEUDOKOD
//Podaj a,b,c
//Stałe pomocnicze delta, tmp_1, tmp_2, tmp_3
//delta = pow(delta, 2)
//Jeśli (delta<0)
//      Wypisz "Brak rozwiązań"
//Jeśli (delta==0)
//  tmp_1= (-b/2*a)
//  wypisz temp
//Jeśli (delta>0)
//  tmp_2=(-b+sqrt(delta)/2*a)
//  tmp_3=(-b-sqrt(delta)/2*a)
//  wypisz tmp_2, tmp_3 

#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
    double a, b, c, delta, tmp_1, tmp_2, tmp_3;
    cin >> a;
    cin >> b;
    cin >> c;
    delta=((b*b)-(4*a*c));
        if (delta<0)
        {
            cout<<"Brak miejsc zerowych";
        }

        else if (delta==0)
        {
            tmp_1=((-b)/(2*a));
            cout<< tmp_1, "";
        }
        else
        {
            tmp_2=(((-b)+(sqrt(delta))))/(2*a);
            tmp_3=(((-b)-(sqrt(delta))))/(2*a);
            cout << tmp_2, "oraz liczba ";
            //Nie wiem dlaczego nie działa cout oraz liczba, a także czemu wyniki podają się w jednym wierszu, czemu w wierszu 39 po wpisaniu <<endl wyskakuje błąd:
            //invalid operands of types ‘const char [1]’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’gcc
            cout << tmp_3, "";
        }
    return 0;
}