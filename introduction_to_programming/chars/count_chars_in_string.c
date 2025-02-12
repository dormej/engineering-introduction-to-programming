#include <stdio.h>
//program wczytuje imie np. alicja, wypisuje w pionie,
//liczy ile ma znakow
int main ()

{
    char imie[20];// tablica znakow
    char osoba[30];
    int i=0;
    printf("Podaj imie: ");
    scanf("%s", &imie); // %s wczytuje napis ,
                           //nazwa tablicy jest pierwszym elementem tablicy,
                           //reszta przypisuje po kolei program - ,imie);
    while (imie[i]!='\0')
    {
        printf("%c\n", imie[i]);
        i++;
    }
        printf("Liczba znakow: %i\n", i);

    printf("Podaj imie i nazwisko: ");
    fflush(stdin);
    gets(osoba);            //scanf("%s", &osoba);   scanf: wczytuje do pierwszego pustego znaku: spacja, tabulator)

    printf("%s\n", osoba);
    return 0;
}
