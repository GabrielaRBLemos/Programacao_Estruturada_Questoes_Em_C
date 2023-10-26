#include <stdio.h>

int gerarTermo(int num) {
    if (num <= 1) {
        return num;
    } 
    else {
        return gerarTermo(num - 1) + gerarTermo(num - 2);
    }
}

void fibonacci(int num) {
    int i;
    for (i = 1; i < num + 1; i++) {
        printf("%d ", gerarTermo(i));
    }
    printf("\n");
}

int main() 
{
    int num;
    printf("Digite a quantidade de termos que deseja gerar: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("A quantidade deve ser um número positivo.\n");
        return 0;
    }
    fibonacci(num);

    return 0;
}