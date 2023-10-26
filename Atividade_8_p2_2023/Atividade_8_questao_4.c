#include <stdio.h>

void fillMatrix(int mat[][100], int rows, int columns) {
    printf("Preencha a matriz %dx%d:\n", rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void transposeMatrix(int matA[][100], int matB[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matB[j][i] = matA[i][j];
        }
    }
}

void displayMatrix(int mat[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    printf("Informe o número de linhas da matriz A: ");
    scanf("%d", &rows);
    printf("Informe o número de colunas da matriz A: ");
    scanf("%d", &columns);
    int A[rows][columns], B[columns][rows];

    fillMatrix(A, rows, columns);

    transposeMatrix(A, B, rows, columns);

    printf("\nMatriz A (%dx%d):\n", rows, columns);
    displayMatrix(A, rows, columns);

    printf("\nMatriz B (%dx%d):\n", columns, rows);
    displayMatrix(B, columns, rows);

    return 0;
}