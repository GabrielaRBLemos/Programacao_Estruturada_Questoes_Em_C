#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, dNum;
    printf("Digite um número inteiro:\n");
    scanf("%d", &num);
    dNum = num * 2;
    printf("O dobro de %d é %d.\n", num, dNum);
    return 0;
}