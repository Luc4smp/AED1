#include <stdlib.h>
#include <stdio.h>

int multiplica (int *vetor,int n, int m)
{
    int i;
    for (i=0; i < n; i++)
    {
        *(vetor+i) = (*(vetor+i))*m;
    }

    return 1;
}

int main()
{
    int *vetor;
    int n,i;
    int m;

    printf("digite o tamanho do vetor");
    scanf("%d", &n);

    vetor = (int*) malloc(n*sizeof(int));

    for (i=0; i < n; i++)
    {
        scanf("%d", vetor+i);
    }

    printf("digite o multiplicador");
    scanf("%d", &m);

    for (i=0; i < n; i++)
    {
        printf("[%d]", *(vetor+i));
    }

    multiplica (vetor, n, m);

    printf("\n");

    for (i=0; i < n; i++)
    {
        printf("[%d]", *(vetor+i));
    }

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}
