/*
Receba duas matrizes 3x3 e retorne uma terceira com a multiplicação das matrizes.
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

void matriz_multiplicacao(int m1[3][3], int m2[3][3], int m3[3][3])
{ int i, j, k;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
      m3[i][j] = 0;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
      for(k = 0; k < 3; k++)
        m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];

  return;
}

void exibir_matriz(int m[3][3])
{ int i, j;

  for(i = 0; i < 3; i++)
  { printf("|");
    for(j = 0; j < 3; j++)
      printf("%3d", m[i][j]);
    printf("|\n");
  }

  return;
}

main()
{ int m1[3][3], m2[3][3], m3[3][3];

  printf("\n\nLeitura da matriz 1\n");
  leitura_matriz(m1);

  printf("\n\nLeitura da matriz 2\n");
  leitura_matriz(m2);

  printf("\nMatriz multiplicacao\n");
  matriz_multiplicacao(m1, m2, m3);
  exibir_matriz(m3);
}