#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strgg.h"


int main()
{
    char texto[100] = {0};
    char c1;
    char c2;
    char l;

    Str *st = cria();
    printf("digite o texto:");
    scanf("%s",texto);
    scanf("%c",&l);

    printf("digite o caractere especial 1:");
    scanf("%c",&c1);
    scanf("%c",&l);

    printf("digite o caractere especial 2:");
    scanf("%c",&c2);

    preenchestring(texto,st);

    int t = tamstring(st);

    int j = caractere1(st,t,c1);
    int k = caractere2(st,t,c2);

    mostrastring(st);

    printf("\nTAM: %d", t);
    printf("\nCaractere 1 aparece: %d vezes", j);
    printf("\nCaractere 2 aparece: %d vezes", k);


    return 0;
}
