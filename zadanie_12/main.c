#include <stdio.h>

int czy_pierwsza(int);
int suma_dzielnikow(int);
int podzielnosc(int);

int main()
{
    int i, n, suma = 0;
    printf("Podaj wartosc zmiennej n: ");
    scanf("%d", &n);
    if(n>3)
;   {
        for(i = 1; i < n; i++)
        {
            if(czy_pierwsza(i) == 0)
            {
                if(podzielnosc(i) != 1) 
                {
                    printf("%d\n", i);
                }
            }
        }
    }
    return 0;
}

int czy_pierwsza(int liczba)
{
    int i;
    for(i = 2; i < liczba; i++)
    {
        if(liczba%i == 0) 
        return 0;
    }
}

int suma_dzielnikow(int liczba)
{
    int suma=0, i;
    for(i = 1; i <= liczba; i++)
    {
        if(liczba%i == 0) suma += i;
    }
    return suma;
}

int podzielnosc(int liczba)
{
    int i;
    int suma = suma_dzielnikow(liczba);
    for(i = 2; i < liczba; i++)
    {
        if(suma%i == 0) return 1;
    }
}