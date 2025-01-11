#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enc.h"

int main()
{
    struct aluno x;
    struct aluno y;
    struct aluno lu;
    lu.mat = 123;
    strcpy(lu.nome, "LUCAS");
    lu.n1 = 8;
    struct aluno jg;
    jg.mat = 456;
    strcpy(jg.nome, "JOSE");
    jg.n1 = 10;
    struct aluno gu;
    gu.mat = 789;
    strcpy(gu.nome, "GUSTAVO");
    gu.n1 = 9;

    struct aluno es;
    es.mat = 222;
    strcpy(es.nome, "aluno");
    es.n1 = 11;

    Lista *st = criar();
    Lista *sg = criar();

    listaVazia(st);
    inserirInicio(st, lu);
    inserirFim(st, gu);
    inserirPosicao(st, jg,1);
    mostrar(st);
    buscarItemChave(st,789, &x);
    inserirFim(st, x);
    maiorNota(st, &y);
    inserirFim(st, y);
    mostrar(st);

    inserirInicio(sg, lu);
    inserirInicio(sg, es);

    st = Concatena(st,sg);
    mostrar(st);

    return 0;
}
