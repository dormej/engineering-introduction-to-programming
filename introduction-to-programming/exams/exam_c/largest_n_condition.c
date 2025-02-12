//Zad.9
//Program oblicza najwi¹ksz¹  liczbê naturaln¹  n , która spe³nia warunek n^2-1<100.

#include <stdio.h>
#include <math.h>

int main()
{
    int n=0;
    do
    {
        n++;
    }
    while (n*n-1<100);
    n--;
    printf("Najwieksza lizba naturalna, spalniajaca warunek n^2-1<100 to %i", n);
    return 0;
}
