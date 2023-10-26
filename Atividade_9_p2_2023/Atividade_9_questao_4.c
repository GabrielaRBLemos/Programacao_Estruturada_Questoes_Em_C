#include <stdio.h>

void fillMatrix(int size, int mat[size][size]) {
    int i, j;
    printf("Preenchendo a matriz:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Valor na linha %d, coluna %d: ", i+ 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
int calculateSumAboveDiagonal(int size, int mat[size][size]) {
    int i, j, sum;
    sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            sum =  sum + mat[i][j];
        }
    }
    return sum;
}
void printMatrix(int size, int mat[size][size]) {
    int i, j;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size = 4, mat[size][size], sum;
    fillMatrix(size, mat);
    printf("A matriz inserida:");
    printMatrix(size, mat);
    sum = calculateSumAboveDiagonal(size, mat);
    printf("A soma dos elementos acima da diagonal principal é: %d\n", sum);
    
    return 0;
}
