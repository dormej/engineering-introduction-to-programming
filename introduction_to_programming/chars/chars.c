#include <stdio.h>
 // Wypisac wszystkie male litery alfabetu
 //lacinskiego i ich kodu ASCII

 int main()
 {
     char znak;
     for(znak='a';znak<='z';znak++)
        printf("%c %i\n", znak, znak);



  return 0;
 }
