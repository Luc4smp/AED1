#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct lista
{
    int total;
    struct aluno *valores;

}Lista;

Lista *criar()
{
    Lista *l=(Lista*)malloc(sizeof(Lista));
    l->valores = (struct aluno*)malloc(1*sizeof(struct aluno));
    if(l!=NULL)
        l->total=0;
    return l;
}

void modificatamanho(Lista *l)
{
    l->valores = (struct aluno*)realloc(l->valores, l->total*sizeof(struct aluno));
}

void limpar(Lista *l)
{
    if(l!=NULL)l->total=0;
}

int inserirInicio(Lista *l,struct aluno it)
{
    int i;
    if(l==NULL)
        return 2;
    if(listaCheia(l)==0)
        return 1;
    for(i=l->total;i>0;i--)
    {
            l->valores[i]=l->valores[i-1];
    }
    l->valores[0]=it;
    l->total++;
    modificatamanho(l);

    return 0;
}

int inserirFim(Lista *l,struct aluno it)
{
    if(l==NULL)
        return 2;
    if(listaCheia(l)==0)
        return 1;
    l->valores[l->total]=it;
    l->total++;
    modificatamanho(l);

    return 0;
}

int buscarItemChave(Lista *l,int chave,struct aluno *retorno)
{
    int i;
    if(l==NULL)
        return 2;
    if(listaVazia(l)==0)
        return 1;
    for(i=0;i<l->total;i++)
    {
        if(l->valores[i].mat==chave)
        {
            *retorno=l->valores[i];
            return 0;
        }
        return -1;
    }

    return 0;
}

int listaVazia(Lista *l)
{
    if(l==NULL)
        return 2;
    if(l->total==0)
        return 0;
    else
        return 1;
}

int removerInicio(Lista *l)
{
    int i;
    if(l==NULL)
        return 2;
    if(listaVazia(l)==0)
        return 1;
    for(i=0;i<l->total-1;i++)
        l->valores[i]=l->valores[i+1];
    l->total--;
    modificatamanho(l);

    return 0;
}

int removerFim(Lista *l)
{
    if(l==NULL)
        return 2;
    if(listaVazia(l)==0)
        return 1;
    l->total--;
    modificatamanho(l);

    return 0;
}

int listaCheia(Lista *l)
{
    if(l==NULL)
        return 2;
    if(l->total==MAX)
        return 0;
    else
        return 1;
}

void mostrar(Lista *l)
{
    int i;
    if(l!=NULL)
    {
        printf("[");
        for(i=0;i<l->total;i++)
        {
            printf("{%d,",l->valores[i].mat);
            printf("%s,",l->valores[i].nome);
            printf("%.2f}",l->valores[i].n1);
        }
            printf("]\n");
    }
}

int inserirPosicao(Lista *l,struct aluno it,int pos)
{
    if(l == NULL )
    {
        fprintf(stderr,"\nERRO! Lista nao existe");
        return -2;
    }
    if(listaCheia(l))
    {
        fprintf(stderr,"\nERRO!Lista cheia");
        return -1;
    }

    int i;
    for(i=l->total;i>pos;i--)
    {
            l->valores[i]=l->valores[i-1];
    }
    l->valores[pos]=it;
    l->total++;
    modificatamanho(l);

    return 0;
}

int removerPosicao(Lista*l,int pos)
{
    if(l == NULL )
    {
        fprintf(stderr,"\nERRO! Lista nao existe");
        return -2;
    }
    if(listaVazia(l))
    {
        fprintf(stderr,"\nERRO!Lista cheia");
        return -1;
    }
    int i;
    for(i=pos;i<l->total;i++)
    {
            l->valores[i]=l->valores[i+1];
    }
    l->total--;
    modificatamanho(l);

    return 0;
}

int removerItem(Lista *l,int it)
{
    if(l == NULL )
    {
        fprintf(stderr,"\nERRO! Lista nao existe");
        return -2;
    }
    if(listaVazia(l))
    {
        fprintf(stderr,"\nERRO!Lista cheia");
        return -1;
    }
    int i;
    for(i=0;i<l->total;i++)
    {
        if (l->valores[i].mat == it)
        {
        removerPosicao(l,i);
        i--;
        }
    }
    modificatamanho(l);

    return 0;
}

int buscarPosicao(Lista *l,int pos,struct aluno *retorno)
{
    if(listaVazia(l)==0)
        return 1;

    if(pos < l->total)
    {
        printf("[");
        printf("{%d,",l->valores[pos].mat);
        printf("%s,",l->valores[pos].nome);
        printf("%.2f}",l->valores[pos].n1);
        printf("]\n");
    }
    return 0;
}

int contemItem(Lista *l, struct aluno it)
{
    if(listaVazia(l)==0)
        return 1;

    int i;
    for (i=0; i < l->total; i++)
    {
    if (l->valores[i].mat ==  it.mat)
    {
        return 0;
    }
    else
        return 1;
    }

    return 2;
}

Lista *reversa(Lista *l)
{
    if(listaVazia(l)==0)
        return 0;

    int i;
    int j = l->total;
    Lista *st = criar();
    st->total = l->total;
    for(i=0; i <l->total; i++)
    {
        st->valores[j] = l->valores[i];
    }

    return st;
}

int contaitem(Lista *l, struct aluno it)
{
    if(listaVazia(l)==0)
        return 1;

    int i,k;
    for (i=0; i < l->total; i++)
    {
    if (l->valores[i].mat ==  it.mat)
        k++;
    }

    return k;
}
