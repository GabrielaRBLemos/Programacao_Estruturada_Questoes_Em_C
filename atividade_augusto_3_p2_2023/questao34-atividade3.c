#include <stdio.h>
#include <stdlib.h>

int main(){
    float radius, perimeter;
    printf("Insira o raio do circulo:\n");
    scanf("%f", &radius);
    perimeter = 2.0 * 3.15 * radius;
    printf("O perímetro do circulo é %.2f\n", perimeter);
    return 0;
}