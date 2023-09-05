//Faça um programa que exiba os números de 1 a 100, substituindo os múltiplos de 3 pela palavra
//"Fizz" e os múltiplos de 5 pela palavra "Buzz". Para os números que são múltiplos de ambos,
//utilize a palavra "FizzBuzz"
#include <stdio.h>

int main(){
    int i, num;

    for (i = 0; i < 100; i++)
    {
        num = i + 1;

        if (num % 15 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (num % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (num % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", num);
        }
        
    }
    

    return 0;
}