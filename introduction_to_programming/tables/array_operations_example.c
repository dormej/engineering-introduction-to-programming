//program losuje do tablicy 10 liczb calkowitych z przedzialu <-30,30>,
//Wypisuje wylosowane elementy,
//a) liczy ile jest elementow parzystych i nieparzystych
//b)sprawdza czy takie same elementy wystepuja obok siebie
//c)zamienia elementy wedlug zasady:
// kazdy element jest sum¹ samego siebie i elementu poprzediego,
//pierwsz element pozostaje bez zmian
//      3 5 1 2 4
//      3 8 6 3 6


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rozmiar=10;
    int tab[rozmiar], i, ileNiep=0;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%61-30;
        printf("%4i", tab[i]);
    }
    printf("\n");
    for(i=0;i<rozmiar;i++)
    {
        if (tab[i]%2!=0) ileNiep++; //
    }
    printf("Nieparzystych %i, parzystych %i\n", ileNiep, rozmiar-ileNiep);
    for(i=0;i<(rozmiar-1);i++)
    {
         if(tab[i]==tab[i+1])
            {
                printf("Takie same obok siebie\n"); return 0;
            }
    }
    for (i=rozmiar-1;i>0;i--)
    {
        tab[i]=tab[i]+tab[i-1];
    }
    for (i=0;i<rozmiar;i++)
    {
        printf("%i, ", tab[i]);
    }
    return 0;
}
