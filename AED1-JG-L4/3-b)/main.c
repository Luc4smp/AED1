#include <stdlib.h>
#include <stdio.h>

int media (char *vetor, int n, char c)
{
    int i;
    int j = 0;
    for (i=0; i < n; i++)
    {
        if (c == *(vetor+i))
        {
            *(vetor+i) = '*';
            j++;
        }
    }

    return j;
}

int main()
{
    char *vetor;
    int n;
    char c;
    int v;
    char l;

    printf("digite o tamanho do vetor:");
    scanf("%d", &n);

    vetor = (char*) malloc((n+1)*sizeof(char));

    printf("\ndigite o texto: ");
    scanf("%s", vetor);

    scanf("%c", &l); //lixo

    printf("digite o caractere especial: ");
    scanf("%c", &c);

    v = media(vetor, n, c);
    printf("%d", v);

    printf("\n%s", vetor);

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}

