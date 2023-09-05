#include <stdio.h>

int main() {
    float radius, pi, circumference, area, volume;
    printf("Insira um raio, em cm: ");
    scanf("%f", &radius);
    pi = 3.1415926535898;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    volume =  (4.0/3.0) * pi * radius * radius * radius;
    printf("O comprimento da circunferência do raio: %.2f cm\n", circumference);
    printf("A área do círculo do raio: %.2f cm²\n", area);
    printf("O volume da esfera do raio: %.2f cm³\n", volume);
return 0;
}