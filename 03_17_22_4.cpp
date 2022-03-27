/* 
Escreva um programa que leia uma matriz 4x4.
Verifique se ela e ou nao uma matriz identidade.
Exiba a matriz. 
*/

#include<stdio.h>

main()
{	int mat[4][4], i, j, identidade = 1;

	// Leitura da Matriz Principal;
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{	printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}	
		
	// Verificar se e Matriz Identidade;
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
			if(i == j)
			{	if(mat[i][j] != 1)
					identidade = 0;				
			}
			else if(mat[i][j] != 0)
				identidade = 0;
		
	// Exibicao da verificacao;
	if(identidade)
		printf("\nE uma matriz identidade!");
	else printf("\nNao e uma matriz identidade!");
			
	// Exibicao da Matriz;
	printf("\n\n Matriz \n\n");
	
	for(i = 0; i < 4; i++)
		{	printf("|");
			for(j = 0; j < 4; j++)
				printf("%4d", mat[i][j]);
			printf("|\n");
		}

}
