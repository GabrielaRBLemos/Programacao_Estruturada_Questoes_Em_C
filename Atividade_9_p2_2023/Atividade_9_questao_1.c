#include <stdio.h>

void fillMatrix(int columns, int rows, float mat[rows][columns])

{

  int i, j;

  for (i = 0; i < columns; i++)

  {

    printf("Preenchendo coluna %d:\n", i + 1);

    for (j = 0; j < rows; j++)

    {

      printf("Valor da linha %d: ", j + 1);

      scanf("%f", & mat[j][i]);

    }

  }

}

float findBiggest(int columns, int rows, float mat[rows][columns])

{

  int i, j;

  float biggest;

  biggest = mat[0][0];

  for (i = 0; i < rows; i++)

  {

    for (j = 0; j < rows; j++)

    {

      if (biggest < mat[i][j])

      {
        biggest = mat[i][j];
      }
    }
  }

  return biggest;

}

float multiply(int columns, int rows, float mat[rows][columns])

{

  int i;

  float prod, biggest;

  prod = 1;

  biggest = findBiggest(columns, rows, mat);

  for (i = 0; i < rows; i++)

  {

    prod = mat[i][i] * prod;

  }

  prod = prod * biggest;

  return prod;

}

void printMatrix(int columns, int rows, float mat[rows][columns])

{

  int i, j;

  for (i = 0; i < rows; i++)

  {

    for (j = 0; j < rows; j++)

    {

      printf("%.2f ", mat[i][j]);

    }

    printf("\n");

  }

}

int main()

{

  int rows, columns;

  rows = 5;

  columns = 5;

  float mat[rows][columns], prod;

  fillMatrix(columns, rows, mat);

  prod = multiply(columns, rows, mat);

  printf("A matriz inserida:\n");

  printMatrix(columns, rows, mat);

  printf("Valor da multiplicação: %.2f.\n", prod);

  return 0;

}