//Zad.16
//Program wczytuje napis.
//Zamienia w napisie wszystkie znaki, które nie s¹ literami na znak ‘_’.
//Np.: przed zamian¹ 	 „alo98.wTY8%p”
//po zamianie:            	 „alo___wTY__p”

#include <stdio.h>

int main()
{
    char napis[30];
    int i=0;
    printf("Podaj napis: ");
    gets(napis);
    while (napis[i]!='\0')
    {
        if(!((napis[i]>='a' && napis[i]<='z') || (napis[i]>='A' && napis[i]<='Z')))
        {
             napis[i]='_';
        }
        i++;
    }printf("%s ", napis); // s - wypsuje napis, c- wypisuje znak
    return 0;

}

