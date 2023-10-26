#include <stdio.h>

void preencherMatriz(int num, int mat[][num]) {
    printf("Preencha a matriz %dx%d:\n", num, num);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("Valor da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

int Simetrica(int num, int mat[][num]) {
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (mat[i][j] != mat[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Informe a ordem da matriz: ");
    scanf("%d", &num);

    int matriz[num][num];

    preencherMatriz(num, matriz);

    if (Simetrica(num, matriz)) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}
