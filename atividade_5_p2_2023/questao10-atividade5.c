//10. Crie um programa que exiba a tabuada do 9 utilizando o while.

#include <stdio.h>

int main(){
    float grades[5];
    int i, prod;
    i = 1;
    while (i<11)
    {
        prod = 9 * i;
        printf("9 * %d = %d\n", i, prod);
        i = i + 1;
    }
    return 0;
}