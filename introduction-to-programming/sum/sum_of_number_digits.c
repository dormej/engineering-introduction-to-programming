//Zad.10
//Program wczytuje liczbê ca³kowit¹.
//Liczy sumê cyfr podanej liczby.
//np.: 3473 wynik 3+4+7+3

#include <stdio.h>

int main()
{
    int liczba, suma=0;
    fflush(stdin);
    printf("Podaj liczbe: ");
    scanf("%i ", &liczba);
    while (liczba>0)
    {
        suma = suma + liczba % 10;
        liczba = liczba /10;
    }
    printf("suma %i", suma);

    return 0;
}
