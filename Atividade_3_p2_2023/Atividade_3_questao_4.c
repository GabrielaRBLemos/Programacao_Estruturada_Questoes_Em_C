#include <stdio.h>

int main()
{
    int i;
    float vetX[100], sum;
    sum = 0;
    for (i = 0; i < 100; i++)
    {
        printf("Digite o %d valor do vetor: ", i);
        scanf("%d",&vetX[i]);
    }
    for (i = 0; i < 100; i++)
    {
        sum = sum + vetX[i];
    }
    printf("A soma dos valores do vetor é %d", sum);
return 0;
}