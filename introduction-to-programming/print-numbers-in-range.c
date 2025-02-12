#include <stdio.h>

int main()
{
    int liczba1, liczba2;

    printf("Podaj 1 liczbe calkowita: ");
    scanf("%i", &liczba1);
    printf("Podaj 2 liczbe calkowita: ");
    scanf("%i", &liczba2);
        if (liczba1<=liczba2)
        {
            for (int i=liczba1; i<=liczba2; i++)
                printf("%i, ", i);

        }
        if (liczba1>liczba2)
        {
            for (int i=liczba2; i<=liczba1; i++)
                printf("%i, ", i);

        }
    return 0;
}
