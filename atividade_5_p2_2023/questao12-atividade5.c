//12. Crie um programa que leia uma sequência de números inteiros do usuário e exiba a média dos números digitados. O programa deve parar de ler quando o usuário
//digitar o número -1 utilizando o while.
#include <stdio.h>

int main(){
    long int i, num, sum, mean;
    i = 0;
    num = 1;
    while (num != -1)
    {
        printf("Insira um número inteiro, digitar -1 interromperá o programa.\n");
        scanf("%ld", &num);
        sum = sum + num; 
        i = i + 1;   
    }
    sum = sum + 1;
    mean = sum / i;
    printf("O média número da sequência é %ld.\n", mean);
    
    return 0;
}