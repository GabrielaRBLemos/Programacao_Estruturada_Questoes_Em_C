#include <stdio.h>
#include <stdlib.h>

int main(){
    float weight, height, IMC;
    printf("Insira peso em kilogramas:\n");
    scanf("%f", &weight);
    printf("Insira altura em centímetros:\n");
    scanf("%f", &height);
    IMC = (weight/(height*height)) * 10000;

    if (IMC < 18.5)
    {
        printf("Um IMC de %.2f corresponde a abaixo do peso.\n", IMC);      
    }
    else if (IMC < 25)
    {
        printf("Um IMC de %.2f corresponde a peso normal.\n", IMC);
    }
    else if (IMC < 30)
    {
        printf("Um IMC de %.2f corresponde a acima do peso.\n", IMC);
    }
    else if (IMC < 35)
    {
        printf("Um IMC de %.2f corresponde a obesidade I.\n", IMC);
    }
    else if (IMC <= 40)
    {
        printf("Um IMC de %.2f corresponde a obesidade II ou severa.\n", IMC);
    }
    else if (IMC > 40)
    {
        printf("Um IMC de %.2f corresponde a obesidade III ou mórbida.\n", IMC);
    }
    
    return 0;
}