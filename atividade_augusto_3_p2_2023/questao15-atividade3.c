#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Insira um número:");
    scanf("%d", &num);
    if(num >= 0){
        printf("Positivo\n");
    }
    else
    {
        printf("Negativo\n");
    }
    return 0;
}