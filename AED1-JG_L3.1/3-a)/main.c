#include <stdio.h>

int somatorio (int n)
{
    int x = 0, i;
    for (i=0; i <= n; i++)
    {
        x = x+i;
    }
    return x;
}

int main()
{
    int n = 0;

    printf("Digite o numero de termos");
    scanf("%d", &n);
    printf("%d", somatorio(n));

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

