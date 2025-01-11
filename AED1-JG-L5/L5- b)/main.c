#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

int main()
{
    int n = 0;
    int i;
    int num;
    int conjA[5];
    int conjB[5];

    Con *st = cria();
    for (i=0;i<5;i++)
    {
        printf("digite o numero %d do conjunto A", i);
        scanf("%d", &num);
        conjA[i] = preencheA(num,st,n);
        n++;

    }
        for (i=0;i<5;i++)
    {
        printf("%d", conjA[i]);
    }
    int preencheB(num,st,n);
    printf("Hello world!\n");
    return 0;
}
