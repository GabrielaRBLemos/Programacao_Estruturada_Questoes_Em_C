#include <stdio.h>
#include <math.h>

int main() {
    float input;
    int rounded;
    
    printf("Insira um número decimal:");
    scanf("%f", &input);
    
    rounded = (int)round(input);
    
    printf("%d é o número inteiro mais próximo de %.2f.\n", rounded, input);
    
    return 0;
}