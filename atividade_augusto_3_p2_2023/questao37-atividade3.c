#include <stdio.h>
#include <stdlib.h>

int main(){
    int age, months, days;
    printf("Digite a sua idade:\n");
    scanf("%d", &age);
    months = age * 12;
    days = age * 365;
    printf("%d anos é equivalente a %d meses ou %d dias.\n", age, months, days);    
    return 0;
}