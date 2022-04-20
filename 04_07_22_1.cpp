/*
Escrever um programa que leia duas matrizes 3x3. 
Gere uma matriz soma, uma matriz multiplicação.
Exiba todas as matrizes no formato de matriz.
Escrever funções para:
a) Leitura da matriz;
b) Exibição da matriz;
c) Gerar matriz soma;
d) Gerar matriz multiplicação;
*/

#include <stdio.h>

void leitura_matriz(int mat[3][3])
{	int i, j;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{	printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);			
		}

	return;
}

void exibir_matriz(int mat[3][3])
{	int i, j;

	for(i = 0; i < 3; i++)
		{	for(j = 0; j < 3; j++)
				printf("%3d", mat[i][j]);
			printf("\n");
		}
	
	return;	
}

void somar_matriz(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{	int i, j;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			mat3[i][j] = mat1[i][j] + mat2[i][j];
	
	return;
}

void multiplicar_matriz(int mat1[3][3], int mat2[3][3], int mat3[3][3])
{	int i, j, k;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			mat3[i][j] = 0;

	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			for(k = 0; k < 3; k++)
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
				
	return;	
}

main()
{	int mat1[3][3], mat2[3][3], matSoma[3][3], matMulti[3][3];
	
	printf("\nLeitura matriz 1:\n");
	leitura_matriz(mat1);
	
	printf("\nLeitura matriz 2:\n");
	leitura_matriz(mat2);
	
	somar_matriz(mat1, mat2, matSoma);
	multiplicar_matriz(mat1, mat2, matMulti);
	
	printf("\nExibicao matriz 1:\n");
	exibir_matriz(mat1);
	
	printf("\nExibicao matriz 2:\n");
	exibir_matriz(mat2);
	
	printf("\nExibicao matriz soma:\n");
	exibir_matriz(matSoma);
	
	printf("\nExibicao matriz multiplicacao:\n");
	exibir_matriz(matMulti);
}
