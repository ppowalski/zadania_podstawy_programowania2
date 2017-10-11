//
//  zad_5.c
//  
//
//  Created by Student on 11.10.2017.
//
//

#include <stdio.h>

int main()
{
    int a;
    float b, c, wynik;
    printf("--- Menu ---\n0.Dodawanie\n1.Odejmowanie\n2.Dzielenie\n3.Mnozenie\nWybierz opcje:");
    
    scanf("%d", &a);
    
    printf("Wprowadz liczby do wykonania dzialania: ");
    scanf("%f %f", &b, &c);
    
    switch(a)
    {
        case 0:
        {
            wynik = b+c;
            printf("Wynik: %f\n", wynik);
            break;
        }
        case 1:
        {
            wynik = b-c;
            printf("Wynik: %f\n", wynik);
            break;
        }
        case 2:
        {
            wynik = b/c;
            printf("Wynik: %f\n", wynik);
            break;
        }
        case 3:
        {
            wynik = b*c;
            printf("Wynik: %f\n", wynik);
            break;
        }
        default: printf("Error");
    }
    return 0;
}
