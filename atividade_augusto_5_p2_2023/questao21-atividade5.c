//21. Faça um programa que leia uma sequência de números inteiros do usuário e exiba quantos números possuem mais de três dígitos. O programa deve parar de ler 
//quando o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main(){
    int num, count;
    count = 0;

    do
    {
        printf("Digite um inteiro, o programa será interrompido se 0 for inserido:\n");
        scanf("%d", &num);
        
        // Skip processing if the number entered is 0
        if(num != 0) 
        {
            // Get the absolute value of the number
            int absNum = (num < 0) ? -num : num; 
            int numDigits = 0;

            while(absNum > 0)
            {
                absNum /= 10;
                numDigits++;
            }

            if(numDigits > 3)
            {
                count++;
            }
        }
    }
    while(num != 0);

    printf("Número de inteiros com mais de três dígitos: %d\n", count);

    return 0;
}
