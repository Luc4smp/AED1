#include <stdlib.h>
#include <stdio.h>

int inverter(int *vetor, int *inverso, int n)
{
    int i;
    int j = n;
    for (i=0; i <n; i++)
    {
        j--;
       *(inverso+j) = *(vetor+i);
    }

    return 1;
}

int main()
{
    int *vetor;
    int *inverso;
    int n,i;

    printf("digite o tamanho do vetor");
    scanf("%d", &n);

    vetor = (int*) malloc(n*sizeof(int));
    inverso = (int*) malloc(n*sizeof(int));

    for (i=0; i < n; i++)
    {
        scanf("%d", vetor+i);
    }

    inverter(vetor, inverso, n);

    for (i=0; i < n; i++)
    {
        printf("[%d]", *(vetor+i));
    }

    printf("\n");

    for (i=0; i < n; i++)
    {
        printf("[%d]", *(inverso+i));
    }

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

