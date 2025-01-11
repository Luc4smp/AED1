#include <stdio.h>
#include <stdlib.h>

int *alocador (int n)
{
    int *vetor;
    int i;
    vetor = (int*) malloc(n*sizeof(int));

    for (i=0; i < n; i++)
    {
        scanf("%d", vetor+i);
    }

    return vetor;
}

int main()
{
    int n,i;
    printf("Digite o tamanho do vetor");
    scanf("%d", &n);

    int *v = alocador(n);

    for (i=0; i < n; i++)
    {
        printf("[%d]", *(v+i));
    }

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

