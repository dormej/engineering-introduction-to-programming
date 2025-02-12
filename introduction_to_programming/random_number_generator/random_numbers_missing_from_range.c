//Program losuje do tablicy 20 liczb z <0,50>
//Wypisuje elementy tablicy.
//Nastêpnie wypisuje, które liczby z podanego przedzia³u
//<0,50> nie zosta³y wylosowane, czyli których liczb z tego przedzia³u nie ma w tablicy.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int tab[20],i,pomoc[51]={0};
    srand(time(NULL));//ustawia punkt startowy
    for(i=0;i<20;i++)
    {
        tab[i]=rand()%51;
        printf("%3i",tab[i]);
        pomoc[tab[i]]=1;
    }
    printf("\nNie wylosowano liczb: \n");
    for(i=0;i<=50;i++)
    {
        if (pomoc[i]==0)printf("%3i",i);
    }
    return 0;
}
