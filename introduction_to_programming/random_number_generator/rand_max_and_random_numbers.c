#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("RAND_MAX=%i\n", RAND_MAX);
    srand(time(NULL));//zapewnia inny moment startu, zawsze losowa
    for (i=1; i<=10; i++)
        printf("%i\n", rand()%11);//modulo 11, reszta z dzielenia przez 1 czyli <0,10>

    return 0;
}
