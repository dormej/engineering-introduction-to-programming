//Zad.8
//Program losuje dwie liczby ca�kowite z przedzia�u <0,20>:  liczba1, liczba2
//zwraca sum� liczb z przedzia�u <liczba1 ,liczba2>,   je�eli liczba1<=liczba2
//lub sum� liczb z przedzia�u <liczba2 ,liczba1> ,   je�eli liczba1>liczba2
//np.: <3,6>   3+4+5+6=18

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i, suma=0, wynik;
    srand(time(NULL));

    n1=rand()%21;
    n2=rand()%21;
    printf("%i, %i,\n ", n1,n2);
    if (n1<=n2)
    {
        for(i=n1;i<=n2;i++)
        {
            printf("%i, ", i);
            suma+=i;
        }
            printf("SUMA=%i", suma);
    }
    if (n1>=n2)
    {
        for(i=n2;i<=n1
        ;i++)
        {
            printf("%i, ", i);
            suma+=i;
        }
            printf("SUMA=%i", suma);
    }


    return 0;
}
