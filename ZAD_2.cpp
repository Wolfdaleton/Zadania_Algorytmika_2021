//      PSEUDOKOD
//Podaj liczby A, oraz B
//float temp_1=0
//Wypisz "Funkcja która wyszukuje punkt przecięcia ma postać y=ax+b, proszę  o wpisanie w konsoli współczynnika a, a następnie współczynnika b"
//temp1=(-(b/a))
//Wypisz temp1, "";


#include <iostream>
using namespace std;
int main()
    {
        long X=0;
        float a=0, b=0; 
        float pkt=0;
        cout<< "Funkcja która wyszukuje punkt przecięcia ma postać y=ax+b, proszę  o wpisanie w konsoli współczynnika a, a następnie współczynnika b" <<endl;
        while(!(cin >>a))
            {
               cout<<"Błąd proszę podać liczbę";
               cin.clear();
               cin.ignore(123, '\n'); 
            } 
        while(!(cin >>b))
            {
               cout<<"Błąd proszę podać liczbę";
               cin.clear();
               cin.ignore(123, '\n'); 
            } 
    pkt=(-(b/a));
    cout << pkt, " ";
    return 0;
    }