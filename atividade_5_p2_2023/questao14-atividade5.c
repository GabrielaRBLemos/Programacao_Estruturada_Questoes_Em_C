//14. Faça um programa que exiba os números ímpares de 1 a 100 utilizando o while.
#include <stdio.h>

int main(){
    int i;
    i = 0;
    while (i < 101)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    

    return 0;
}