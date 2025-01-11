#include <stdio.h>

int somatorio (int x, int y)
{
    int z = 1, i;
    for (i=0; i < y; i++)
    {
        z = z*x;
    }
    return z;
}

int main()
{
    int x = 0;
    int y = 0;

    printf("Digite a base");
    scanf("%d", &x);

    printf("Digite a potencia");
    scanf("%d", &y);
    printf("%d", somatorio(x,y));

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

