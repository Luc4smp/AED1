#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[] = "Carla Faria";
    double *v;
    int i = 0;
    char f;

    for(i=0; i <= 10; i++)
    {
    printf("%c", *(nome+i));
    }

    v = (double *)malloc(10*sizeof(double));

    printf("\n\n");
    for(i=0; i <= 10; i++)
    {
        *(v+i) = rand() % 10;
        printf("[%.1f]", *(v+i));
    }

    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}


