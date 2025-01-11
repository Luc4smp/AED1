#include <stdio.h>
#include <stdlib.h>
#include "conjunto.h"

typedef struct conjunto{
    int conjA[6];
    int conjB[6]
}Con;

Con *cria()
{
    Con *s = (Con*) malloc(sizeof(Con));
    return s;
}

int preencheA(int num, Con *s, int n)
{
    s->conjA[n] = num;
    return s->conjA;
}

int preencheB(int num, Con *s, int n)
{
    s->conjB[n] = num;
    return s;
}
