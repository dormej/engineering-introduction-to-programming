//Zad.5
//Program losuje do tablicy 10 liczb ca³kowitych z przedzia³u <-30,30>.
//Wypisuje wylosowane elementy.
//Wczytuje liczbê ca³kowit¹.
//Do ka¿dego elementu tablicy dodaje podan¹ liczbê.
//Wypisuje elementy tablicy po zamianie.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab[10], number, i;
    srand(time(NULL));
    for (i=0;i<10;i++)
    {
        tab[i]=rand()%11;
        printf("%i, ", tab[i]);
    }
        printf("\nPodaj liczbe calkowita: ");
        scanf("%i", &number);
    for (i=0;i<10;i++)
    {
        tab[i]=tab[i]+number;
        printf("%i, ", tab[i]);
    }
    return 0;
}
