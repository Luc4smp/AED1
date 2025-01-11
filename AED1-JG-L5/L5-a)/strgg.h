#ifndef STRINGG_H_INCLUDED
#define STRINGG_H_INCLUDED

typedef struct str Str;

Str *cria();

char preenchestring(char *texto, Str *s);

int tamstring(Str *s);

void  mostrastring(Str *s);

int caractere1(Str *s, int n, char c);

int caractere2(Str *s, int n, char c);

#endif // STRINGG_H_INCLUDED
