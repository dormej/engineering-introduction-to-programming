//Zad.7
//Program wczytuje napis, a nastêpnie sprawdza, czy napis jest prawid³owy:
//Za³o¿enia:
//Napis musi mieæ  znaków <6,10>
//Prawid³awe znaki w napisie to wy³¹cznie: ma³e litery, wielkie litery lub cyfry.
//Musi wyst¹piæ minimum jedna ma³a litera, minimum jedna wielka i minimum jedna cyfra.

#include <stdio.h>
#include <math.h>
int main()
{
    char napis[20];
    int i,ileZn=0, ileM=0, ileW=0, ileC=0;
        printf("Podaj napis: ");
        gets(napis);
    while (napis[ileZn]!='\0') //dopoki nie osiagniemy konca napisu
         ileZn++; // licze znaki
    if (ileZn<6 || ileZn>10)
    {
        printf("Zla liczba znakow!\n"); return 0;
    }
    i=0; // zerujemy z
   while (napis[i]!='\0')
   {
        if (napis[i]>='a' && napis[i]<='z')ileM++;
        if (napis[i]>='A' && napis[i]<='Z')ileW++;
        if (napis[i]>='0' && napis[i]<='9')ileC++;
        i++; // zwiekszmy i - idziemy do nastepnego znaku w tablicy
   }

    if (ileM+ileW+ileC!=ileZn)
   {
       printf("Zle znaki w napisie."); return 0;
   }
   if (!ileM || !ileW || !ileC) // jesli neguje 5 to jest wartosc logiczna 0,
                                //if (ileM==0 || ileW==0 || ileC==0)
   {
       printf("Musi byc conajmniej 1 ml, 1 wl, 1 c."); return 0;
   }
    printf("OK");

    return 0;

}
