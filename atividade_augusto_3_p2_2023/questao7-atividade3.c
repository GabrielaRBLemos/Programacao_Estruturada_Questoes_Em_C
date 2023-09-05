#include <stdio.h>
#include <stdlib.h>

int main(){
    float numA, sqr;
    printf("Digite um numero de ponto flutuante:\n");
    scanf("%f", &numA);
    sqr = numA * numA;
    printf("%f", sqr);
    return 0;
}
