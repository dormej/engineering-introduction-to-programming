#include <stdio.h>

int main()
{
    int liczba1, liczba2, suma, roznica, iloczyn;
    float iloraz;
    char znak;

    printf("Podaj 1 liczbe: ");
    scanf("%i", &liczba1);
    printf("Podaj 2 liczbe: ");
    scanf("%i", &liczba2);
    fflush(stdin);
    printf("Jakie dzialanie mam wykonac: +,-,*,/ ?: ");
    scanf("%c", &znak);
        suma=liczba1+liczba2;
        roznica=liczba1-liczba2;
        iloczyn=liczba1*liczba2;
        iloraz=liczba1/(float)liczba2;

    switch (znak)
    {
    case '+':
     printf("Wynik to %i", liczba1);
     printf("+%i", liczba2);
     printf("=%i", suma);
        break;
    case '-':
      printf("Wynik to %i", liczba1);
      printf("-%i", liczba2);
      printf("=%i", roznica);
        break;
    case '*':
        printf("Wynik to %i", liczba1);
        printf("*%i", liczba2);
        printf("=%i", iloczyn);
        break;
    case '/':
        {
            if(liczba2==0)
                printf("Nie dziel przez 0");
            else
            {
                printf("Wynik = %d", liczba1);
                printf("/%d", liczba2);
                printf("=%f", iloraz);
            }

        break;}
    default:
        printf("Blad");
    }

    return 0;
}
