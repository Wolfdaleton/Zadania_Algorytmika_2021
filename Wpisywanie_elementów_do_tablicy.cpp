//Program służący do wypełniania tablicy o wybranej przez nas ilości elementów oraz wypisywanych przez nas wartości

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "wpisz liczbę elementów tablicy" <<endl; 
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++)
        {
            cout << "wpisz kolejny element" <<endl;
            cin >> arr[i];
        }
    
        cout << "Twoja tablica to:" <<endl;
        for (int i=0; i<n; i++)
        {
            cout << arr[i] <<"\t" ;
        }
}
