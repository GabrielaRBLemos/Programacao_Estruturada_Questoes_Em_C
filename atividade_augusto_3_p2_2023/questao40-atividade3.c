#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB, numC, result;
    printf("Digite um número inteiro:\n");
    scanf("%d", &numA);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &numB);
    printf("Digite mais um número inteiro:\n");
    scanf("%d", &numC);
    result = (numA + numB) * numC;
    printf("(n1 + n2) * n3 = %d\n", result);
    return 0;
}