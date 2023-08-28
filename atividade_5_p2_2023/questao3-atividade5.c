//3. Elabore um programa que leia um número inteiro e exiba todos os seus divisores.

#include <stdio.h>
int main(){
    int i, num, divisorsSize;
    divisorsSize = 0;
    printf("Insira um número:\n");
    scanf("%d", &num);
    int divisors[num];
    if (num == 0)
    {
        printf("Todo número inteiro, com exceção de 0, é um divisor de 0.\n");
    }
    else
    {
        //transforming num into |num| since negative and positive numbers have the same divisors
        if (num < 0)
        {
            num = num - 2 * num;
        }
        //getting all positive and negative divisors
        for ( i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                divisors[divisorsSize] = i;
                divisors[divisorsSize + 1] = -i;
                divisorsSize = divisorsSize + 2;
            }
            
        }
        printf("Os divisores do número %d são:\n", num);

        for ( i = 0; i < divisorsSize; i++)
        {
            printf("• %d\n", divisors[i]);
        }

    }
    return 0;
}