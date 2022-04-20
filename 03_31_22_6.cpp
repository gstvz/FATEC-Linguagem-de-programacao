/*
Receba uma matriz 3x3 e retorne se ela for identidade ou caso não.
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

int verificar_identidade(int mat[3][3])
{ int i, j, identidade = 1;

  for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i == j)
			{	if(mat[i][j] != 1)
					identidade = 0;				
			}
			else if(mat[i][j] != 0)
				identidade = 0;

    return identidade;
}


main()
{ int mat[3][3], identidade;

  printf("\nLeitura da matriz\n");
  leitura_matriz(mat);

  identidade = verificar_identidade(mat);
  if(identidade == 0)
    printf("\n\nA matriz nao e identidade!\n\n");
  else printf("\n\nA matriz e identidade!\n\n");
}