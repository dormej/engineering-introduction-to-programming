#include <stdio.h>
#include <math.h>

int main ()
{
    int liczba1=10,liczba2=3,liczba3,max;
    float wynik, test=23.756;
    liczba3=(int)test;
    printf("%i\n", liczba3);
    wynik=(float)liczba1/liczba2;
    printf("wynik= %f\n", wynik);
    max=pow(2,31)-1;
    printf("max int=%i\n", max);
    max+=1;
    printf("max=%i\n", max); //najmniejsza wartosc
    if(0.1+0.2==0.3) // nie prawda, liczby nie sa zapisane dokladnie
        printf("TAK\n");
    else
        printf("Nie\n");
    printf("%.20f\n", 0.1);

    printf("%30.20f\n",0.1+0.1);
    double liczba=0;
    while(liczba!=1)
   {
        liczba+=0.1;
        printf("%30.20f\n",liczba);
        getchar();// pobiera znaki
    }
printf("....   %30.25f   %20.25f\n",25000000.0,25000000.0+0.0000000001);


    return 0;
}
