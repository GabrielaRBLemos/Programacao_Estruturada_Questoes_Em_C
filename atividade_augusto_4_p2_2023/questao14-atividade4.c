#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Insira um número inteiro:\n");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("O número %d é divisível por ambos 5 e 3.\n", num);
    }
    else
    {
        printf("O número %d não é divisível por 3 e por 5 ao mesmo tempo.\n", num);
    }
     
    return 0;
}