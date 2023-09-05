#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, height, area;
    printf("Insira o comprimento da base do retângulo:\n");
    scanf("%f", &base);
    printf("Insira a altura em centímetros:\n");
    scanf("%f", &height);
    area = height * base;
    printf("A area do retângulo é %.2f\n", area);
    return 0;
}