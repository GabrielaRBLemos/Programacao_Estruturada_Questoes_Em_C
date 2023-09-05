#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nameA[1000], nameB[1000];
    printf("Digite o nome de uma pessoa:\n");
    scanf("%s", &nameA);
    printf("Digite o nome de outra pessoa:\n");
    scanf("%s", &nameB);

    if (strlen(nameA) > strlen(nameB)) 
    {
        printf("%s tem mais caracteres que %s.\n", nameA, nameB);
    }
    else if (strlen(nameA) == strlen(nameB))
    {
        printf("%s tem a mesma quantidade de caracteres que %s.\n", nameA, nameB);
    }
    else
    {
        printf("%s tem mais caracteres que %s.\n", nameB, nameA);
    }
    
        
    return 0;
}