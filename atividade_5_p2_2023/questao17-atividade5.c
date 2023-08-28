//17. Elabore um programa que leia uma sequência de números inteiros do usuário e determine quantos números pares foram digitados antes do primeiro número ímpar.
//O programa deve parar de ler quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main(){
    int counter, num;
    counter = 0;
    while(1==1)
    {
        printf("Insira um número inteiro, o programa irá parar se 0 for digitado:\n");
        scanf("%d", &num);
        if (num % 2 == 0 && num != 0)
        {
            counter = counter + 1;
        }
        else
        {
            break;
        }
    }
    printf("%d números pares foram digitados antes do primeiro número impar.\n", counter);

    return 0;
}