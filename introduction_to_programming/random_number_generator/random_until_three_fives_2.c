#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int los, ile5=0, ile;
    srand(time(NULL));

    do
    {
        los=rand()%11;
        ile++;
        printf("%i\n", los);
        if (los==5)
        {
            ile5++;
            printf("-------------------\n");
        }

    }
    while(ile5!=3);
            printf("liczba losowan: %i", ile);

    return 0;
}
