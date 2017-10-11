//
//  zad_7.c
//  
//
//  Created by Student on 11.10.2017.
//
//

#include <stdio.h>

int main()
{
    int a, i;
    printf("Podaj liczbe: ");
    scanf("%d", &a);
    for(i = 1; i <= a; i++)
    {
        if(a%i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
