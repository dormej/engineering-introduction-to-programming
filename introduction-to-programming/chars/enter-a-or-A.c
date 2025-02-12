#include <stdio.h>

int main()

{
    char litera, a, A, z, Z;

    do
    {
        printf("Podaj a lub A: ");
        fflush(stdin);
        scanf("%c", &litera);
    }
    while ((litera!='a') && (litera!='A'));



    return 0;
}
