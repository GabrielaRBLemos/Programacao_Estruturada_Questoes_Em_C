#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    char str[1000];
    printf("Digite um número inteiro:\n");
    scanf("%d", &num);
    printf("Digite uma linha de caracteres:\n");
    scanf("%s", &str);
    printf("%d %s\n", num, str);
    return 0;
}