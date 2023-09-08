#include <stdio.h>

int main()
{
    int vetA[5], vetB[5], vetC[5];
    printf("Digite o primeiro valor do vetor A: ");
    scanf("%d",&vetA[0]);
    printf("Digite o segundo valor do vetor A: ");
    scanf("%d",&vetA[1]);
    printf("Digite o terceiro valor do vetor A: ");
    scanf("%d",&vetA[2]);
    printf("Digite o quarto valor do vetor A: ");
    scanf("%d",&vetA[3]);
    printf("Digite o quinto valor do vetor A: ");
    scanf("%d",&vetA[4]);

    printf("Digite o primeiro valor do vetor B: ");
    scanf("%d",&vetB[0]);
    printf("Digite o segundo valor do vetor B: ");
    scanf("%d",&vetB[1]);
    printf("Digite o terceiro valor do vetor B: ");
    scanf("%d",&vetB[2]);
    printf("Digite o quarto valor do vetor B: ");
    scanf("%d",&vetB[3]);
    printf("Digite o quinto valor do vetor B: ");
    scanf("%d",&vetB[4]);

    vetC[0] = vetA[0] + vetB[0];
    vetC[1] = vetA[1] + vetB[1];
    vetC[2] = vetA[2] + vetB[2];
    vetC[3] = vetA[3] + vetB[3];
    vetC[4] = vetA[4] + vetB[4];

    printf("vetC = \"[%d],[%d],[%d],[%d],[%d]\" %d", vetC[0], vetC[1], vetC[2], vetC[3], vetC[4]);

return 0;
}