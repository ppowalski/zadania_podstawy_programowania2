#include <stdio.h>

int czy_pierwsza(int);

int main()
{
    int i=2;
    for(;; i++)
    {
        if(czy_pierwsza(i) != 0) printf("%d ", i);

        //stop
        //if(i == 999999) break;
    }
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