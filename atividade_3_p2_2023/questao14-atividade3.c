#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Insira um número:");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }
    return 0;
}