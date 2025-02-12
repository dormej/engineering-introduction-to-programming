/*Zad.2
Funkcja int czyOk2(char haslo[]) sprawdza, czy has³o jest prawid³owe.
Zwraca w wyniku:  1 – tak prawid³owe, 0 – nie
PRAWID£OWE HAS£O SPE£NIA REGU£Y:
znaków <8,10>
pierwszy znak musi byæ wielk¹ liter¹
pozosta³e znaki to cyfry
takie same cyfry nie mog¹ wyst¹piæ obok siebie
*/

#include <iostream>

using namespace std;

int czyOK (string haslo);
int main()
{
    string haslo;
    cout << "Podaj haslo: " << endl;
    cin >> haslo ;
    if(czyOK (haslo)) cout << "OK" << endl;
    else cout << "NIE";

    return 0;
}

int czyOK (string haslo)
{
    int i=0;
        while (haslo[i]!='\0') i++;
    int dlugosc=i;
            if (i<8 || i>10) return 0;
            if (!(haslo[0] >='A' && haslo[0] <= 'Z')) return 0;
        for (i=1;i<dlugosc;i++)
        {
            if(!(haslo[i]>='0' && haslo[i]<='9')) return 0;
        }
        for (i=1;i<dlugosc-1;i++)
        {
            if (haslo[i]==haslo[i+1]) return 0;
        }
        return 1;
}
