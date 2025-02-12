#include <stdio.h>
int main()

{
    int liczba;
    printf("Podaj liczbe calkowita: ");
    scanf("%i", &liczba);

    switch (liczba)
    {
        case 1:
            printf("Podano 1\n");
            break;
        case 2:
            printf("Podano 2\n");
            break;
        default:
            printf("Podano inna liczbe niz 1 lub 2");
            break;
    }
    return 0;
}
