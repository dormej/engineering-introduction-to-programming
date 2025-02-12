/*
Zad. 8
funkcja int suma(int tab[], int rozmiar, int liczba)
funkcja zwraca sumê elementów tablicy wiêkszych od liczby przekazanej jako argument.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int suma(int [], int, int);

int main()
{
    srand(time(NULL));
    int rozmiar, liczba;
    printf("podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    printf("podaj liczbe: ");
    scanf("%i", &liczba);
    int tab[rozmiar];
    int i;
    for(i = 0; i < rozmiar; i++)
    {
        tab[i] = rand()%10;
        printf("%i ", tab[i]);
    }
    printf("\n");
    printf("suma elementow tablicy wiekszych od %i wynosi: %i\n", liczba, suma(tab, rozmiar, liczba));
    return 0;
}

int suma(int tab[], int rozmiar, int liczba)
{
    int suma_int = 0;
    int i;
    for(i = 0; i < rozmiar; i++)
    {
        if(tab[i] > liczba) suma_int = suma_int + tab[i];
    }
    return suma_int;
}
