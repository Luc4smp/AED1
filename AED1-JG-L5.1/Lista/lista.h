#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#define MAX 100

struct aluno
{
    int mat;
    char nome[30];
    float n1;
};

typedef struct lista Lista;
Lista *criar();
void modificatamanho(Lista *l);
void limpar(Lista *l);
int inserirInicio(Lista *l,struct aluno it);
int inserirFim(Lista *l,struct aluno it);
int buscarItemChave(Lista *l,int chave,struct aluno *retorno);
int listaVazia(Lista *l);
int removerInicio(Lista *l);
int removerFim(Lista *l);
int listaCheia(Lista *l);
void mostrar(Lista *l);
int inserirPosicao(Lista *l,struct aluno it,int pos);
int removerPosicao(Lista *l,int pos);
int removerItem(Lista *l,int it);
int buscarPosicao(Lista *l,int pos,struct aluno *retorno);
int contemItem(Lista *l, struct aluno it);
Lista *reversa(Lista *l);
int contaitem(Lista *l, struct aluno it);

#endif // LISTA_H_INCLUDED
