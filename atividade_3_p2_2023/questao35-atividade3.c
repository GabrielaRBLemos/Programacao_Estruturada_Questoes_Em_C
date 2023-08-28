#include <stdio.h>

int main() {
    float base, height, perimeter;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Insira a altura do retângulo: ");
    scanf("%f", &height);

    perimeter = 2 * (base + height);

    printf("O perímetro do retângulo é %.2f\n", perimeter);

    return 0;
}
