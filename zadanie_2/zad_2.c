//
//  zad_2.c
//  
//
//  Created by Student on 11.10.2017.
//
//

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float delta, x1, x2;
    printf("Podaj parametr a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = (b*b)-(4*a*c);
    
    if(delta > 0)
    {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("Rozwiazanie: %f oraz %f\n", x1, x2);
    }
    else if(delta == 0)
    {
        x1 = -b/(2*a);
        printf("Rozwiazanie: %f\n", x1);
    }
    else printf("Dla podanych parametrow nie istnieje rozwiazanie\n");
    
    return 0;
}
