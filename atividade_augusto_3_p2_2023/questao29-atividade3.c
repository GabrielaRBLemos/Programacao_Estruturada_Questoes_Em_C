#include <stdio.h>
#include <stdlib.h>

int main(){
    char product[100];
    float price;
    printf("Digite o nome do produto:\n");
    scanf("%s", &product);
    printf("Digite o preço do produto:\n");
    scanf("%f", &price);
    printf("%s, $ %.2f\n", product, price);
    return 0;
}