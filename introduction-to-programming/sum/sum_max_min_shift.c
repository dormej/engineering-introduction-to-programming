#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int tab[15], i, suma=0, maks, min, m_o;

    for (i=0;i<15;i++)
    {

        tab[i]=rand()%14;
        printf("%3i,", tab[i]);
        suma+=tab[i];

    }
    printf("\nSuma jest rowna: %i", suma);
         maks=tab[0]; min=tab[0];
    for (i=0;i<15;i++)
        {
         if (tab[i]>maks) maks=tab[i];
         if (tab[i]<min) min=tab[i];
        }
    printf("\nmaks=%i \nmin=%i\n", maks,min);
    m_o=tab[0];

    for (i=0;i<15;i++)
    {
      tab[i]=tab[i+1];
    printf("%i, ", tab[i]);
    }


    return 0;
}
