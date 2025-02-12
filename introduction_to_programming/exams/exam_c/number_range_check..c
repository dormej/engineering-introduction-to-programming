//Zad.1
//Program prosi o podanie liczby ca³kowitej tak d³ugo a¿  podana zostanie liczba z  przedzia³u <-20,20>

#include <stdio.h>

int main()
{
int liczba;
    do
    {
        printf("Podaj liczbe z przedzialu <-20,20>: ");

        scanf("%i", &liczba);
        printf("%i\n", liczba);
    }
    while (!(liczba>=-20 && liczba<=20));
        printf("OK");

return 0;
}

