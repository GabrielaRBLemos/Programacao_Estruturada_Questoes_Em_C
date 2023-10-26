#include <stdio.h>

int sum1ToNum(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return num + sum1ToNum(num - 1);
    }
}

int main() 
{
    int num;
    printf("Digite um número inteiro maior que 0: ");
    scanf("%d", &num);
    if (num < 1)
    {
        printf("O número deve ser maior que zero.\n");
        return 0;
    }
    printf("A soma dos números inteiros de 1 a %d é %d", num, sum1ToNum(num));    
    return 0;
}