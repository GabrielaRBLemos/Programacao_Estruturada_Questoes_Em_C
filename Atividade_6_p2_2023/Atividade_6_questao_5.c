#include <stdio.h>

void inserirValor(int vetor[], int *tamanho, int *posicoesPreenchidas, int valor) {
    if (*posicoesPreenchidas < *tamanho) {
        vetor[*posicoesPreenchidas] = valor;
        *posicoesPreenchidas = *posicoesPreenchidas + 1;
        printf("Valor inserido com sucesso.\n");
    } else {
        printf("O vetor está cheio. Não é possível inserir mais valores.\n");
    }
}

void buscarValor(int vetor[], int posicoesPreenchidas, int valor) {
    int encontrado = 0;

    printf("Posições onde o valor foi encontrado: ");
    for (int i = 0; i < posicoesPreenchidas; i++) {
        if (vetor[i] == valor) {
            printf("%d ", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Valor não encontrado no vetor.\n");
    }
}

void exibirVetor(int vetor[], int posicoesPreenchidas) {
    printf("Valores no vetor: ");
    for (int i = 0; i < posicoesPreenchidas; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int tamanhoMaximo = 50;
    int vetorA[tamanhoMaximo], vetorB[tamanhoMaximo];
    int tamanhoA = tamanhoMaximo, tamanhoB = tamanhoMaximo;
    int posicoesPreenchidasA = 0, posicoesPreenchidasB = 0;
    int opcao, valor;

    while (1==1) {
        printf("\nMenu Principal\nOpções:\n1 – Inserir novo valor\n2 – Procurar valor\n3 – Exibir vetor\n0 – Encerrar programa\nInforme a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o valor a ser inserido: ");
                scanf("%d", &valor);

                if (valor % 2 == 0) {
                    inserirValor(vetorA, &tamanhoA, &posicoesPreenchidasA, valor);
                } else {
                    inserirValor(vetorB, &tamanhoB, &posicoesPreenchidasB, valor);
                }
                break;
            case 2:
                printf("Informe o valor a ser procurado: ");
                scanf("%d", &valor);

                if (valor % 2 == 0) {
                    buscarValor(vetorA, posicoesPreenchidasA, valor);
                } else {
                    buscarValor(vetorB, posicoesPreenchidasB, valor);
                }
                break;
            case 3:
                printf("Informe o vetor a ser exibido (A=1, B=2): ");
                scanf("%d", &valor);
                if (valor == 1) {
                    exibirVetor(vetorA, posicoesPreenchidasA);
                } else if (valor == 2) {
                    exibirVetor(vetorB, posicoesPreenchidasB);
                } else {
                    printf("Opção inválida.\n");
                }
                break;
            case 0:
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}

