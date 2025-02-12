#include <stdio.h>

int main()
{
    char znak;
    do
    {
     printf("Wczytaj litere a: ");
     fflush(stdin);
     scanf("%c", &znak);

    }while(znak!='a');


    return 0;

}
