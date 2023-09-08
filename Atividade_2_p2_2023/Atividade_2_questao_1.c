#include <stdio.h>

int main() {
    int num, factorial, i;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    factorial = 1;
    if (num < 0)
    {
        printf("Não existe fatorial de número negativo.\n");
        return 0;
    }
    else if (num != 0 || num != 1)
    {
        for (i = 1; i < num + 1; i++)
        {
            factorial = factorial * i;
        } 
    }
    printf("O fatorial de %d é %d\n", num, factorial);

return 0;
}