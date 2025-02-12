#include <stdio.h>

int main()
{
    char haslo[20]; int i=0, ile=0;
    printf("Podaj haslo: ");
    gets(haslo);
while(haslo[i]!='\0')
{

     if ((haslo[i]>='A') && (haslo[i]<='Z'))ile++;
     if ((haslo[i]>='a') && (haslo[i]<='z'))ile++;
     if ((haslo[i]>='0') && (haslo[i]<='9'))ile++;
     i++;
}
    if (ile==i && i!=0)
        printf("Haslo poprawne");
    else
        printf("Haslo nie poprawne");

    return 0;
}
