#include "strgg.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

typedef struct str{
    char stringg[100];
}Str;

Str *cria()
{
    Str *s = (Str*) malloc(sizeof(Str));
    return s;
}

char preenchestring(char *texto, Str *s)
{
    strcpy(s->stringg,texto);
    return s->stringg;
}

int tamstring(Str *s)
{
    int i = 0;

    while(s->stringg[i] != '\0')
    {
        i++;
    }

    return i;
}

void  mostrastring(Str *s)
{
    printf("\n%s", s->stringg);
}

int caractere1(Str *s, int n, char c)
{
    int i;
    int j = 0;
    for (i=0; i < n; i++)
    {
        if (c == s->stringg[i])
        {
            j++;
        }
    }

    return j;
}

int caractere2(Str *s, int n, char c)
{
    int i;
    int j = 0;
    for (i=0; i < n; i++)
    {
        if (c == s->stringg[i])
        {
            j++;
        }
    }

    return j;
}
