#include <stdio.h>

int calcularMDC(int numX, int numY) {
    if (numX == numY) {
        return numX;
    } 
    else if (numX > numY) {
        return calcularMDC(numX - numY, numY);
    } 
    else {
        return calcularMDC(numX, numY - numX);
    }
}

int main() 
{
    int numX, numY, mdc;
    printf("Digite um número inteiro: ");
    scanf("%d", &numX);
    printf("Digite outro número inteiro: ");
    scanf("%d", &numY);
    if (numX <= 0 || numY <= 0) {
        printf("Ambos números devem ser inteiros e maior que zero.\n");
        return 0;
    }
    mdc = calcularMDC(numX, numY);
    printf("O MDC de %d e %d é %d\n", numX, numY, mdc);

    return 0;
}