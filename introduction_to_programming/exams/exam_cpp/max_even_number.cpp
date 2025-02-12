/*
Zad 3 (16)
*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void losuj(int tab[], int rozmiar)
{
    srand(time(NULL));
    int i;
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%11;
    }
}
void wypisz(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
    {
        cout << tab[i] << " ";
    }
}
int maxParz(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
    {
        if((tab[i]%2==0) && (tab[i]>max)) 
        {
           max=tab[i]; 
        }
     
    return max;
}
int main ()
{
    int rozmiar;
    cout << "Podaj rozmiar tablicy: "<< endl;
    cin >> rozmiar ;
    int tab[rozmiar];
    losuj(tab,rozmiar);
    wypisz(tab,rozmiar);
    cout << "ParzystaMax: " << maxParz(tab,rozmiar); 
    
    return 0; 
}