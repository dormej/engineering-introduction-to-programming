#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()

{
    srand(time(NULL));
    int liczba;
    int licznik0 = 0;
    int licznik10 = 0;

    do
    {
        liczba=rand()%11;
        printf("%i ", liczba);
        if( liczba==0 )
        {
            licznik0++;
        }
        if ( liczba == 10)
        {
            licznik10++;
        }
    }
    while (!(licznik0 > 0 && licznik10 > 0));





    return 0;
}
