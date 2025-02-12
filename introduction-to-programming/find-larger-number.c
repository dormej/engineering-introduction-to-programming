#include <stdio.h>
int main()
{
    int liczba1, liczba2;
    printf("PROGRAM WSKARZE WIEKSZA LICZBE\n");
    printf("Podaj 1 liczbe: ");
    scanf("%i", &liczba1);
    printf("Podaj 2 liczbe: ");
    scanf("%i", &liczba2);
    if(liczba1>liczba2)
         printf("Liczba 1 jest wieksza od liczby 2");
    if(liczba1<liczba2)
        printf("Liczba 2 jest wieksza od liczby 1");
    if(liczba1==liczba2)
        printf("Liczba 1 i liczba 2 sa jednakowe");

return 0;
}
