#include <stdio.h>

void inserirValor(float vetor[], int tamanho, int *posicoesPreenchidas, float valor) {
    if (*posicoesPreenchidas < tamanho) {
        for (int i = 0; i < *posicoesPreenchidas; i++) {
            if (vetor[i] == valor) {
                printf("Valor já existe no vetor. Inserção cancelada.\n");
                return;
            }
        }
        
        vetor[*posicoesPreenchidas] = valor;
        *posicoesPreenchidas = *posicoesPreenchidas + 1;
        printf("Valor inserido com sucesso.\n");
    } else {
        printf("O vetor está cheio. Não é possível inserir mais valores.\n");
    }
}

int buscarValor(float vetor[], int posicoesPreenchidas, float valor) {
    for (int i = 0; i < posicoesPreenchidas; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1; 
    /*-1 significa que o valor não encontrado*/
}

void exibirVetor(float vetor[], int posicoesPreenchidas) {
    printf("Valores no vetor: ");
    for (int i = 0; i < posicoesPreenchidas; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

void removerValor(float vetor[], int tamanho, int *posicoesPreenchidas, float valor) {
    int posicao = buscarValor(vetor, *posicoesPreenchidas, valor);
    if (posicao != -1) {
        for (int i = posicao; i < *posicoesPreenchidas - 1; i++) {
            vetor[i] = vetor[i + 1];
        }
        (*posicoesPreenchidas)--;
        printf("Valor removido com sucesso.\n");
    } else {
        printf("Valor não encontrado no vetor. Remoção cancelada.\n");
    }
}

int main() {
    int tamanhoMaximo = 100;
    float vetorA[tamanhoMaximo], vetorB[tamanhoMaximo];
    int posicoesPreenchidasA = 0, posicoesPreenchidasB = 0;
    int opcao;
    float valor;

    while (1) {
        printf("\nMenu Principal\nOpções:\n1 – Inserir novo valor\n2 – Procurar valor\n3 – Exibir vetor\n4 – Remover valor\n0 – Encerrar programa\nInforme a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o valor a ser inserido: ");
                scanf("%f", &valor);

                if (valor == (int)valor) {
                    if ((int)valor % 2 == 0) {
                        inserirValor(vetorA, tamanhoMaximo, &posicoesPreenchidasA, valor);
                    } else {
                        inserirValor(vetorB, tamanhoMaximo, &posicoesPreenchidasB, valor);
                    }
                } else {
                    printf("Valor deve ser um número inteiro.\n");
                }
                break;
            case 2:
                printf("Informe o valor a ser procurado: ");
                scanf("%f", &valor);

                if (valor == (int)valor) {
                    int posicaoA = buscarValor(vetorA, posicoesPreenchidasA, valor);
                    int posicaoB = buscarValor(vetorB, posicoesPreenchidasB, valor);

                    if (posicaoA != -1) {
                        printf("Valor encontrado no vetor A na posição %d.\n", posicaoA);
                    } else if (posicaoB != -1) {
                        printf("Valor encontrado no vetor B na posição %d.\n", posicaoB);
                    } else {
                        printf("Valor não encontrado em nenhum vetor.\n");
                    }
                } else {
                    printf("Valor deve ser um número inteiro.\n");
                }
                break;
            case 3:
                printf("Informe o vetor a ser exibido (A=1, B=2): ");
                scanf("%d", &opcao);
                if (opcao == 1) {
                    exibirVetor(vetorA, posicoesPreenchidasA);
                } else if (opcao == 2) {
                    exibirVetor(vetorB, posicoesPreenchidasB);
                } else {
                    printf("Opção inválida.\n");
                }
                break;
            case 4:
                printf("Informe o valor a ser removido: ");
                scanf("%f", &valor);

                if (valor == (int)valor) {
                    if ((int)valor % 2 == 0) {
                        removerValor(vetorA, tamanhoMaximo, &posicoesPreenchidasA, valor);
                    } else {
                        removerValor(vetorB, tamanhoMaximo, &posicoesPreenchidasB, valor);
                    }
                } else {
                    printf("Valor deve ser um número inteiro.\n");
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
