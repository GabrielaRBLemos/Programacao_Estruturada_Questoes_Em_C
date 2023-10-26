#include <stdio.h>

float power(int num, int numPower)
{
    if(numPower == 0)
    {
        return 1;
    }
    else
    {
        return num * power(num, numPower - 1);
    }
}

int main() 
{
    float num;
    int numPower;
    printf("Digite um número  real: ");
    scanf("%f", &num);
    printf("Digite um número inteiro e maior ou igual a zero, que será a potência aplicada ao número anterior: ");
    scanf("%d", &numPower);
    if(numPower < 0)
    {
        printf("O número inteiro deve ser igual ou maior que zero.\n");
        return 0;
    }
    printf("%.2f elevado a potência de %d é %.2f", num, numPower, power(num, numPower));
    
    return 0;
}