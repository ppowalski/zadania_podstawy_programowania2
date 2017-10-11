//
//  zad_8.c
//  
//
//  Created by Student on 11.10.2017.
//
//

#include <stdio.h>

int main()
{
    float a, b;
    
    printf("Podaj a i b: ");
    scanf("%f %f", &a, &b);
    
    if(a>0 && b>0)
    {
        printf("Cwiartka 1, 2 ,3\n");
    }
    else if(a>0 && b<0)
    {
        printf("Cwiartka 1, 3, 4\n");
    }
    else if(a<0 && b>0)
    {
        printf("Cwiartka 1, 2, 4\n");
    }
    else if(a<0 && b<0)
    {
        printf("Cwiartka 2, 3, 4\n");
    }
    else if(a==0 && b>0)
    {
        printf("Cwiartka 1, 2\n");
    }
    else if(a==0 && b<0)
    {
        printf("Cwiartka 3, 4\n");
    }
    else if(b==0 && a>0)
    {
        printf("Cwiartka 1, 3\n");
    }
    else if(b==0 && a<0)
    {
        printf("Cwiartka 2, 4\n");
    }
    
    
    return 0;
}
