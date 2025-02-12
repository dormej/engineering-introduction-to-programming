/*
Zad. 16

Funkcja void usun(char napis[])usuwa w napisie powtarzaj�ce si� spacje.
przed "Ala     ma   kota" po: "Ala ma kota"
Uwaga! napis ulega zmianie!
*/
#include <stdio.h>

void usun(char []);
int main()
{
    char napis[300];
    printf("Podaj napis: ");
    gets(napis);
    usun(napis);
    printf("Po: %s", napis);
    return 0;
}
void usun(char napis[])
{
    int i=0, ile_spacji=0, j=0;
    while(napis[i]!='\0')
    {
        if(napis[i]==' ') ile_spacji++;
        else ile_spacji=0;
        if(ile_spacji<=1)
        {
            napis[j]=napis[i];
            j++;
        }i++;
    }
    napis[j]='\0';
}
