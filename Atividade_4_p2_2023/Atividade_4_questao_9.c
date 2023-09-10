#include <stdio.h>

void ordenar(float* a, float* b, float* c)
{
    float temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() 
{
    float a, b, c;
    printf("Digite A: ");
    scanf("%f", &a);
    printf("Digite B: ");
    scanf(" %f", &b);
    printf("Digite C: ");
    scanf(" %f", &c);

    ordenar(&a, &b, &c);
    printf("A = %.2f\nB = %.2f\nC = %.2f\n", a, b, c);

    return 0;
}