//18. Crie um programa que leia uma sequência de números inteiros do usuário e exiba quantos números pares e quantos números ímpares foram digitados. O programa deve
//parar de ler quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main(){
    int num, even, odd;
    odd = 0;
    even = 0;
    do
    {
        printf("Insira um número inteiro, o programa irá parar se 0 for digitado:\n");
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    while(num != 0);
    //subtract 1 from the even counter
    even = even - 1;

    printf("%d números pares e %d números impares", even, odd);

    return 0;
}