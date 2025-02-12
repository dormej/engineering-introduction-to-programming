/*
Zad. 10
funkcja  int minParzysta(int  tablica[],int rozmiar)
zwraca w wyniku najmniejsza parzyst¹ wartoœæ z tablicy
tablica: {3, 5, 8, 1, 9, 4, 7 } wynik 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minParzysta(int [],int);

int main()
{
    srand(time(NULL));
    int rozmiar;
    printf("podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    int tablica[rozmiar];
    int i;
    for(i = 0; i < rozmiar; i++)
    {
        tablica[i] = rand()%10;
        printf("%i ", tablica[i]);
    }
    printf("\n");
    int liczba = minParzysta(tablica, rozmiar);
    if( liczba != 10 ) printf("najmniejsza parzysta wartosc z tablicy to: %i\n", liczba);
    else printf("tablica nie ma parzystego elementu\n");
    return 0;
}

int minParzysta(int  tablica[],int rozmiar)
{
    int liczba = 10;
    int i;
    for(i = 0; i < rozmiar; i++)
    {
        if( tablica[i] < liczba && tablica[i] % 2 == 0 ) liczba = tablica[i];
    }
    return liczba;
}

