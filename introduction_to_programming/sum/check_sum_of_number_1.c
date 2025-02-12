#include <stdio.h>

int main()
{
    int liczba1; int liczba2; int suma=liczba1+liczba2;
        printf("Podaj 1 liczbe calkowita: ");
        scanf("%i", &liczba1);
        printf("Podaj 2 liczbe calkowita: ");
        scanf("%i", &liczba2);
        printf("Podaj %d + %d = ", liczba1,liczba2); // d bo double, nazwa zmiannej
        fflush(stdin);
        scanf("%d", &suma);
        if (liczba1+liczba2==suma)
        {
            printf("DOBRZE");
        }
        else
            printf("ZLE");

    return 0;


}
