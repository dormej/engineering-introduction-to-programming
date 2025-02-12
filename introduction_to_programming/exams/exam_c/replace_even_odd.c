/* Zad 5.
Funkcja  void zamiana2(int tab[],int rozmiar) zamienia elementy w tablicy wg zasady:
Parzyste na 0
Nieparzyste na 1
Przed zamiana:  3 24 7 4 9 10 8
Po zamianie:    1  0 1 0 1  0 0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zamiana2(int [],int);

int main()
{
    int rozmiar;
    printf("podaj rozmiar tablicy: ");
    scanf("%i", &rozmiar);
    int tab[rozmiar];
    int i = 0;
    printf("przed zmiana: ");
    for(i = 0; i < rozmiar; i++)
    {
        tab[i] = rand()%100;
        printf("%i ", tab[i]);
    }
    zamiana2(tab, rozmiar);
    printf("\npo zmianie: ");
    for(i = 0; i < rozmiar; i++) printf("%i ", tab[i]);
    printf("\n");
    return 0;
}

void zamiana2(int tab[],int rozmiar)
{
    int i;
    for(i = 0; i < rozmiar; i++)
    {
        if( tab[i] % 2 == 0 ) tab[i] = 0;
        else tab[i] = 1;
    }
}
