#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    int *m;
    int t, i;
    char x,l;
    int j = 0;

    printf ("deseja criar um vetor? (Y/N)\n");
    scanf("%c", &x);

    while (toupper(x)!= 'N')
    {
    printf("\ndigite o tamanho do vetor\n");
    scanf("%d", &t);

    m = (int *)malloc(t*sizeof(int));

    for(i=0; i < t; i++)
    {
        printf("\ndigite um valor\n");
        scanf("%d", (m+i));

        if (m[i] == m[i-1])
        {
            i--;
            t--;
        }

        else
            j++;
    }

    for(i=0; i < j; i++)
    {
        printf("[%d]", (*(m+i)));
    }

    printf ("\n\ndeseja criar um vetor? (Y/N)\n");
    scanf("%c", &l);
    scanf("%c", &x);
    j=0;
    }


    return 0;
}


