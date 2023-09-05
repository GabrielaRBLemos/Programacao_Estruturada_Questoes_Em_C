#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Insira um número inteiro:\n");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("O número é positivo.\n");
    }
    else if (number == 0)
    {
        printf("O número é igual a zero.\n");
    }
    else
    {
        printf("O número é negativo.\n");
    }
    
    return 0;
}