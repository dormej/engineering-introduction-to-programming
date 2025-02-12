#include <stdio.h>

int main()
{
    int i, suma=0;
    printf("%i\n", suma);
    for(i=1;i<=10;i++)

        printf("Witaj\n");

    for(i=15;i<=25;i++)

        printf("%3i", i);
        printf("\n");
    for(i=5;i<=15;i++)
    {
        printf("%i+", i);
        suma+=i;
    }
    printf("=%i", suma);
    return 0;
}
