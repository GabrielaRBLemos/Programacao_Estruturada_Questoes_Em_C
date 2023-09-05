#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB;
    printf("Digite um número inteiro:\n");
    scanf("%d", &numA);
    printf("Digite outro número inteiro:\n");
    scanf("%d", &numB);
    if (numA > numB) {
        printf("%d é maior que %d.\n", numA, numB);
    }
    else if (numA == numB){
        printf("Os dois números são iguais.\n");
    }
    else
    {
        printf("%d é maior que %d.\n", numB, numA);
    }
    
        
    return 0;
}