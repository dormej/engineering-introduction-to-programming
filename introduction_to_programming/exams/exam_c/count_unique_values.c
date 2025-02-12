//Zad.15
//Program wczytuje napis i liczy z ilu r�nych znak�w sk�ada si� podany napis
//np: �Ala ma kota�  ma 8 r�znych znak�w   Ala Mkot

#include <stdio.h>

int main()
{
    char napis[200];
    printf("podaj napis: ");
    fflush(stdin);
    gets(napis);
    int i = 0;
    int znaki[256] = {0};
    do
    {
        znaki[napis[i]]++;
        i++;
    } while( napis[i] != '\0' );
    int ile_roznych_znakow = 0;
    for(i = 0; i < 256; i++)
    {
        if( znaki[i] > 0) ile_roznych_znakow++;
    }
    printf("napis %s sklada sie z %i roznych znakow\n",napis,ile_roznych_znakow);
    return 0;
}
