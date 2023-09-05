//24. Faça um programa que leia uma sequência de números inteiros do usuário e exiba quantos números são pares e quantos números são ímpares entre o primeiro
//e o último número digitado. O programa deve parar de ler quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main() {
    int num, firstNum, lastNum, evenCount = 0, oddCount = 0;
    
    printf("Digite um inteiro, o programa será interrompido se 0 for inserido:\n");
    scanf("%d", &firstNum);

    if (firstNum != 0) {
        lastNum = firstNum;

        do {
            printf("Digite um inteiro, o programa será interrompido se 0 for inserido:\n");
            scanf("%d", &num);

            if (num != 0) {
                lastNum = num;

                if (num % 2 == 0) {
                    evenCount++; // Increment the count for even numbers
                } else {
                    oddCount++; // Increment the count for odd numbers
                }
            }
        } while (num != 0);

        printf("Entre o primeiro e o último números inseridos, %d são pares e %d são impares.\n", evenCount, oddCount);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
