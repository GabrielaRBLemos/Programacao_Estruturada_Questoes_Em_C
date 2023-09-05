#include <stdio.h>
#include <stdlib.h>

int main(){
    int year, age;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &year);
    age = 2023 - year;
    printf("%d", age);
    return 0;
}
