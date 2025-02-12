#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Program losuje liczby z <0,10> tak d³ugo a¿ wylosuje
//trzy jednakowe liczby pod rz¹d.
int main()
{
    int los=-1,ile=0,poprzednia=-1;
    srand(time(NULL));//ustawia punkt startowy
    do
    {
        poprzednia=los;
        los=rand()%11;
        if (los==poprzednia)
            ile++;
        else
            ile=0;
        printf("%i\n",los);
    }while(ile<2);
    return 0;
}
