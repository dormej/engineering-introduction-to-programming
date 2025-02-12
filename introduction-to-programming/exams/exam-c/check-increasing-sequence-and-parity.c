//Zad. 14
//Mamy tablicê tab[10] zawieraj¹ca liczby z <0,100>.
//Uwaga, tablicê wype³nij danymi w dowolny sposób.
//a) Program sprawdza, czy elementy w tablicy tworz¹ ci¹g rosn¹cy.
//b) Program liczy ile jest w tablicy elementów parzystych i ile elementów nieparzystych

#include <stdio.h>

int main()
{
    int tab[]={1,2,3,4,5,0,6,7,8,9};
    int i, rozmiar=10, nieparz=0;
    for(i=0;i<rozmiar;i++)
    {
      printf("%i,", tab[i]);
    }

    for (i=0;i<rozmiar;i++)
    {
        if (tab[i]%2) nieparz++;
    }
        printf("\n%i parzystych i %i nieparzystych", rozmiar-nieparz , nieparz);
    for (i=1;i<rozmiar;i++)
    {
        if (tab[i]<=tab[i-1])
            printf("\n Ciag nie jest rosnacy.");
    }

    return 0;
}
