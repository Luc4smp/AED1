#include <stdio.h>

int divisao (int x, int y, int *r, int *q)
{
    *q = x/y;
    *r = x % y;

    if (x >= y)
    {
        return 0;

    }
    else
    {
        return -1;
    }
}

int main()
{
    int x = 0;
    int y = 0;
    int r, q;

    printf("Digite o valor de x");
    scanf("%d", &x);

    printf("Digite o valor de y");
    scanf("%d", &y);
    int n = divisao(x,y, &r, &q);

    if (n == 0)
    {
    printf("Quociente: %d", q);
    printf("Resto: %d", r);
    }

    else
    {
        printf("Erro");
    }

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}
