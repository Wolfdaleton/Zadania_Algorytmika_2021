// Program pozwalający na wypełnienie tablicy o rozmiarze N podanym w kodzie źródłowym i wypełnenie jej potęgami kolejnych liczb naturalnych


#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int i=0;
    int n=5;
    int temp=1;
    int arr[n];
    do {      
            arr[i]=pow (temp, 3);
            i++; 
            temp++;
        }
            while (i<n);
        
}