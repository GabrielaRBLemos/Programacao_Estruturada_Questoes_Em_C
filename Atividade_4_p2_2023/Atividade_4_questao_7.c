#include <stdio.h>

void xxx(int mnts, int* hora, int* minutos)
{
    *hora = mnts / 60;
    *minutos = mnts - 60 * *hora;
}

int main() 
{
    int mnts, hora, minutos;
    printf("Insira a quantidade total de minutos: ");
    scanf("%d", &mnts);
    if (mnts < 0)
    {
        printf("A quantidade total de minutos não pode ser um número negativo.\n");
        return 0;
    }
    
    xxx(mnts, &hora, &minutos);
    printf("%d horas e %d minutos.\n", hora, minutos);
return 0;
}