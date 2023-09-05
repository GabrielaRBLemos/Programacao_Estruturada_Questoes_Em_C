#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    const char *estados[4];
    estados[0] = "solteiro(a)";
    estados[1] = "casado(a)";
    estados[2] = "divorciado(a)";
    estados[3] = "viúvo(a)";
    printf("Digite um número para selecionar a opção que descreve seu estado civil.\n 1. Solteiro(a) \n 2. Casado(a)\n 3. Divorciado(a)\n 4. Viúvo(a)\n");
    scanf("%d", &opcao);
    printf("Você é %s\n",estados[opcao-1]);
    return 0;
}