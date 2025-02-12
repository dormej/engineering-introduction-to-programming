#include <stdio.h>

int main ()
{
    int liczba;
    printf("Podaj liczbe rzeczywista (sprawdze czy jest parzysta): ");
    scanf("%i", &liczba);
    int c=liczba%2;

    if(c==0)
        printf("Liczba parzysta");
    else
        printf("Liczba nieparzysta");

    return 0;
}
