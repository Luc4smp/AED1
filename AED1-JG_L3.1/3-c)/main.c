#include <stdio.h>

float taylor (float x, float y)
{
    float z = 1;
    float w = 1;
    float a = 1;
    int i;

    for (i=1; i < (y+1); i++)
    {
        z = z*x;
        w = w*i;
        a = a + (z/w);
    }
    return a;
}

int main()
{
    float x = 0;
    float y = 0;

    printf("Digite o valor de x");
    scanf("%f", &x);

    printf("Digite o valor de n");
    scanf("%f", &y);

    printf("%.2f", taylor(x,y));

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

