#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listad.h"
/*
typedef struct no{
    Aluno valor;
    struct no*prox;
    struct no*ant;
}No;

typedef struct aluno{
    int mat;
    char nome[30];
    float n1;}
Aluno;
*/

int main()
{
    int k = 0;
    int opcao;
    int mat;
    Lista *st = criar();
    Aluno luc;
        luc.mat = 001;
        strcpy(luc.nome, "Lucas");
        luc.n1 = 10;
    Aluno jg;
        jg.mat = 002;
        strcpy(jg.nome, "Jose");
        jg.n1 = 8;

        inserirFim(st,jg);
        inserirFim(st,luc);


    while (k != 1)
    {
        printf("Escolha uma opção:\n 1)Cadastrar aluno\n 2)Remover aluno\n 3)Listar alunos cadastrados\n 4)Mostrar dados do aluno com maior nota\n 5)Remover todos os alunos\n 6) Sair");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1: cadastrarAluno(st);
                break;
            case 2 : printf("digite a matricula do aluno"); scanf("%d", &mat); removerItem(st, mat) ;
                break;
            case 3 : mostrar(st);
                break;
            case 4 : maiorNota(st);
                break;
            case 5 : limpar(st);
                break;
            default: k=1;
                break;
        }
    }
    printf("Hello world!\n");
    return 0;
}
