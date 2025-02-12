#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
 int l0=0, l10=0, liczba, los=0;
    srand(time(NULL));

    do
    {
        liczba=rand()%11;
        los++;
        printf("%i\n", liczba);
            if (liczba == 0)
                l0++;
            if (liczba == 10)
                l10++;


    }while (!(l0>0 && l10>0));
        printf("Liczba 10-tek: %i\n", l10);
        printf("Liczba 0: %i\n", l0);
        printf("Liczba losowan: %i\n", los);

 return 0;
}
