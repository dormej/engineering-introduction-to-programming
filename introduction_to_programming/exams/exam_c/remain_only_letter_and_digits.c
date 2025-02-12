//Zad.18
//Program wczytuje napis a nastêpnie usuwa z napisu wszystkie znaki za wyj¹tkiem malych liter i cyfr.
//Dla sprawdzenia wypisuje napis po wykonanych zmianach.
//np: "Now56a.,lr5" -> "ow56lr"

#include <stdio.h>

int main()
{
     char napis[30];
     int i=0, j=0;
     printf("Podaj napis: ");
     gets(napis);

     while (napis[i]!='\0')
     {
         if((napis[i]>='a' && napis[i]<='z') || (napis[i]>='0' && napis[i]<='9'))
         {
             napis[j]=napis[i];
             j++;
         }
         i++;
     }
        napis[j]='\0';
        printf("%s", napis);

    return 0;
}
