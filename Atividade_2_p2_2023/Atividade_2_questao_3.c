#include <stdio.h>
#include <math.h>

int main() {
    float angle, distance, height;

    printf("Insira o ângulo de decolagem, em graus: ");
    scanf("%f", &angle);
    printf("Insira a distância percorrida, em metros: ");
    scanf("%f", &distance);
    height = sin(angle) * distance;
    printf("O avião está a %f metros de altura.\n", height);
return 0;
}