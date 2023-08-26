#include <stdio.h>
#include <stdlib.h>

int main(){
    float weight, height, IMC;
    printf("Insira peso em kilogramas:\n");
    scanf("%f", &weight);
    printf("Insira altura em centímetros:\n");
    scanf("%f", &height);
    IMC = (weight/(height*height)) * 10000;
    printf("Seu IMC é %0.2f\n", IMC);
    return 0;
}