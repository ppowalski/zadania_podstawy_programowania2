//
//  zad_6.c
//  
//
//  Created by Student on 11.10.2017.
//
//

#include <stdio.h>

int main()
{
    int i, j;
    for(i = 0; i<=9; ++i)
    {
        for(j = 1; j<=9; ++j)
        {
            printf("%d  ",j*i);
        }
        printf("\n");
    }
    return 0;
}
