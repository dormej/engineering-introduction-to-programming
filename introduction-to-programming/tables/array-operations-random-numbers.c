#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//1. Program losuje do tablicy 15 liczb ca³kowitych z <0,10>.
//2. Wypisuje wartoœci przechowywane w tablicy.
//3. Liczy sumê elementów w tablicy.
//4. Znajduje wartoœæ maksymaln¹ i minimaln¹ w tablicy.
int main()
{
    int tab[15],i,suma=0,min,maks,tmp;
    srand(time(NULL));
    for (i=0;i<=14;i++)
    {
        tab[i]=rand()%11;
        printf("%3i",tab[i]);
        suma+=tab[i];
    }
    printf("\nsuma=%i\n",suma);
    min=tab[0];maks=tab[0];
    for (i=1;i<=14;i++)
    {
        if (tab[i]<min)min=tab[i];
        if (tab[i]>maks)maks=tab[i];
    }
    printf("min=%i max=%i\n",min,maks);
    tmp=tab[0];
    for (i=0;i<14;i++)
        tab[i]=tab[i+1];
    tab[14]=tmp;
    for (i=0;i<=14;i++)
        printf("%3i",tab[i]);
    return 0;
}
