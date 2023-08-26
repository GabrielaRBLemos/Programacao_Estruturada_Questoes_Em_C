#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB;
    printf("Digite o primeiro número:\n");
    scanf("%d", &numA);
    printf("Digite o segundo número:\n");
    scanf("%d", &numB);
    if(numA > numB){
        printf("O número maior é %d.\n", numA);
    }
    else{
        printf("O número maior é %d.\n", numB);
    }
    return 0;
}