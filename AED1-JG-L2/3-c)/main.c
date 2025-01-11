#include <stdlib.h>
#include <stdio.h>

int main()
{
    int **m;
    int **n;
    int **s;
    int i,j = 0;

    m = (int **)malloc(3*sizeof(int));
    n = (int **)malloc(3*sizeof(int));
    s = (int **)malloc(3*sizeof(int));

    for(i=0; i < 3; i++)
    {
        m[i] = (int *)malloc(3*sizeof(int));
        n[i] = (int *)malloc(3*sizeof(int));
        s[i] = (int *)malloc(3*sizeof(int));
    }

    printf ("matriz 1\n");
    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            m[i][j] = rand() % 10;
            printf("[%d]", (m[i][j]));
        }
        printf ("\n");
    }

    printf ("matriz 2\n");
    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            n[i][j] = rand() % 10;
            printf("[%d]", (n[i][j]));
        }
        printf ("\n");
    }

    printf ("Soma das matrizes\n");
    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3; j++)
        {
            s[i][j] = m[i][j] + n[i][j];
            printf("[%d]", (s[i][j]));
        }
        printf ("\n");
    }

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}
