//Zad.4
//Program losuje do tablicy 25 liczb ca³kowitych z <0,10>.
//Liczy ile jest w tablicy liczb parzystych.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    int main()
    {
        int tab[25], i, ile=0;
            srand(time(NULL));
            printf("Program losuje 25 l.calkowitych.\n");
        for (i=0;i<25;i++)
        {
            tab[i]=rand()%11;
            printf("%i,", tab[i]);
            if (i%2==0) ile++;
        }
        printf("\nIlosc liczb parzystych: %i", ile);
        return 0;
    }
