#ifndef ENC_H_INCLUDED
#define ENC_H_INCLUDED

#define MAX 100
typedef struct aluno{
    int mat;
    char nome[30];
    float n1;
}Aluno;

typedef struct lista Lista;
Lista *criar();
void limpar(Lista *l);
int inserirInicio(Lista *l,struct aluno it);
int inserirFim(Lista *l,struct aluno it);
int inserirPosicao(Lista *l,struct aluno it,int pos);
int removerInicio(Lista *l);
int removerFim(Lista *l);
int removerPosicao(Lista *l,int pos);
int removerItem(Lista *l,struct aluno it);
int buscarItemChave(Lista *l,int chave,struct aluno*retorno);
int buscarPosicao(Lista *l,int pos,struct aluno *retorno);
int listaVazia(Lista *l);
int listaCheia(Lista *l);
int tamanho(Lista *l);
void mostrar(Lista *l);
int ContemItem(Lista *l, struct aluno it);
Lista *Concatena(Lista *l, Lista *s);
int maiorNota(Lista *l, struct aluno *retorno);
int removerNum(Lista *l, int pos);



#endif // ENC_H_INCLUDED
