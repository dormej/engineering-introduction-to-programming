/*
Zad. 9
funkcja int sumaMaxMin(int tab[],int rozmiar)
zwraca sumê wartoœci minimalnej i maksymalnej w tablicy
tablica: {3, 5, 8, 1, 9, 2, 7 } wynik 1+9=10
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaMaxMin(int [], int rozmiar);
int main()
{
    int rozmiar;
    printf("Podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    int tab[rozmiar], i;
    for (i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%11;
        printf("%i ", tab[i]);
    }
    printf("Suma: %i", sumaMaxMin(tab, rozmiar));
    return 0;
}
int sumaMaxMin(int tab[], int rozmiar)
{
    int maks=tab[0], mini=tab[0], suma=0;
    int i;
    for (i=0;i<rozmiar;i++)
    {
        if (tab[i]>maks) maks=tab[i];
        if (tab[i]<mini) mini=tab[i];
    }
    suma=maks+mini;
    return suma;
}
