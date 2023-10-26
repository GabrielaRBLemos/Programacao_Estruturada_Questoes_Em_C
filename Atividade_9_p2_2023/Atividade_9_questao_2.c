#include <stdio.h>

void fillMatrix(int size, float mat[size][size])

{

  int i, j;

  for (i = 0; i < size ; i++)

  {

    printf("Preenchendo coluna %d:\n", i + 1);

    for (j = 0; j < size ; j++)

    {

      printf("Valor da linha %d: ", j + 1);

      scanf("%f", & mat[j][i]);

    }

  }

}

int searchRow(int size, int row, float mat[size][size])

{

  int i, sum;

  sum = 0;

  for (i = 0; i < size ; i++)

  {

    sum = mat[row][i] + sum;

  }

  if (sum == 1.0)

  {

    return 1;

  }

  return 0;

}

int searchColumn(int size, int column, float mat[size][size])

{

  int i, sum;

  sum = 0;

  for (i = 0; i < size ; i++)

  {

    sum = mat[i][column] + sum;

  }

  if (sum == 1.0)

  {

    return 1;

  }

  return 0;

}

int isPermut(int size, float mat[size][size])

{

  int i, sum;

  sum = 0;

  for (i = 0; i < size; i++)

  {

    sum = sum + searchColumn(size, i, mat);

  }

  if (sum == size)

  {
    return 1;
  }

  return 0;
}

int main()

{

  int size, permutValue;

  printf("Insira o número de colunas da matriz: ");

  scanf("%d", & size);

  float mat[size][size];

  fillMatrix(size, mat);

  permutValue = isPermut(size, mat);

  if (permutValue == 1)
  {

    printf("é permutação.\n");

  } 
  else

  {

    printf("Não é permutação.\n");

  }

}