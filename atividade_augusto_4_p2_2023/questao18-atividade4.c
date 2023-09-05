#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("Digite a sua idade:\n");
    scanf("%d", &age);

    if (age < 2) {
        printf("Você é um bebê.\n");
    }
    else if (age < 13)
    {
        printf("Você é uma criança.\n");
    }
    else if (age < 18)
    {
        printf("Você é um adolescente.\n");
    }
    else
    {
        printf("Você é um adulto.\n");
    }
    
        
    return 0;
}