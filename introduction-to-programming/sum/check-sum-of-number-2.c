#include <stdio.h>
int main()
{
    int liczba1, liczba2, suma;

    printf("Podaj 1 liczbe: ");
    scanf("%i", &liczba1);
    printf("Podaj 2 liczbe: ");
    scanf("%i", &liczba2);
    printf("Podaj sume tych liczb: ");
    scanf("%i", &suma);
    if(suma==liczba1+liczba2)
        printf("Suma prawidlowa");
    else
    printf("Suma nieprawidlowa");

return 0;
}
