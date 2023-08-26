#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char city[100];
    printf("Digite o nome da sua cidade:\n");
    scanf("%s", &city);
    if ((city[0] == 's') || (city[0] == 'S'))
    {
        printf("O nome da sua cidade começa com  a letra S.\n");
    }
    else{
        printf("O nome da sua cidade não começa com  a letra S.\n");
    }
    return 0;
}