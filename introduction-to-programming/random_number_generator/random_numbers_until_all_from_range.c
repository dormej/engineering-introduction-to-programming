#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Program losuje liczby ca³kowite z <0,10>
//tak d³ugo a¿ wylosuje wszystkie liczby z podanego przedzia³u.
int main()
{
    int los,i,suma=0;int pomoc[11]={0};
    srand(time(NULL));//ustawia punkt startowy
    do
    {
        los=rand()%11;
        pomoc[los]=1;
        printf("%i\n",los);
        suma=0;
        for (i=0;i<11;i++)suma+=pomoc[i];
    }while(suma<11);
    return 0;
}
