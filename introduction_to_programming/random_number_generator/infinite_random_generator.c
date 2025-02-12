#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()

{
    int los, ile=0;
    srand(time(NULL));
    do
    {
        los=rand()%11;
        ile++;
        printf("%i\n", los);

    }

    return 0;
}
