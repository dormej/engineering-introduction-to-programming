//Zad.6
//Program losuje do tablicy tab 10 liczb ca³kowitych z przedzia³u <0,30>
//Wypisuje wylosowane elementy a nastêpnie zamienia w tablicy liczby wg zasady
//liczby >=15 zamienia na 1, liczby <15 zamienia na 0.
//Wypisuje elementy tablicy po zamianie.
  //np.:  przed  3  6  9 15  7  23  4 26  2 29
     //po        0  0  0  1  0   1  0  1  0  1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int tab[10], i;
 srand(time(NULL));
 for(i=0;i<10;i++)
 {
     tab[i]=rand()%31;
     printf("%i ",tab[i]);
 }
 printf("\n");
 for(i=0;i<10;i++)
  {
  if (tab[i]>=15)
  {
    tab[i]=1;
  }
  else
    tab[i]=0;
    printf("%i ", tab[i]);

  }
    return 0;
}
