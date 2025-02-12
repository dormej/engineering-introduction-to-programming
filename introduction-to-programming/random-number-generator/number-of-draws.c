#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    int los, ile=0;

      srand(time(NULL));
    do {
        los=rand()%11;
        ile++;
        printf("%i\n", los);
        }
    while (los!=5);

    do {
        los=rand()%11;
        ile++;
        printf("%i\n", los);
        }
    while (los!=5);
    do {
        los=rand()%11;
        ile++;
        printf("%i\n", los);
        }
    while (los!=5);

        printf("wykonano losowan: %i\n", ile);
    return 0;
}
