#include <stdio.h>
//program wypisuje liczby <1,100> podzielne przez 3
int main ()
{
    for ( int i=1; i<=100; i++)
    {
       if (i%3==0)
       {
           printf("%i\n", i);
       }

    }

    return 0;
}
