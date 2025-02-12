#include <stdio.h>

int czyPin(char []);
int main()
{
    char pin[10];
    printf("Podaj pin: ");
    gets(pin);
    if( czyPin(pin)) printf("haslo prawidlowe\n");
    else printf("haslo NIE jest prawidlowe");
    return 0;
}
int czyPin(char pin[])
{
    int i=0;
    while(pin[i]!='\0')
    {
        i++;
    }
    if(i!=4) return 0;
    for (i=0;i<4;i++)
        if(!(pin[i]>='0' && pin[i]<='9')) return 0;
    for (i=0;i<3;i++)
        if(pin[i]==pin[i+1]) return 0;
    return 1;
}
