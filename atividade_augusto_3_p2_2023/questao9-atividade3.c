#include <stdio.h>
#include <stdlib.h>

int main(){
    char firstName[100], lastName[100];
    printf("Digite seu primeiro nome:\n");
    scanf("%s", &firstName);
    printf("Digite seu sobrenome:\n");
    scanf("%s", &lastName);
    printf("%s %s", firstName, lastName);
    return 0;
}
