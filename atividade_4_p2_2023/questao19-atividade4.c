#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("Digite um número para selecionar a opção que descreve seu estado civil.\n 1. Solteiro(a) \n 2. Casado(a)\n 3. Divorciado(a)\n 4. Viúvo(a)\n");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Você é solteiro(a)\n");
        break;
    case 2:
        printf("Você é casado(a)\n");
        break;
    case 3:
        printf("Você é divorciado(a)\n");
        break;
    case 4:
        printf("Você é viúvo(a)\n");
        break;
    default:
    printf("O número deve ser entre 1 e 4.\n");
        break;
    }
        
    return 0;
}