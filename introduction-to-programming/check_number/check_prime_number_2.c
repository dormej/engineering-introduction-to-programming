#include <stdio.h>

int main ()
{
    int liczba, i;
    do
    {
        printf("Podaj liczbe calkowita z <3,100>\n");
        scanf("%i", &liczba);
    }while(!(liczba>=3 && liczba<=100)); // while ((liczba<3) || (liczba >100))

    for(i=2; i<liczba; i++)
    {
        if (liczba%i==0)
        {
            printf("Liczba nie jest liczba pierwsza\n");
            return 0;
        }
    }
            printf("Liczba pierwsza");

    return 0;
}
