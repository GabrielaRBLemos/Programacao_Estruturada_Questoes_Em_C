#include <stdio.h>

int main()
{
    int vetA[10], vetB[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d valor do vetor: ", i);
        scanf("%d",&vetA[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            vetB[i] = vetA[i] / 2;          
        }
        else
        {
            vetB[i] = vetA[i] * 3;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("vetA[%d] = %d\n", i, vetA[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("vetB[%d] = %d\n", i, vetB[i]);
    }
return 0;
}