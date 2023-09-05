#include <stdio.h>
#include <stdlib.h>

int main(){
    int numA, numB, operation, result;
    printf("Digite um número:\n");
    scanf("%d", &numA);
    printf("Digite outro número:\n");
    scanf("%d", &numB);
    printf("Digite um número para selecionar a operação.\n 1. Soma \n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        result = numA + numB;
        break;
    case 2:
        result = numA - numB;
        break;
    case 3:
        result = numA * numB;
        break;
    case 4:
        result = numA / numB;
        break;
    default:
    printf("O número da operação deve ser entre 1 e 4.\n");
        break;
    }
    printf("%d\n", result);
        
    return 0;
}