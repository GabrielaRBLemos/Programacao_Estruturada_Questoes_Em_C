#include <stdio.h>
#include <stdlib.h>

int main(){
    char city[100], state[100];
    printf("Digite o nome da sua cidade:\n");
    scanf("%s", &city);
    printf("Digite o estado da cidade:\n");
    scanf("%s", &state);
    printf("Você mora em %s, %s.\n", city, state);
    return 0;
}