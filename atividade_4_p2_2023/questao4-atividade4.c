#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("Insira sua idade:\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Você é maior de idade.\n");
    }
    else
    {
        printf("Você é menor de idade.\n");
    }
    
    return 0;
}