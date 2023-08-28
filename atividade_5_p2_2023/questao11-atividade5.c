//Crie um programa que leia uma sequência de números inteiros do usuário e exiba o maior e o menor valor digitado. O programa deve parar de ler quando o usuário 
//digitar o número 0 utilizando o while.
#include <stdio.h>

int main(){
    long int i, num, biggest, smallest;
    i = 0;
    biggest = 0;
    smallest = 4294967296;
    num = 1;
    while (num != 0)
    {
        printf("Insira um número inteiro, digitar o número 0 interromperá o programa.\n");
        scanf("%ld", &num);
        if(num > biggest)
        {
            biggest =  num;
        }
        if (num < smallest && num != 0)
        {
            smallest = num;
        }
        i = i + 1;   
    }
    if (biggest == 0)
    {
        printf("Nenhum número foi digitado antes do número 0.\n");
        return 0;
    }
    printf("O maior número da sequência é %ld, o menor é %ld.\n", biggest, smallest);
    
    return 0;
}