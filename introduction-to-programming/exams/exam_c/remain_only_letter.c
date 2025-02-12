//Zad.17
//Program wczytuje napis a nastêpnie usuwa z napisu wszystkie cyfry.
//Dla sprawdzenia wypisuje napis po wykonanych zmianach.
//np.: podany napis "Ala ma 2 koty i 3 psy"
//napis po usuniêciu cyfr "Ala ma  koty i  psy"

#include <stdio.h>

int main()
{
    char napis[30];
    int i=0, j=0;
    printf("Podaj napis: ");
    gets(napis);

        while(napis[i]!='\0')
        {
            if(!(napis[i]>='0' && napis[i]<='9'))
            {
                napis[j]=napis[i];
                j++;
            }
            i++;
        }
        napis[j]='\0';
        printf("%s ", napis);
    return 0;
}
