//Zad.5
//Program losuje do tablicy 10 liczb ca�kowitych z przedzia�u <-30,30>.
//Wypisuje wylosowane elementy.
//Wczytuje liczb� ca�kowit�.
//Do ka�dego elementu tablicy dodaje podan� liczb�.
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
