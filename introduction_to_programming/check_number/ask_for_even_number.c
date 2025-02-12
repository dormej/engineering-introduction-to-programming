#include <stdio.h>

int main()

{
    int liczba;
    printf("Podaj liczbe parzysta: ");
    fflush(stdin);
    scanf("%i", &liczba);
    do
    {
        printf("Zla liczba.\nPodaj liczbe parzysta: ");
        fflush(stdin);
        scanf("%i", &liczba);
    }
    while(liczba%2!=0);
        printf("BRAWO");
    return 0;
}
