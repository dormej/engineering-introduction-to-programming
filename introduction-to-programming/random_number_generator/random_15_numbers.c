#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Program losuje 15 dowolnych liczb z zakresu <0,100>.\n");
    srand(time(NULL));//zapewnia inny moment startu, zawsze losowa
    for (i=0; i<15; i++)
        printf("%i\n", rand()%101);//modulo 11, reszta z dzielenia przez 1 czyli <0,10>

    return 0;
}
