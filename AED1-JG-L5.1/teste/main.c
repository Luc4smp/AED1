#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("digite um numero\n");
    char *string;
    int v2[30];
    int i;
    int j = 0;

    scanf("%s", string);
    for (i=0; i<10; i+=3)
    {
    v2[j] += (string[i+2] - '0');
    v2[j] += 10*(string[i+1] - '0');
    v2[j] += 100*(string[i] - '0');
    j++;
    }
    printf("%d\n", v2[0]);
    printf("%d\n", v2[1]);
    return 0;
}
