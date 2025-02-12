#include <stdio.h>
int main()

{

    int first, second, add, subtract, multiply;
    float divide;
    char sign;
    printf("Podaj liczbe calkowita 1: ");
    scanf("%i",&first);
    printf("Podaj liczbe calkowita 2: ");
    scanf("%i",&second);
    printf("podaj jaka operacje chcesz wykonac: + - * / %%  ");
    fflush(stdin);
    scanf("%c",&sign);

    add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;

    switch (sign)
     {
    case '+':
        printf("Sum = %d\n", add);
        break;
    case '-':
        printf("Difference = %d\n", subtract);
        break;
    case '*':
        printf("Multiplication = %d\n", multiply);
        break;
    case '/':
        printf("Division = %.2f\n", divide);
        break;
    case '%':
        printf("Remainder = %i %% %i = %i\n",first,second,first%second);
        break;
    default:
        printf("Podales zly operator\n");
        break;
    }
    return 0;

}
