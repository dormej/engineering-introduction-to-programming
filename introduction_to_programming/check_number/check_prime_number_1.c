#include <stdio.h>

int main ()
{
    int liczba;

    do
    {
        printf("Podaj liczbe naturalna od 1 do 100: \n");
        scanf("%i", &liczba);

    }
    while ((liczba<1 || liczba>100));

    for (int i=2; i<liczba; i++)
    {
        if (liczba%i==0)
        {
            printf("To nie jest liczba pierwsza.");
            return 0;
        }
    }
        printf("Liczba pierwsza");

    return 0;
}
