#include <stdio.h>

int main()
{
    char znak, a;
    printf("Podaj znak a: ");
    scanf("%c", &znak);
    if(znak=='a')
        printf("OK");
    else
        printf("ZLE");
    return 0;
}
