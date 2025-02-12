/*
Zad. 14
Funkcja int zakres(int tablica[],int rozmiar) zwraca w wyniku ró¿nicê miêdzy wartoœci¹ maksymaln¹ i minimaln¹ w tablicy.
Np.: tablica[] {6,10,3,8,10,25,19,8} wynik: 25-3=22
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zakres(int [], int );
int main()
{
    int rozmiar;
    srand(time(NULL));
    printf("Podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    int tab[rozmiar];
    int i;
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%31;
        printf("%i ", tab[i]);
    }
    printf("Suma: %i", zakres(tab, rozmiar));
    return 0;
}
int zakres(int tab[], int rozmiar)
{
    int mini=tab[0], maks=tab[0], i;
    for (i=0;i<rozmiar;i++)
    {
        if(tab[i]<mini) mini=tab[i];
        if(tab[i]>maks) maks=tab[i];
    }
    return maks-mini;
}
