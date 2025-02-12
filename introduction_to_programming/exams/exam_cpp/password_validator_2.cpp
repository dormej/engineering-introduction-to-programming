/*Zad.1
Funkcja int czyOk1(char haslo[]) sprawdza, czy has�o podane jako argument, jest prawid�owe.
Zwraca w wyniku:  1 � tak prawid�owe, 0 � nie
PRAWID�OWE HAS�O SPE�NIA REGU�Y:
liczba znak�w 8
prawid�owe has�o sk�ada si� wy��cznie z liter i cyfr (inne znaki nie s� niedozwolone)
W ha�le musi wyst�pi� co najmniej jedna wielka litera, jedna ma�a i jedna cyfra
*/

#include <iostream>
using namespace std;

int czyOk (string haslo);

int main()
{
    string haslo;
    cout << "Podaj haslo: "<<endl;
    cin >> haslo;
    if (czyOk (haslo)) cout <<"OK" << endl;
    else cout << "NIE";

    return 0;
}
int czyOk (string haslo)
{
    int i=0;
    while (haslo[i]!='\0')
    {
        i++;
    }
    if (i !=8) return 0;
    int ilem=0,iled=0,ilec=0;
    for (i=0;i<8;i++)
    {
        if (haslo[i]>='a' && haslo[i]<='z') ilem++;
        if (haslo[i]>='A' && haslo[i]<='Z') iled++;
        if (haslo[i]>='0' && haslo[i]<='9') ilec++;
    }
    if (!ilem || !iled || !ilec || ilem+iled+ilec!=8 ) return 0;
    return 1;

}
