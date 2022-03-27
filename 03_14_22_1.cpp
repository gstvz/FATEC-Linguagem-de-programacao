/*
Ler uma matriz 3x3 de inteiros.
Exibir a matriz no formato de matriz.
*/

#include <stdio.h>

main()
{ int mat[3][3], i, j;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    { printf("Matriz[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  
  printf("\n\nMatriz\n\n");

  for(i = 0; i < 3; i++)
  { printf("|");
    for(j = 0; j < 3; j++)
      printf("%4d", mat[i][j]);
    printf("|\n");
  }
}