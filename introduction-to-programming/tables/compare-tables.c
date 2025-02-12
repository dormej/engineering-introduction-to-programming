//Zad.12
//Masz dwie tablice: tab1 i tab2.
//Obie tablice s¹ tego samego rozmiaru.
//Elementy tablicy to liczby losowe z <0,10>
//1. Program wypisuje liczby, które wyst¹pi³y w tablicy tab1, a nie wyst¹pi³y w tablicy tab2  (bez powtórzeñ).
//2.Program sprawdza czy tablica tab1 zawiera wszystkie elementy tablicy tab2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = 20, i;
    int tab1[n];
    int tab2[n];
    int tab1_liczby[11] = {0};
    int tab2_liczby[11] = {0};
    for(i = 0; i < n; i++)
    {
        tab1[i] = rand()%11;
        tab2[i] = rand()%11;
        printf("tab1[%i] = %i    tab2[%i] = %i\n",i,tab1[i],i,tab2[i]);
        tab1_liczby[tab1[i]]++;
        tab2_liczby[tab2[i]]++;
    }

    printf("\n");
    printf("liczby, ktore wystpapily w tab1, a nie wystapily w tab2: ");
    int ile_liczb = 0;
    for(i = 0; i < 11; i++)
    {
        if( tab1_liczby[i] > 0 && tab2_liczby[i] == 0)
        {
            printf("%i ",i);
            ile_liczb++;
        }
    }
    if(ile_liczb == 0)
    {
        printf("brak");
    }
    printf("\n");
    for(i = 0; i < 11; i++)
    {
        if (tab1_liczby[i] != tab2_liczby[i] && tab2_liczby[i] > 0)
        {
            printf("tab1 NIE zawiera wszystkie elementy tab2\n");
            return 0;
        }
    }
    printf("tab1ica1 zawiera wszystkie elementy tab2\n");
    return 0;
}
