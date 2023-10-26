#include <stdio.h>

void fillMatrix(int size, int mat[size][size])

{

  int i, j;

  printf("Preenchendo matriz:\n");
  for (i = 0; i < size ; i++)
  {
    for (j = 0; j < size ; j++)
    {
      printf("Valor na linha %d, coluna %d: ", i+ 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }
}

int findNum(int size, int mat[size][size])
{
    int i, sum;
    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + mat[0][i];
    }
    return sum;   
}

int checkLines(int size, int mat[size][size], int num)
{
    int i, j, sum, ok;
    ok = 0;
    for (i = 0; i < size; i++)
    {
        sum = 0;
        for (j = 0; j < size; j++)
        {
            sum = sum + mat[i][j];
        }
        if (sum == num)
        {
            ok = ok + 1;
        }
    }
    if (ok == size)
    {
        return 1;
    }
    return 0;
}

int checkColumns(int size, int mat[size][size], int num)
{
    int i, j, sum, ok;
    ok = 0;
    for (i = 0; i < size; i++)
    {
        sum = 0;
        for (j = 0; j < size; j++)
        {
            sum = sum + mat[j][i];
        }
        if (sum == num)
        {
            ok = ok + 1;
        }
    }
    if (ok == size)
    {
        return 1;
    }
    return 0;
}

int checkDiagonals(int size, int mat[size][size], int num)
{
    int i, j, sumA, sumB;
    sumA = 0;
    sumB = 0;
    for (i = 0; i < size; i++)
    {
        sumA = sumA + mat[i][i];
    }
    for (i = 0; i < size; i++)
    {
        sumB = sumB + mat[i][size - (i + 1)];
    }
    if (sumA == num && sumB == num)
    {
        return 1;
    }
    return 0;
}

int isMagicCube(int size, int mat[size][size], int num)
{
    if (checkLines(size, mat, num) + checkColumns(size, mat, num) + checkDiagonals(size, mat, num) == 3)
    {
        return 1;
    }
    return 0;
}

int main() 
{
    int size, num;
    printf("Insira o número de colunas da matriz: ");
    scanf("%d", & size);
    int mat[size][size];
    fillMatrix(size, mat);
    num = findNum(size, mat);
    if (isMagicCube(size, mat,num) == 1)
    {
        printf("A matriz é um quadrado mágico\n");
    }
    else
    {
        printf("A matriz não é um quadrado mágico\n");
    }
    
    
    return 0;
}
