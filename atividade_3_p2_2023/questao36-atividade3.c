#include <stdio.h>
#include <stdlib.h>

int main(){
    float numA, numB, numC, mean;

    printf("Insira um número decimal:\n");
    scanf("%f", &numA);
    printf("Insira outro número decimal:\n");
    scanf("%f", &numB);
    printf("Insira mais um número decimal:\n");
    scanf("%f", &numC);

    mean = (numA + numB + numC)/3;

    printf("A média desses três números é %f\n", mean);

    return 0;
}