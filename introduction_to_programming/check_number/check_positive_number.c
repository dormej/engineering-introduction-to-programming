#include <stdio.h>
// Wczyta� liczb� ca�kowit� i sprawdzi� czy wczytana liczba jest >0

int main()
{
    int liczba;
    printf("Podaj liczbe calkowita > 0: ");
    scanf("%i", &liczba);
    if (liczba>0)
        printf("OK\n");
    else
        printf("To nie jest liczba >0\n");
    return 0;
}
