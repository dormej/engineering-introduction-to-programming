#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Program losuje liczby z <0,10> tak d³ugo a¿ wylosuje
//dwie jednakowe liczby pod rz¹d.
int main()
{
    int los=-1,poprzednia1,poprzednia2;
    srand(time(NULL));//ustawia punkt startowy
    do
    {
        poprzednia2=poprzednia1;
        poprzednia1=los;
        los=rand()%11;
        printf("%i\n",los);
    }while(!(los==poprzednia1 && poprzednia1==poprzednia2));
    return 0;
}
