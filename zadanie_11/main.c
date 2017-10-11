#include <stdio.h>

int nwd(int, int);

int main()
{
    int a, b;
    printf("Podawaj wartosc a i b dla ktorych chesz obliczyc nwd: ");
    scanf("%d %d", &a, &b);
    printf("NWD wynosi: %d\n", nwd(a, b));
}

int nwd(int a, int b)
{
    int i;
    if(a>b)
    {
        for(i = a; i >= 1; i--)
        {
            if((a%i == 0) && (b%i == 0)) return i;
        }
    }
    else if(a == b) return a;
    else
    {
        for(i = b; i >= 1; i--)
        {
            if((a%i == 0) && (b%i == 0)) return i;
        }
    }
}