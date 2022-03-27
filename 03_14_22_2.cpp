/*
Ler duas matrizes 3x2.
Exibir as duas matrizes no formato de matriz.
*/

#include <stdio.h>

main()
{ int mat1[3][2], mat2[3][2,] i, j;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    { printf("Matriz 1[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  
  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    { printf("Matriz 2[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  
  printf("\n\nMatriz 1\n\n");

  for(i = 0; i < 3; i++)
  { printf("|");
    for(j = 0; j < 3; j++)
      printf("%4d", mat[i][j]);
    printf("|\n");
  }

  printf("\n\nMatriz 2\n\n");

  for(i = 0; i < 3; i++)
  { printf("|");
    for(j = 0; j < 3; j++)
      printf("%4d", mat[i][j]);
    printf("|\n");
  }
}