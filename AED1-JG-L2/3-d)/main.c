#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *m;
    int t, i;
    char f;

    printf("digite o tamanho do vetor: ");
    scanf("%d", &t);

    m = (int *)malloc(t*sizeof(int));

    for(i=0; i < t; i++)
    {
        m[i] = rand() % 10;

        if (m[i] % 2 == 1)
        {
            i--;
        }

        else
        printf("[%d]", *(m+i));

    }

    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);
    scanf("%c",&f);

    return 0;
}
