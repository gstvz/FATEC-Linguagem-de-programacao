/*
Receba duas matrizes 3x3 e retorne uma terceira com a soma das matrizes.
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

void matriz_soma(int m1[3][3], int m2[3][3], int m3[3][3])
{ int i, j;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
      m3[i][j] = m1[i][j] + m2[i][j];
    
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
{ int m1[3][3], m2[3][3], m3[3][3], i, j;

  printf("\n\nLeitura da matriz 1\n");
  leitura_matriz(m1);

  printf("\nLeitura da matriz 2\n");
  leitura_matriz(m2);

  printf("\nMatriz soma\n");
  matriz_soma(m1, m2, m3);
  exibir_vetor(m3);
}