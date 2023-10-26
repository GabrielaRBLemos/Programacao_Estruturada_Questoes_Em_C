#include <stdio.h>
void fillMatrix(float mat[][4], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Valor da linha %d, coluna %d: ", i, j);
            scanf("%f", &mat[i][j]);
        }   
    }    
}

void sumMatrixes(float matA[][4], float matB[][4], float sum[][4], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void printMatrix(float mat[][4], int rows, int columns)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("[%.2f], ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int rows, columns;
    rows = 3;
    columns = 4;
    float A[rows][columns], B[rows][columns], C[rows][columns];
    
    printf("Inserindo matriz A:\n");
    fillMatrix(A, rows, columns);
    printf("Inserindo matriz B:\n");
    fillMatrix(B, rows, columns);
    sumMatrixes(A, B, C, rows, columns);
    printf("Matriz A:\n");
    printMatrix(A, rows, columns);
    printf("Matriz A:\n");
    printMatrix(B, rows, columns);
    printf("Soma de A e B:\n");
    printMatrix(C, rows, columns);
    return 0;
}