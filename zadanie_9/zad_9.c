#include <stdio.h>

int main()
{
    unsigned int a1, a2, b1, b2;
    int n, i, j;

    printf("Podaj a1, a2, b1, b2, n: ");
    scanf("%d %d %d %d %d", &a1, &a2, &b1, &b2, &n);

    int liczby[n];

    if(n>a1 && n>a2 && n>b1 && n>b2)
    {
        for(i = 0; i <= n ; i++)
        {
            liczby[i] = 0; 
        }
    
        for(i = a1; i <= a2; i++)
        {
            printf("%d ", i);
            liczby[i] = i;
        }
    
        for(i = b1; i <= b2; i++)
        {
            if(liczby[i] == 0) printf("%d ", i);
        }
    }
    return 0;
}
