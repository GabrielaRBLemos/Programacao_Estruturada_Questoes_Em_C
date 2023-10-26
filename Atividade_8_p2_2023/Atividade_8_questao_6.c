#include <stdio.h>

void preencherMatriz(int mat[4][5]) {
    printf("Preencha a matriz 4x5:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void somarLinhas(int mat[4][5], int somaLinha[4]) {
    for (int i = 0; i < 4; i++) {
        somaLinha[i] = 0;
        for (int j = 0; j < 5; j++) {
            somaLinha[i] += mat[i][j];
        }
    }
}

void somarColunas(int mat[4][5], int somaColuna[5]) {
    for (int j = 0; j < 5; j++) {
        somaColuna[j] = 0;
        for (int i = 0; i < 4; i++) {
            somaColuna[j] += mat[i][j];
        }
    }
}

int somarTodosElementos(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int matriz[4][5];
    int somaLinha[4];
    int somaColuna[5];

    preencherMatriz(matriz);
    somarLinhas(matriz, somaLinha);
    somarColunas(matriz, somaColuna);

    printf("\nVetor SOMALINHA:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", somaLinha[i]);
    }

    printf("\nVetor SOMACOLUNA:\n");
    for (int j = 0; j < 5; j++) {
        printf("%d ", somaColuna[j]);
    }

    int somaTotal = somarTodosElementos(somaLinha, 4);
    printf("\nSoma total das linhas: %d\n", somaTotal);

    return 0;
}