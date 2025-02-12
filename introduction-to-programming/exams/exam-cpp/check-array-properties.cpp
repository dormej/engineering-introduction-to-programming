#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void losuj(int tab[], int rozmiar)
{
    int i;
    for (i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%11;
    }
}
void wypisz (int tab[], int rozmiar)
{
    int i;
    for (i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%11;
        cout << tab[i] << " " ;
    }
}
int maxParz(int tab[], int rozmiar)
{
    int i;
    int max=0;
    for (i=0;i<rozmiar;i++)
    {
        if ( (tab[i]%2==0) &&  (tab[i]>max) ) max=tab[i];
    }
    return max;
}
int czyRosnacy(int tab[], int rozmiar)
{
    int i;
    for (i=0;i<rozmiar;i++)
    {
        if (tab[i]>tab[i+1] ) return 0;
    }
    return 1;
}
int czyTakieSame(int tablica1[], int tablica2[], int rozmiar)
{
    int i;
    for (i=0;i<rozmiar;i++)
    {
        tablica1[i]=rand()%2;
        tablica2[i]=rand()%2;
        cout << tablica1[i] << "  " << tablica2[i] << endl;
    }
    int j, ile=0;
    for (i=0;i<rozmiar;i++)
    {
        for (j=0;j<rozmiar;j++)
        {
            if (tablica1[i] != tablica2[j]) 

        }
    } return 1;
    
int main ()
{
    srand(time(NULL));
    int rozmiar;
    cout << "Podaj rozmiar: " << endl;
    cin >> rozmiar;
    int tab[rozmiar];
    int tablica1[rozmiar];
    int tablica2[rozmiar];
    losuj(tab,rozmiar);
    wypisz(tab,rozmiar);
    cout << "MAXparz: " << maxParz(tab,rozmiar) << endl;
    if (czyRosnacy(tab,rozmiar)) cout << "rosnacy" << endl;
    else  cout << "nierosnacy" << endl;
    if (czyTakieSame(tablica1,tablica2,rozmiar)) cout << "zawiera te same elementy";
    else cout << "inne" ;
    return 0;
}