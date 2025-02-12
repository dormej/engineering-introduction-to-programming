#include <stdio.h>
#include <math.h>
int main()
{
    int liczba1, liczba2;
    char znak;
    printf("Podaj 1 liczbe: ");
    scanf("%i", &liczba1);
    printf("Podaj 2 liczbe: ");
    scanf("%i", &liczba2);
    fflush(stdin);
    printf("Jakie dzialanie ma byc wykonane: +,-,*,/? : ");
    scanf("%c", &znak);

    switch (znak)
    {
    case '+':
        printf("Wynik to %d", liczba1); printf("+%d", liczba2); printf("=%d", liczba1+liczba2);
        break;
    case '-':
        printf("Wynik to %d", liczba1); printf("-%d", liczba2); printf("=%d", liczba1-liczba2);
        break;
    case '*':
        printf("Wynik to %d", liczba1); printf("*%d", liczba2); printf("=%d", liczba1*liczba2);
        break;
    case '/':

        if  (liczba2!=0)
        {

           printf("Wynik to %d", liczba1); printf("/%d", liczba2); printf("=%d", liczba1/liczba2);
        }
        else
            printf("SERIO!?");

       break;
    default:
        printf("Blad");

    }

    return 0;
}


