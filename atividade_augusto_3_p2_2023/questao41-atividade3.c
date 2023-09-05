#include <stdio.h>
#include <stdlib.h>

int main(){
    int celsius, fahrenheit;
    printf("Digite uma temperatura em graus Celsius\n");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%d\n", fahrenheit);
    return 0;
}