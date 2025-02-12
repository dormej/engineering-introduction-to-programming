//Zad.3
//Program wczytuje liczbê ca³kowit¹ dodatni¹ i wypisuje wszystkie dzielniki podanej liczby
#include <stdio.h>
int main()
{
    int number, j;
            printf("Podaj liczbe calkowita dodatnia: ");
            scanf("%i", &number);
    if(number>0)
        {
        for(j=1;j<=number;j++)
            {
                if(number%j==0)
                    printf("%i,",j);
            }
        }
    else
            printf("Zla liczba");

    return 0;
}
