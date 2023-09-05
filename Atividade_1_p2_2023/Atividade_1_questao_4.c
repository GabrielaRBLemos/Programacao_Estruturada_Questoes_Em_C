#include <stdio.h>

int main() {
    int num, i, j;
    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("O número deve ser maior que zero.\n");
        return 0;
    }
    for (i = num; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }    

return 0;
}