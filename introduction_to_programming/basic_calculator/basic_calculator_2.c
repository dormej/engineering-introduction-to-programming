#include <stdio.h>

int main ()
{
int liczba1,liczba2; char znak;
        printf("Podaj 1 liczbe: ");
        scanf("%d", &liczba1);
        printf("Podaj 2 liczbe: ");
        scanf("%d", &liczba2);
        fflush(stdin);
        printf("Jaka opeacje chcesz wykonac (+,-,*,/, %%): ");
        scanf("%c", &znak);

    switch (znak)
    {
    case '+':
        printf("%d", liczba1+liczba2);
        break;
    case '-':
        printf("%d", liczba1-liczba2);
        break;
    case '*':
        printf("%d", liczba1*liczba2);
        break;
    case '/':
        if (liczba2==0)
        {
        printf("Nigdy nie dziel przez 0");
        }
        else
            printf("%d", liczba1/liczba2);
        break;
    case '%' :
        printf("%d", liczba1%liczba2);
        break;
        default:
        printf("Nieprawid³owy operator");
        break;
    }

return 0;
}
