#include <stdio.h>
#include <stdlib.h>

int main(){
    float base, height, area;
    printf("Insira o comprimento da base do triângulo:\n");
    scanf("%f", &base);
    printf("Insira a altura em centímetros:\n");
    scanf("%f", &height);
    area = (height * base)/2;
    printf("A area do triângulo é %.2f\n", area);
    return 0;
}