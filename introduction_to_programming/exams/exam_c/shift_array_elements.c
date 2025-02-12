#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tab[10], ost_m, i;
    srand(time(NULL));

    for (i=0;i<=9;i++)
    {
        tab[i]=rand()%101;
        printf("%i,", tab[i]);
        printf("\n");
    }

    ost_m=tab[0];
    for (i=0;i<9;i++)
    {
        tab[i]=tab[i+1];
    }
    tab[9]=ost_m;
    for (i=0;i<=9;i++)
    {
        printf("%i,", tab[i]);
    }

    return 0;
}
