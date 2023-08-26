#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB, numC, biggerAB, biggerXC;
    printf("Digite um número inteiro:\n");
    scanf("%d", &numA);
    printf("Digite um número inteiro:\n");
    scanf("%d", &numB);
    printf("Digite um número inteiro:\n");
    scanf("%d", &numC);

    if (numA > numB) 
    {
        biggerAB = numA;
    }
    else if (numA < numB)
    {
        biggerAB = numB;
    }
    if (biggerAB > numC) 
    {
        biggerXC = biggerAB;
    }
    else if (biggerAB < numC) 
    {
        biggerXC = numC;
    }

    printf("O maior número entre esses é %d\n", biggerXC);
    
        
    return 0;
}