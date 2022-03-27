/*
21/03/22
Escrever um programa que leia duas matrizes 3x3.
Gere uma terceira matriz, sendo o resultado da multiplicação das matrizes lidas.
Exiba as tres matrizes.
*/

#include <stdio.h>

main()
{	int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k;

	// Leitura 1;
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			{	printf("Matriz 1 [%d][%d]: ", i, j);
				scanf("%d", &mat1[i][j]);				
			}
			
	// Leitura 2;
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			{	printf("Matriz 2 [%d][%d]: ", i, j);
				scanf("%d", &mat2[i][j]);				
			}	
	
	// Geracao matriz multiplicacao;
	// Zerar matriz multiplicacao;
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			mat3[i][j] = 0;
			
	// Multiplicacao da matriz;
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			for(k = 0; k < 3; k++)
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
				
	// Exibicao das matrizes
	printf("\n\nMatriz 1\n\n");
	for(i = 0; i < 3; i++)
		{	printf("|");
			for(j = 0; j < 3; j++)
				printf("%4d ", mat1[i][j]);
			printf("|\n");			
		}
		
	// Exibicao das matrizes
	printf("\n\nMatriz 2\n\n");
	for(i = 0; i < 3; i++)
		{	printf("|");
			for(j = 0; j < 3; j++)
				printf("%4d ", mat2[i][j]);
			printf("|\n");			
		}
		
	// Exibicao das matrizes
	printf("\n\nMatriz 3\n\n");
	for(i = 0; i < 3; i++)
		{	printf("|");
			for(j = 0; j < 3; j++)
				printf("%4d ", mat3[i][j]);
			printf("|\n");			
		}	
	
}
