#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Digite um número inteiro entre 1 e 5:\n");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Muito Bom\n");
        break;
    case 2:
        printf("Bom\n");
        break;
    case 3:
        printf("Regular\n");
        break;
    case 4:
        printf("Insuficiente\n");
        break;
    case 5:
        printf("Muito insuficiente\n");
        break;
    default:
    printf("O número deve ser entre 1 e 5.\n");
        break;
    }
        
    return 0;
}