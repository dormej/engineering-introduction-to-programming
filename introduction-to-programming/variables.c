#include <stdio.h>

int main()
{
    int liczbaI; float liczbaF=12.4; double liczbaD=34.87; char znak='a'; //sta�e znakowe s� zawarte w apostrofach, a napis w cudzys�owie
        printf("Typ int: %i\n", sizeof(int));
        printf("Typ float: %i\n", sizeof(float));
        printf("Typ double: %i\n", sizeof(double));
        printf("Typ char: %i\n", sizeof(char)); //pokazuje rozmiar (w bajtach) poszczeg�lnej zmiennej
        printf("liczbaI=%i, adres zmiennej %p\n",liczbaI,&liczbaI); // pokazuje adres zmiennej
        printf("Podaj liczbe calkowita: ");
        scanf("%i", &liczbaI); // & - bo podajemy pod adres
        printf("liczbaI=%i\n", liczbaI);
        printf("Podaj znak: ");
            fflush (stdin); // czy�ci bufor
        scanf("%c", &znak); // czyta z bufora, dlatego nie czeka. Do bufora idzie liczba I i enter. Musimy szy�ci� bufor
        printf("znak=%c\n", znak);


    return 0;
}
