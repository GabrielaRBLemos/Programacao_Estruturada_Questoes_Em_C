//20. Desenvolva um programa que leia uma sequência de números inteiros do usuário e exiba a média dos números divisíveis por 3. O programa deve parar de ler quando
//o usuário digitar o número 0 utilizando o while.
#include <stdio.h>

int main(){
    int num, sum, count;
    float mean;
    sum = 0;
    count = 0;

    do
    {
        printf("Enter an integer, the program will stop if 0 is entered:\n");
        scanf("%d", &num);
        
        if(num % 3 == 0)
        {
            sum = sum + num;
            count++;
        }
    }
    while(num != 0);
    
    // Check if there are numbers divisible by 3
    if(count > 0) 
    {
        // Calculate the average as a double
        mean = (double)sum / count; 
        printf("Média de números divisíveis por 3: %.2lf\n", mean);
    }
    else
    {
        printf("Nenhum número divisível por 3 inseridos.\n");
    }

    return 0;
}
