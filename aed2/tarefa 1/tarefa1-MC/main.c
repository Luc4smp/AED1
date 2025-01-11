#include <stdio.h>
#include <stdlib.h>

int fatorialrecursivo(int n);
int fatorialinterativo(int n);

int main()
{
    int n = 0;
    int r1,r2;
    printf("Digite o valor de n pra n!\n");
    scanf("%d", &n);
    r1 = fatorialrecursivo(n);

    r2 = fatorialinterativo(n);

    printf("valor de r1: %d\n", r1);
    printf("valor de r2: %d\n", r2);


    return 0;
}

int fatorialrecursivo(int n)
{
    int x = 1;
    if (n > 1)
    {
        x = fatorialrecursivo(n-1);
        x = x*(n);
    }


    return x;
}

int fatorialinterativo(int n)
{
    int i;
    int x = 1;

    for(i=0; i < n; i++)
    {
        x = x*(n-i);
    }

    return x;
}

