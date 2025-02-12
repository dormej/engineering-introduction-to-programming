#include <stdio.h>
#include <stdlib.h>

//nazwy funkcji takie jak nazwy programów

int czyOk1(char[]);
int czyOk2(char[]);
int dzielniki(int);
void ostatnie(char[], int);
void zamiana2(int[], int);
int ileCyfr(char []);
int zamiana(char []);
int suma(int[], int, int);
int sumaMaxMin(int[], int);
int minParzysta(int[], int);
void zamiana_11(char[], char, char);
int f1(char[]);
void f1_13(char[]);
int zakres(int[], int);
void usun(char[]);

int main() 
{	
	char napis[32];

	//zadanie usun
	printf("\nPodaj napis(usun): ");
	gets(napis);
	usun(napis);
	printf("\nNapis po zamianie: %s", napis);	
	
	
 	//zadanie zakres
	int tab5[7]={3, 5, 8, 1, 9, 2, 7};
	printf("\nZadanie zakres: %i", zakres(tab5, 7));	
	
	//zadanie f1
	printf("\nPodaj napis(f1_13): ");
	gets(napis);
	f1_13(napis);
	printf("\nNapis po zamianie(f1_13): %s", napis);	
	
	//zadanie f1
	printf("\nPodaj napis(f1): ");
	gets(napis);
	printf("Napis sklada sie z %i roznych znakow", f1(napis));	
	
	//zadanie zamiana_11
	printf("\nPodaj napis(zamiana_11): ");
	gets(napis);
	zamiana_11(napis, 'a', 'A');
	printf("\nNapis po zamianie: %s", napis);
	
 	//zadanie minParzysta
	int tab4[7]={3, 5, 8, 1, 9, 2, 7};
	printf("\nZadanie minParzysta: %i", minParzysta(tab4, 7));
		
 	//zadanie sumaMaxMin
	int tab3[7]={3, 5, 8, 1, 9, 2, 7};
	printf("\nZadanie sumaMaxMin: %i", sumaMaxMin(tab3, 7));	
	
		
 	//zadanie suma
	int tab2[5]={1,2,3,4,5};
	printf("\nZadanie suma: %i", suma(tab2, 5, 2));	
	
	//do zadania ostatnie
	printf("\nPodaj napis(ostatnie): ");
	gets(napis);
	ostatnie(napis, 3);
	printf("Napis po ucieciu: %s", napis);
	
	
	//do zadania zamiana2
	int tab[5]={1,2,3,4,5};
	printf("\nZadanie zamiana2: ");
 	zamiana2(tab,5);
 	
 	
 	//do zadania ileCyfr

	printf("\nPodaj napis(ileCyfr): ");
	gets(napis);
	printf("Ten napis ma %i cyfr\n", ileCyfr(napis));
	
	
	//do zadania zamiana
	printf("\nPodaj napis(zamiana): ");
	gets(napis);
	zamiana(napis);		
	printf("napis po zamianie: %s\n", napis);
	
	//do zadania dzielniki
	printf("\n%i", dzielniki(18));
	
	
	printf("\npodaj has³o(czyOk): ");
	gets(napis);
	printf("wynik has³a: %i (czyOk1)\n", czyOk1(napis));
	printf("wynik has³a: %i (czyOk2)\n", czyOk2(napis));
	return 0;

}
int czyOk1(char haslo[]) 
{
	int i=0;
	int jest_mala=0;
	int jest_duza=0;
	int jest_cyfra=0;
	while(haslo[i]!='\0')
	{
		if(!((haslo[i]>='a' && haslo[i]<='z') || (haslo[i]>='A' && haslo[i]<='Z') || (haslo[i]>='0' && haslo[i]<='9') ))
			return 0;
		if(haslo[i]>='a' && haslo[i]<='z') 
			jest_mala=1;
		if(haslo[i]>='A' && haslo[i]<='Z') 
			jest_duza=1;
		if(haslo[i]>='0' && haslo[i]<='9') 
			jest_cyfra=1;
		i++;
	}
	if(i!=8)
		return 0;
	if(jest_mala==0)
		return 0;
	if(jest_duza==0)
		return 0;
	if(jest_cyfra==0)
		return 0;
		
	return 1;
		
}
int czyOk2(char haslo[]) 
{
	
	int i=0;
	int j=0;
	while(haslo[i]!='\0')
	{
		if(i!=0 && !(haslo[i]>='0' && haslo[i]<='9'))
			return 0;
		
		i++;
	
	}
		if (!(i>=8 && i<=10))
			return 0;
		if(!(haslo[0]>='A' &&  haslo[0]<='Z'))
			return 0;
			
	for (j=1;j<i;j++)
	{
		if(haslo[j]==haslo[j-1])
			return 0;
		
	}
	return 1 ;
}
int dzielniki(int liczba)
{
	int i=0;
	int ile=0;
	for(i=1;i<=liczba;i++)
	{
		if(liczba % i==0)
		ile++;
	}
	return ile;

}

