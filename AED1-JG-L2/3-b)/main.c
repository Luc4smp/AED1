#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *v;
    int i = 0;
    char f;

    v = (int *)malloc(5*sizeof(int));

    for(i=0; i <= 4; i++)
    {
        printf("digite o numero %d", (i+1));
        scanf ("%d", (v+i));
    }

    for(i=0; i <= 4; i++)
    {
        printf("[%d]", *(v+i));
    }

    free(v);

    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);
    scanf("%c",&f);

    return 0;
}

