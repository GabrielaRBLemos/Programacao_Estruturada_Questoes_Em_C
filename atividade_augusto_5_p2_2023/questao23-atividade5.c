//23. Elabore um programa que leia uma sequência de números inteiros do usuário e exiba o menor valor digitado que seja positivo e ímpar. O programa deve parar 
//de ler quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main() {
    int num, smallestOdd = -1;

    do {
        printf("Digite um número inteiro, o programa será interrompido se 0 for inserido:\n");
        scanf("%d", &num);

        if (num != 0 && num > 0 && num % 2 != 0) {
            if (smallestOdd == -1 || num < smallestOdd) {
                smallestOdd = num;
            }
        }
    } while (num != 0);

    if (smallestOdd != -1) {
        printf("Menor valor ímpar positivo inserido: %d\n", smallestOdd);
    } else {
        printf("Nenhum valor positivo ímpar inserido.\n");
    }

    return 0;
}

