#include <stdio.h>
#include <stdlib.h>

void sortearLado(int *resultado) {
    int lado;
    lado = (rand() % 6) + 1;
}

void realizarSimulacao(int *resultado, int numLancamentos) {
    int i;
    for (i = 0; i < numLancamentos; i++) {
        sortearLado(resultado);
    }
}

void exibirResultado(int *resultado) {
    int i;
    printf("Resultado da simulação:\n");
    for (i = 0; i < 6; i++) {
        printf("Lado %d: %d vezes\n", i + 1, resultado[i]);
    }
}

int main() {
    int resultado[6], numLancamentos, i;
    numLancamentos = 1000000;
    for (i = 0; i < 10; i++)
    {
        resultado[i] = 0;
    }
    srand(1);

    realizarSimulacao(resultado, numLancamentos);
    exibirResultado(resultado);

    return 0;
}
