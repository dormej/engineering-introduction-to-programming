#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//program losuje 10000 liczb z <0,100>
//pisuje ile razy ka¿da z liczb zosta³a wylosowana.
int main()
{
    int ile[101]={0};int i,los;
    srand(time(NULL));

    for (i=1;i<=10000;i++)
    {
        los=rand()%101;
        ile[los]++;
    }
    for (i=0;i<=100;i++)
    {
        printf("%i %i\n", i,ile[i]);
    }

    return 0;
}
