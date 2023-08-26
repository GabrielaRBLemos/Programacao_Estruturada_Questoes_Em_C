#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    printf("Digite o seu nome:\n");
    scanf("%s", &name);
    if (strlen(name) > 5)
    {
        printf("Seu nome contêm mais que 5 caracteres.\n");
    }
    else{
        printf("Seu nome contêm menos que 5 caracteres.\n");
    }
    return 0;
}