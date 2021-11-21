//Program wypełnia połowę tablicy watościami podanymi kolejnymi naturalnymi a drugą połowę 0
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Podaj liczbę elementów tablicy";
    cin >> n;
    int T[n];
    for(int i=0; i<n; i++)
        {
            if(i<n/2){
            T[i] = i;
        }
            else
            {
                T[i]=0;
            }
    cout<<T[i] <<" ";
    }

}