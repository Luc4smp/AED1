#include <stdio.h>

void calculaHexagono(float l,float *area,float *perimetro)
{
    *area = (3*l*l*1.73)/2;
    *perimetro = (l*6);
}

int main()
{
    float l =0;
    float perimetro, area;

    printf("Digite o valor de l");
    scanf("%f", &l);
    calculaHexagono(l, &area, &perimetro);


    printf("Area: %.2f", area);
    printf("\nPerimetro: %.2f", perimetro);

    char f;
    printf("\nAperte qualquer tecla para encerrar o programa.\n");
    scanf("%c",&f);

    return 0;
}
