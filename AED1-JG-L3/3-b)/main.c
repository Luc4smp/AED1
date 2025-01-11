#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

struct alu
{
    char nome[MAX];
    int idade;
};
typedef struct alu Alu;

int main()
{

    Alu *a;
    char x, l;
    char amv[MAX];
    int s, mv = 0;
    char f;

    printf ("deseja registrar um aluno?: (Y/N)\n");
    scanf("%c", &x);
    s++;

    a = (struct alu *)malloc(s*sizeof(struct alu));


    while (toupper(x)!= 'N')
    {
    printf("digite o nome do aluno:\n");
    scanf("%s", (*a).nome);

    printf("digite a idade do aluno:\n");
    scanf("%d", &(*a).idade);

    if ((*a).idade > mv)
    {
        mv = (*a).idade;
        strcpy(amv, (*a).nome);
    }


    printf ("\n\ndeseja registrar um aluno? (Y/N)\n");
    scanf("%c", &l);
    scanf("%c", &x);
    }

    printf ("\nO aluno com maior idade e %s", amv);
    printf ("\nCom %d anos", mv);

    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);


     return 0;

}

