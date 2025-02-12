/*
Zad. 3
Funkcja  int dzielniki(int liczba).
Zwraca w wyniku liczb� dzielnik�w podanej liczby.
Np.: dzielniki(10) wynik 4
1 2 5 10
*/
#include <iostream>
using namespace std;

int dzielniki(int liczba);
int main()
{
    int liczba;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;
    cout << "Ilosc dzielnikow liczby" << liczba << ": " << endl;
    cout << (dzielniki(liczba)) << endl;

    return 0;
}

int dzielniki(int liczba)
{
    int ile_dzielnikow=0;
    for (i=1;i<=liczba;i++)
    {
        if(liczba%i==0) ile_dzielnikow++;
    }
     return ile_dzielnikow;
}
