#ifndef LISTAD_H_INCLUDED
#define LISTAD_H_INCLUDED

#define MAX 100
typedef struct aluno{
    int mat;
    char nome[30];
    float n1;}
Aluno;

    typedef struct lista Lista;

    Lista *criar();
    void limpar(Lista *l);
    int inserirInicio(Lista *l,struct aluno it);
    int inserirFim(Lista *l,struct aluno it);
    int inserirPosicao(Lista *l,struct aluno it,int pos);
    int removerInicio(Lista *l);
    int removerFim(Lista *l);
    int removerPosicao(Lista *l,int pos);
    int removerItem(Lista *l,int it);
    int buscarItemChave(Lista *l,int chave,struct aluno *retorno);
    int buscarPosicao(Lista *l,int posicao,int *retorno);
    int listaVazia(Lista *l);
    int listaCheia(Lista *l);
    int tamanho(Lista *l);
    void mostrar(Lista *l);
    int cadastrarAluno(Lista *l);
    int maiorNota(Lista *l);

#endif // LISTAD_H_INCLUDED
