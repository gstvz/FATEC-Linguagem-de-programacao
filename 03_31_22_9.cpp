/*
Receba uma matriz 3x3 e um número inteiro.
Retorne quantos elementos da matriz são maiores que x.
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

int numeros_maiores(int mat[3][3], int x)
{ int i, j, quantidade = 0;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
      if(mat[i][j] > x)
        quantidade++;
  
  return quantidade;
}

main()
{ int mat[3][3], x, maiores;

  printf("\n\nLeitura da matriz\n");
  leitura_matriz(mat);

  printf("\nInsira um numero inteiro: ");
  scanf("%d", &x);

  maiores = numeros_maiores(mat, x);
  printf("\nA matriz possui %d numeros maiores que %d!\n", maiores, x);
}