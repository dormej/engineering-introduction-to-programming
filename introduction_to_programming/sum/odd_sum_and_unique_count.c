#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void losuj(int [], int );
void wypisz (int [],int);
int sumaNiep(int [], int);
void zamiana (int [], int);
int ile(int [], int);
int main()
{
    int rozmiar;
    printf("Podaj rozmiar: ");
    scanf("%i", &rozmiar);
    int tab[rozmiar];
    losuj(tab,rozmiar);
    wypisz(tab,rozmiar);
    printf ("\nsuma: %i\n",sumaNiep(tab,rozmiar));
    zamiana(tab,rozmiar);
    wypisz(tab,rozmiar);
    printf("\n ile: %i", ile(tab,rozmiar));
    return 0;
}
void losuj(int tab[], int rozmiar)
{
    int i;
    srand(time(NULL));
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=rand()%21;
    }
}
void wypisz(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
    {
        printf("%3i ",tab[i]);
    }
}
int sumaNiep(int tab[], int rozmiar)
{
    int i, suma=0;
    for (i=0;i<rozmiar;i++)
    {
        if (tab[i]%2==1) suma=suma+tab[i];
    }
    return suma;
}
void zamiana(int tab[], int rozmiar)
{
    int i;
    for(i=0;i<rozmiar;i++)
    {
        tab[i]=tab[i]*2;
    }
}
int ile(int tab[], int rozmiar)
{
    int czy_wystapilo[41] = {0};
    int ile = 0;
    int i;
    for (i=0;i<rozmiar;i++)
    {
        if(czy_wystapilo[tab[i]] == 0)
        {
            czy_wystapilo[tab[i]] = 1;
            ile++;
        }
    }
    return ile;

}
