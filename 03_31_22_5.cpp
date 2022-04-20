/*
Receba uma matriz 3x3 e retorne a soma de todos os valores.
*/

#include <stdio.h>

void leitura_matriz(int mat[3][3])
{ int i, j;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    { printf("Matriz[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }

  return;
}

int soma_matriz(int mat[3][3])
{ int i, j, total = 0;

    for(i = 0; i < 3; i++)
      for(j = 0; j < 3; j++)
        total = total + mat[i][j];

  return total;
}

main()
{ int mat[3][3], soma;

  printf("\nLeitura da matriz\n");
  leitura_matriz(mat);

  soma = soma_matriz(mat);
  printf("\nA soma dos valores da matriz e: %d\n", soma);
}