//Integrante: Lucas Marques Pinho Tiago

#include <stdio.h>
#include <stdlib.h>

int potencia(int n);

int main()
{
    int n = 0;
    int r = 0;
    printf("Digite o valor de n pra 2^n!\n");
    scanf("%d", &n);
    r = potencia(n);
    printf("valor de r: %d", r);

    return 0;
}

int potencia(int n)
{
    int x = 1;
    if (n > 0)
    {
        x = potencia(n-1);
        x = x*2;
    }


    return x;
}
