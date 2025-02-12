/*
Zad. 7
funkcja int zamiana(char napis[])
zamienia w napisie spacje na znak '_'. Zwraca w wyniku liczbê wykonanych zamian.
Zamiana(”Ala ma kota”) wynik 2
Zmieniony napis: ”Ala_ma_kota”
*/

#include <stdio.h>

int zamiana(char []);

int main()
{
    char napis[200];
    printf("podaj napis: ");
    gets(napis);
    printf("wykonano zmian: %i\n", zamiana(napis));
    printf("napis po zmianie: %s", napis);
    return 0;
}

int zamiana(char napis[])
{
    int i = 0, ile_zmian = 0;
    while( napis[i] != '\0' )
    {
        if( napis[i] == ' ' )
        {
            napis[i] = '_';
            ile_zmian++;
        }
        i++;
    }
    return ile_zmian;
}
