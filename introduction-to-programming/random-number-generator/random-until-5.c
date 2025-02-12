#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int los, ile=0;
    printf("Program losuje liczby dopoki nie trafi na 5.\n");
    srand(time(NULL));
    do
    {
            los=rand()%101;
            printf("%i\n", los);
            ile++;
    }
    while (los!=5);

    printf("Liczba losowan: %i", ile);

    return 0;
}