void ostatnie(char napis[], int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(napis[i] != '\0')
	{
		i++;
	}
	int ile_znakow = i - n;
	for(k=0; k<=i; k++)
	{
		if(k >= ile_znakow)
		{
			napis[j] = napis[k];
			j++;
		}
	}
	napis[j] = '\0';
}
void zamiana2(int tab[], int roz)
{
	int i=0;
	for(i=0;i<roz;i++)
	{
		if( tab[i] % 2==0 )
			tab[i]=0;
		else 
			tab[i]=1;
			
		printf("%3i",tab[i]);
	}
	
}

int ileCyfr(char napis[]) 
{
	int i = 0;
	int ile = 0;
	while(napis[i] != '\0')
	{
		if(napis[i] >= '0' && napis[i] <= '9' )
		{
			ile++;
		}
		i++;
	}
	
	return ile;
}

int zamiana(char napis[]) 
{
	int i = 0;
	int ile = 0;
	while(napis[i] != '\0')
	{
		if(napis[i] == ' ')
		{
			napis[i] = '_';
			ile++;
		}
		i++;
	}
	
	return ile;
}

int suma(int tab[], int rozmiar, int liczba) 
{
	int i;
	int suma = 0;
	for(i = 0; i<rozmiar; i++)
	{
		if(tab[i] > liczba)
		{
			suma += tab[i];
		}
	}
	return suma;
}

int sumaMaxMin(int tab[], int rozmiar)
{
	int i;
	int max = tab[0];
	int min = tab[0];
	for(i = 1; i<rozmiar; i++)
	{
		if(tab[i] < min)
			min = tab[i];
		if(tab[i] > max)
			max = tab[i];
	}
	return max+min;
}

int minParzysta(int tab[], int rozmiar)
{
	int i;
	int min = -1;
	for(i = 0; i<rozmiar; i++)
	{
		if(min == -1)
		{
			if(tab[i] % 2 == 0)
			{
				min = tab[i];				
			}
		}
		else
		{

			if(tab[i] % 2 == 0 && tab[i] < min)
				min = tab[i];			
		}

	}
	return min;	
}

void zamiana_11(char napis[], char znak1, char znak2)
{
	int i = 0;
	while(napis[i] != '\0')
	{
		if(napis[i] == znak1)
		{
			napis[i] = znak2;
		}
		i++;
	}
}

int f1(char napis[]) 
{
	int ile = 0;
	int i = 0;
	int tab[1024] = {0};
	while(napis[i] != '\0')
	{
		if(tab[napis[i]] == 0)
			ile++;
		
		tab[napis[i]] = 1;
		
		i++;
	}
	return ile;
}

void f1_13(char napis[])
{
	int i = 0;
	while(napis[i] != '\0')
	{
		if(!((napis[i] >= 'a' && napis[i] <= 'z') || (napis[i] >= 'A' && napis[i] <= 'Z')))
		{
			napis[i] = '_';
		}
		i++;
	}
}

int zakres(int tab[], int rozmiar) 
{
	int i;
	int max = tab[0];
	int min = tab[0];
	for(i = 1; i<rozmiar; i++)
	{
		if(tab[i] < min)
			min = tab[i];
		if(tab[i] > max)
			max = tab[i];
	}
	return max-min;	
}

void usun(char napis[])
{
	int i = 0;
	int j = 0;
	while(napis[i] != '\0')
	{
		if(i != 0)
		{
			if(!(napis[i] == ' ' && napis[i-1] == ' '))
			{
				napis[j] = napis[i];
				j++;
			}
		}
		else
		{
			napis[j] = napis[i];
			j++;
		}
		i++;
	}
	napis[j] = '\0';
}
