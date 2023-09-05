//19. Faça um programa que leia uma sequência de números inteiros do usuário e exiba quantos números são divisíveis por 2, quantos são divisíveis por 3 e quantos
//são divisíveis por 5. O programa deve parar de ler quando o usuário digitar o número 0 utilizando o while
#include <stdio.h>

int main(){
    int num, byTwo, byThree, byFive;
    byTwo = 0;
    byThree = 0;
    byFive = 0;
    do
    {
        printf("Insira um número inteiro, o programa irá parar se 0 for digitado:\n");
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            byTwo = byTwo + 1;
        }
        if(num % 3 == 0)
        {
            byThree = byThree + 1;
        }
        if(num % 5 == 0)
        {
            byFive = byFive + 1;
        }
    }
    while(num != 0);
    //subtract 1 from the byTwo counter
    byTwo = byTwo - 1;
    //subtract 1 from the byThree counter
    byThree = byThree - 1;
    //subtract 1 from the byFive counter
    byFive = byFive - 1;
    

    printf("%d números divisíveis por 2, %d números divisíveis por 3 e %d números divisíveis por 5.\n", byTwo, byThree, byFive);

    return 0;
}