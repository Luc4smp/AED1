#include <stdlib.h>
#include <stdio.h>

int media (int *vetor,int n, int *me)
{
    int i;
    *me =0;
    for (i=0; i < n; i++)
    {
        *me = *me + *(vetor+i);
    }
    *me = *me/n;

    return 1;
}

int maior(int *vetor, int n, int *ma )
{
    int i;
    *ma = 0;
    for (i=0; i < n; i++)
    {
        if(*ma < *(vetor+i))
        {
            *ma = *(vetor+i);
        }
    }
    return 2;

}

int main()
{
    int *vetor;
    int n,i;
    int ma,me;

    printf("digite o tamanho do vetor");
    scanf("%d", &n);

    vetor = (int*) malloc(n*sizeof(int));

    for (i=0; i < n; i++)
    {
        scanf("%d", vetor+i);
    }

    media(vetor, n, &me);
    maior(vetor, n, &ma);

    printf("Media:%d\n", me);
    printf("Maior n: %d", ma);

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}


