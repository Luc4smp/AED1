#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

typedef struct no{
    Aluno valor;
    struct no*prox;
    struct no*ant;
}No;

typedef struct lista{
    No*inicio;
}Lista;

Lista *criar()
{
    Lista *l = (Lista*)malloc(sizeof(Lista));
    l->inicio = NULL;
    return l;
}

void limpar(Lista *l)
{
    while(listaVazia(l) != 0)
        removerInicio(l);
    free(l);
    l=NULL;
}
int tamanho(Lista *l)
{
    if(l == NULL)
        return-1;
    No*no = l->inicio;
    int cont = 0;
    while(no != NULL)
    {
        cont++;
        no = no->prox;
    }
    return cont;
}
void mostrar(Lista *l)
{
    if(l != NULL)
    {
        printf("[");
        No*noLista = l->inicio;
        while(noLista!=NULL)
        {
            printf("{%d,",noLista->valor.mat);
            printf("%s,",noLista->valor.nome);
            printf("%.2f}",noLista->valor.n1);
            noLista = noLista->prox;
        }
        printf("]\n");
    }
}
int listaVazia(Lista *l)
{
    if(l == NULL)
        return 2;
    if(l->inicio == NULL)
        return 0;
    else
        return 1;
}
int listaCheia(Lista *l)
{
    return 1;
}

int inserirInicio(Lista *l,Aluno it)
{
    if(l == NULL)
    return 2;
    No*no = (No*)malloc(sizeof(No));
    no->valor = it;
    no->prox = l->inicio;
    no->ant = NULL;
    if(l->inicio != NULL)
        l->inicio->ant = no;
    l->inicio=no;
    return 0;
}

int inserirFim(Lista *l,Aluno it)
{
    if(l == NULL)
        return 2;
    if(listaVazia(l) == 0)
        return inserirInicio(l,it);
    No*noLista = l->inicio;
    while(noLista->prox != NULL)
        noLista = noLista->prox;
    No*no = (No*)malloc(sizeof(No));
    no->valor = it;
    no->prox = NULL;
    no->ant = noLista;
    noLista->prox = no;
    return 0;
}

int removerInicio(Lista *l)
{
    if(l == NULL)
        return 2;
    if(listaVazia(l) == 0)
        return 1;

    No*noLista = l->inicio;

    l->inicio = noLista->prox;

    if(l->inicio != NULL)
        l->inicio->ant = NULL;

    free(noLista);

    return 0;
}

int removerFim(Lista *l)
{
    if(l == NULL)
        return 2;

    if(listaVazia(l) == 0)
        return 1;

    No*noLista = l->inicio;

    while(noLista->prox != NULL)
    {
            noLista = noLista->prox;
    }

    if(noLista->ant == NULL)
        l->inicio = NULL;
    else
        noLista->ant->prox = NULL;

    free (noLista);

    return 0;
}

int cadastrarAluno(Lista *l)
{
    Aluno x;
    char lixo;
    printf("digite o nome do aluno, depois a matricula e depois a nota");
    scanf("%s %c %d %f", x.nome, &lixo, &x.mat, &x.n1);
    inserirFim(l,x);

    return 0;
}

int removerItem(Lista *l, int mat2)
{
    if(l == NULL)
        return 2;
    if(listaVazia(l) == 0)
        return 1;
    No*noLista=l->inicio;

    while(noLista->valor.mat != mat2)
        noLista = noLista->prox;


    if(noLista->ant == NULL)
        removerInicio(l);
    else
        noLista->ant->prox = NULL;
    free (noLista);
    return 0;
}

int maiorNota(Lista *l)
{
    float nota = 0;
    if(l == NULL)
        return 2;
    if(listaVazia(l) == 0)
        return 1;
    No*noLista=l->inicio;

    while(noLista->prox != NULL)
    {
        noLista = noLista->prox;

        if (noLista->valor.n1 > nota)
            nota = noLista->valor.n1;
    }
    while(noLista->prox != NULL && noLista->valor.mat != nota)
        noLista = noLista->prox;

    printf("Aluno com maior nota: \nNome:%s \nNota:%.2f \nMatricula:%d \n", noLista->valor.nome, noLista->valor.n1, noLista->valor.mat);

    return 0;
}
