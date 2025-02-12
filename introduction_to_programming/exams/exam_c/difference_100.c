//Zad.2
//Program prosi o podanie dwóch liczb ca³kowitych, takich ¿eby ró¿nica tych liczb da³a liczbê 100, prosi tak d³ugo a¿ zostan¹ podane prawid³owe liczby.

#include <stdio.h>

int main()
{
    int liczba1, liczba2;
    do
    {
        printf("Podaj liczbe1:");
        scanf("%i", &liczba1);
        printf("Podaj liczbe2:");
        scanf("%i", &liczba2);
    }while(liczba1-liczba2!=100 && liczba2-liczba1!=100);
        printf("OK");

    return 0;
}

