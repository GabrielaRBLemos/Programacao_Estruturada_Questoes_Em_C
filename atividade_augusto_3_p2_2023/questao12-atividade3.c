#include <stdio.h>
#include <stdlib.h>

int main(){
    char firstName[100], lastName[100];
    printf("Digite o seu primeiro nome:\n");
    scanf("%s", &firstName);
    printf("Digite o seu sobrenome:\n");
    scanf("%s", &lastName);
    printf("%s %s\n", lastName, firstName);
    return 0;
}
