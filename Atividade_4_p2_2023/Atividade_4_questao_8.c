#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculateRoot(float* a, float* b, float* c, float* x1, float* x2)
{
    float delta;
    if (*a == 0.0)
    {
        printf("Se a = 0, a equação é de primeiro grau.\n");
        exit(0);
    }
    delta = *b * *b -  4.0 * *a * *c;
    if (delta < 0.0)
    {
        printf("Se Δ < 0, não existe raiz real.\n");
        exit(0);
    }
    else if (delta == 0.0)
    {
        *x1 = -(*b) / 2 * *a;
        *x2 = *x1;
    }
    else
    {
        *x1 = (-(*b) + sqrt(delta)) / (2.0 * *a);
        *x2 = (-(*b) - sqrt(delta)) / (2.0 * *a);
    }
}

int main() {
    float a, b, c, x1, x2;
    printf("Considerando uma equação do 2º grau da forma AX²+BX+C=0;\nInsira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf(" %f", &b);
    printf("Insira o valor de C: ");
    scanf(" %f", &c);
    calculateRoot(&a, &b, &c, &x1, &x2);
    printf("As raizes da função são %.2f e %.2f", x1, x2);
return 0;
}