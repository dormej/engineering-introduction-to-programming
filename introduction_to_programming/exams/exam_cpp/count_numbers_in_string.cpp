/*
Zad. 6
funkcja int ileCyfr(char napis[])
zwraca w wyniku liczb� cyfr w napisie.
Np.: ileCyfr(�Ala ma 3 koty i 2 psy�), wynik 2
*/
#include <iostream>
using namespace std;

int ileCyfr (char []);
int main()
{
    char napis [200];
    cout << "Podaj napis" << endl;
    cin >> napis;
  
    cout << "Wynik "<< ileCyfr(napis);
    return 0;
}
int ileCyfr (char napis [])
{
    int i=0, ile_cyfr=0;
    while (napis[i]!='\0') 
    {
        if (napis[i]>='0' && napis[i]<='9') 
        {
            ile_cyfr++;
        }
        i++;
    }
    return ile_cyfr;
}