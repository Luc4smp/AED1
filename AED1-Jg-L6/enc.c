#include <stdio.h>
#include <stdlib.h>
#include "enc.h"


typedef struct no {
    Aluno valor;
    struct no *prox;
}No;

typedef struct lista {
    No *inicio;
}Lista;

Lista *criar() {
Lista *l = (Lista*)malloc(sizeof(Lista));l->inicio = NULL;
return l;
}

int listaVazia(Lista *l) {
    if (l == NULL)
        return 2;

    if (l->inicio == NULL)
        return 0;

return 1;
}

int inserirInicio(Lista *l, struct aluno it)
{
    if (l == NULL)
        return 2;

    No *no = (No*)malloc(sizeof(No));no->valor = it;
    no->prox = l->inicio;
    l->inicio = no;

    return 0;
}

int inserirFim(Lista *l, struct aluno it)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return inserirInicio(l,it);

    No *noLista = l->inicio;

    while (noLista->prox != NULL)
        noLista = noLista->prox;

    No *no = (No*)malloc(sizeof(No));
    no->valor = it;
    no->prox = noLista->prox;
    noLista->prox = no;

return 0;
}

int inserirPosicao(Lista *l, struct aluno it, int pos)
{
    if (l == NULL)
        return 2;

    if (pos < 0)
        return 3;

    if ((listaVazia(l) == 0)||(pos ==0))
        return inserirInicio(l,it);
    No *noLista = l->inicio;

    int p = 1;
    while ((noLista->prox != NULL)&&(p!=pos))
    {
        p++;
        noLista = noLista->prox;
    }
    No *no = (No*)malloc(sizeof(No));no->valor = it;
    no->prox = noLista->prox;
    noLista->prox = no;

return 0;
}

int removerInicio(Lista *l)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noLista = l->inicio;
    l->inicio = noLista->prox;
    free(noLista);

return 0;
}

int removerFim(Lista *l)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noAuxiliar = NULL;
    No *noLista = l->inicio;

    while (noLista->prox != NULL)
    {
        noAuxiliar = noLista;
        noLista = noLista->prox;
    }

    if (noAuxiliar == NULL)
        l->inicio=NULL;

    else noAuxiliar->prox = NULL;
        free(noLista);

return 0;
}

int buscarItemChave(Lista *l,int chave,struct aluno*retorno)
{
    if (l == NULL)
        return 2;

    No *noLista = l->inicio;

    while ((noLista != NULL))
    {
        if ((noLista->valor).mat==chave)
        {
            *retorno = noLista->valor;
            return 0;
        }
        noLista = noLista->prox;
    }

return 1;
}

void limpar(Lista *l)
{
    while (listaVazia(l) != 0)
        removerInicio(l);
}

void mostrar(Lista *l)
{
    if (l != NULL)
    {
        printf("[");
        No *noLista = l->inicio;
        while (noLista != NULL)
        {
            printf(" {%d, ",noLista->valor.mat);
            printf("%s, ",noLista->valor.nome);
            printf("%.2f} ",noLista->valor.n1);
            noLista = noLista->prox;
        }
        printf("]\n");
    }
}

int removerPosicao(Lista *l, int pos)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noAuxiliar = NULL;
    No *noLista = l->inicio;

    int i = 1;
    while ((noLista->prox != NULL) && (i != pos))
    {
        noAuxiliar = noLista;
        noLista = noLista->prox;
        i++;
    }

    if (noAuxiliar == NULL)
        l->inicio=NULL;

    else
        noAuxiliar->prox = NULL;

    free(noLista);

    return 0;
}

int removerItem(Lista *l, struct aluno it)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noLista = l->inicio;
    No *noAuxiliar = NULL;

    while ((noLista->prox != NULL) && (it.mat != noLista->valor.mat))
    {
        noAuxiliar = noLista;
        noLista = noLista->prox;
    }

    if (noAuxiliar == NULL)
        l->inicio=NULL;

    else
        noAuxiliar->prox = NULL;

    free(noLista);

    return 0;
}

int buscarPosicao(Lista *l, int pos, struct aluno *retorno)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noLista = l->inicio;

    int i = 1;
    while ((noLista->prox != NULL) && (i != pos))
    {
        noLista = noLista->prox;
        i++;
    }

    *retorno = noLista->valor;
    return 0;
}

int ContemItem(Lista *l, struct aluno it)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noLista = l->inicio;

    while ((noLista->prox != NULL) && (it.mat != noLista->valor.mat))
    {
        noLista = noLista->prox;
    }

    if (it.mat == noLista->valor.mat)
        return 0;

    return 1;
}

Lista *Concatena(Lista *l, Lista *s)
{
    if ((l == NULL) || (s == NULL))
        return NULL;

    if ((listaVazia(l) == 0) || (listaVazia(s) == 0))
        return NULL;

    No *noLista = s->inicio;

    while (noLista->prox != NULL)
    {
    inserirFim(l, noLista->valor);
    noLista = noLista->prox;
    }

    return l;

}

int maiorNota(Lista *l, struct aluno *retorno)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    No *noLista = l->inicio;
    int n= 0;
    while (noLista->prox != NULL)
    {
        noLista = noLista->prox;
        if(n < noLista->valor.n1)
            n = noLista->valor.n1;
    }

    noLista = l->inicio;
    while (noLista->valor.n1 != n)
    {
        noLista = noLista->prox;
    }

    *retorno = noLista->valor;
    return 0;

}

int removerNum(Lista *l, int pos)
{
    if (l == NULL)
        return 2;

    if (listaVazia(l) == 0)
        return 1;

    int j = -1;
    int i;
    for(i=0;i <pos && j<1; i++)
    {
        j = removerInicio(l);
    }

    if (j == 2)
        return 2;

    return 0;
}
