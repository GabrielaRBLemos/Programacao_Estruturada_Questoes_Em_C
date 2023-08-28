//9. Faça um programa que calcule o produto dos números de 1 a 5 utilizando o while.
#include <stdio.h>

#include <stdio.h>

int main(){
    int i, prod;
    prod = 1;
    i = 1;
    while (i != 6)
    {
        prod = i * prod;
        i = i + 1;
    }
    printf("O produto de todos números inteiros de 1 até 5 é %d.\n", prod);    

    return 0;
}