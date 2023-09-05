//22. Desenvolva um programa que leia uma sequência de números inteiros do usuário e exiba a média dos números que estão entre 50 e 100. O programa deve parar de 
//ler quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main() {
    int num, sum, count;
    sum = 0;
    count = 0;

    do {
        printf("Digite um número inteiro, o programa será interrompido se 0 for inserido:\n");
        scanf("%d", &num);

        if (num != 0)
        {
            if (num >= 50 && num <= 100) {
                sum += num;
                count++;
            }
        }
    } while (num != 0);

    if (count > 0)
    {
        // Calculate the average as a double
        double mean = (double)sum / count;
        printf("Média de números entre 50 e 100: %.2lf\n", mean);
    } else {
        printf("Nenhum número entre 50 e 100 inseridos.\n");
    }

    return 0;
}
