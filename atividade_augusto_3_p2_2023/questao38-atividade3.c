#include <stdio.h>
#include <stdlib.h>

int main(){
    float real, dollarRate, dollar;
    printf("Insira o valor em reais.\n");
    scanf("%f", &real);
    printf("Insira a cotação do dollar, em reais.\n");
    scanf("%f", &dollarRate);
    dollar = real / dollarRate;
    printf("R$%.2f  valem $%.2f.\n", real, dollar);
    return 0;
}