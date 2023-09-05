#include <stdio.h>
#include <stdlib.h>

int main(){
    int day, month, year;
    printf("Insira  uma data no formato dd/mm/aaaa:\n");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("o dia %d, do %dᵒ mês do ano %d.\n", day, month, year);
    return 0;
}