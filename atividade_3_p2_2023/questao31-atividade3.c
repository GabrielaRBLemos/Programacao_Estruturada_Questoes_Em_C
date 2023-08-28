#include <stdio.h>
#include <stdlib.h>

int main(){
    char email[100];
    printf("Digite um endereço de e-mail:\n");
    scanf("%s", &email);
    printf("Agradeço imensamente porque essa oportunidade!\n Até breve\n %s\n", email);
    return 0;
}