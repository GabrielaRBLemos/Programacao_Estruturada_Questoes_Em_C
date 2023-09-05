//15. Desenvolva um programa que exiba todos os múltiplos de 3 no intervalo de 1 a 50 utilizando o while.
#include <stdio.h>

int main(){
    int i;
    i = 0;
    while (i < 51)
    {
        if(i % 3 == 0)
        {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    

    return 0;
}