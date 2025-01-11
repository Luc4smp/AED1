#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m;
    int *v;
    int i, j, k;
    int x, y;
    int a = 0;
    int l = 0;
    char f;

    printf("Digite o vetor 1 da matriz:\n");
    scanf("%d", &x);

    printf("\nDigite o vetor 2 da matriz:\n");
    scanf("%d", &y);

    m = (int **)malloc(x*sizeof(int));
    v = (int *)malloc(((x*y)+1)*sizeof(int));

    for(i=0; i < y; i++)
    {
        m[i] = (int *)malloc(y*sizeof(int));
    }

    printf ("matriz 1\n");

    for(i=0; i < x; i++)
    {
        for(j=0; j < y; j++)
        {
            printf("digite o valor [%d][%d]\n", (i+1),(j+1));
            scanf("%d", (*(m+i)+j));
            v[a] = m[i][j];

            for (k=1; a >= k; k++)
            {
                l = a - k;

                if (v[a] == v[l])
                {
                    a--;
                    break;
                }
            }
            a++;
        }
    }

    for(i=0; i < x; i++)
    {
        for(j=0; j < y; j++)
        {
            printf("[%d]", (m[i][j]));
        }
        printf ("\n");
    }

    printf ("\n");
    for(i=0; i < (a); i++)
    {
        printf("[%d]", *(v+i));
    }

    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}
