#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Considerando uma equação do 2º grau da forma AX²+BX+C=0;\nInsira o valor de A: ");
    scanf("%f", &a);
    printf("Insira o valor de B: ");
    scanf(" %f", &b);
    printf("Insira o valor de C: ");
    scanf(" %f", &c);
    delta = b * b -  4.0 * a * c;
    if (delta < 0)
    {
        printf("Se Δ < 0, não existe raiz real.\n");
        return 0;
    }
    else if (delta == 0)
    {
        x1 = -b / 2 * a;
        x2 = x1;
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);
    }
    
    printf("%.2f %.2f", x1, x2);
return 0;
}