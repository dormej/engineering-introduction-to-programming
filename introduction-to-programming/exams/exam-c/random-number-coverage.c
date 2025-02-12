//Zad.11
//Program losuje liczby ca³kowite z przedzia³u  <0,25> tak d³ugo
//a¿  wylosowane zostan¹ wszystkie liczby z podanego przedzia³u.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int tablica[26] = {0};
    int liczba;
    int licznik_poprawnosci;
    int i;
    do
    {
        liczba = rand()%26;
        printf("%i ",liczba);
        tablica[liczba]++;
        licznik_poprawnosci = 0;
        for(i = 0; i < 26; i++)
            if( tablica[i] > 0 ) licznik_poprawnosci++;
    } while (licznik_poprawnosci != 26 );

    printf("\n\n");
    for(i = 0; i < 26; i++)
    {
        printf("%i - %i\n", i, tablica[i]);
    }
    return 0;
}
