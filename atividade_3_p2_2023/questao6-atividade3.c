#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB, sumAB;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numA);
    printf("Digite outro numero inteiro:\n");
    scanf("%d", &numB);
    sumAB = numA + numB;
    printf("%d", sumAB);
    return 0;
}
