// 8. Elabore um programa que calcule a soma dos números de 1 a 100 utilizando o while.
#include <stdio.h>

int main(){
    int i, sum;
    sum = 0;
    i = 1;
    while (i != 101)
    {
        sum = i + sum;
        i = i + 1;
    }
    printf("A soma de todos números inteiros de 1 até 100 é %d.\n", sum);    

    return 0;
}