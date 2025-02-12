/*
Zad.13
Funkcja:  void f1(char napis[]) zamienia wszystkie znaki, kt�re nie s� literami na znak �_�.
Np.: przed zamian� 	 �alo98.wTY8%p�
po zamianie:          �alo___wTY__p�
*/

#include <stdio.h>

void fl(char []);
int main()
{
    char napis[100];
    printf("Podaj napis: ");
    gets(napis);
    fl(napis);
    return 0;
}
void fl(char napis[])
{
    int i=0;
    while(napis[i]!='\0')
    {
        if( !((napis[i]>='A' && napis[i]<='Z') || (napis[i]>='a' && napis[i]<='z'))) napis[i]='_';
    i++;}
    printf("Po: %s", napis);
}
