#include <stdio.h>

void fillVector(float vet[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Digite o valor do mês %d: ", i + 1);
        scanf(" %f", &vet[i]);
    }
}
void calculateProfit(float vetGanhos[], float vetGastos[], float vetLucros[], int months)
{
    int i;
    for (i = 0; i < months; i++)
    {
        vetLucros[i] = vetGanhos[i] - vetGastos[i];
    }
}
void printVector(float vet[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%.2f\n", vet[i]);
    }  
}

float sumVector(float vet[], int size)
{
    int i;
    float sum;
    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + vet[i];
    }
    return sum;
}

int main() 
{
    int months;
    months = 12;
    float vetGanhos[months], vetGastos[months], vetLucros[months], totalGanhos, totalGastos, totalLucros;
    printf("Preencha os ganhos da empresa em cada mês do ano de 2022:\n");
    fillVector(vetGanhos, months);
    printf("Preencha os gastos da empresa em cada mês do ano de 2022:\n");
    fillVector(vetGastos, months);
    calculateProfit(vetGanhos, vetGastos, vetLucros, months);
    totalGanhos = sumVector(vetGanhos, months);
    totalGastos = sumVector(vetGastos, months);
    totalLucros = sumVector(vetLucros, months);
    printf("Vetor de ganhos por mês:\n");
    printVector(vetGanhos, months);
    printf("O total de ganhos no ano é de %.2f.\n", totalGanhos);
    printf("Vetor de gastos por mês:\n");
    printVector(vetGastos, months);
    printf("O total de gastos no ano é de %.2f.\n", totalGastos);
    printf("Vetor de lucros por mês:\n");
    printVector(vetLucros, months);
    printf("O total de lucro no ano é de %.2f.\n", totalLucros);
    
    return 0;
}