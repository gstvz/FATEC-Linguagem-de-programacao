/*
Escrever um programa que leia matriz 5x5.
Leia um nº de uma linha (entre 0 e 4).
Calcular e exibir a soma da linha digitada.
Exibir a matriz.
*/

#include <stdio.h>

main()
{	int mat[5][5], i, j, linha, soma = 0;
	
	// Leitura 1;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			{	printf("Matriz [%d][%d]: ", i, j);
				scanf("%d", &mat[i][j]);				
			}
			
	// Escolha da linha;
	do { printf("\n\nEscolha uma linha de 0 a 4:\n");
		scanf("%d", &linha);
	}	while((linha < 0) || (linha > 4));

	// Soma da linha;
	for(j = 0; j < 4; j++)
		soma = soma + mat[linha][j];

	printf("\nA soma da linha %d e %d!", linha, soma);
	
	// Exibicao das matrizes
	printf("\n\nMatriz\n\n");
	for(i = 0; i < 5; i++)
		{	printf("|");
			for(j = 0; j < 5; j++)
				printf("%4d ", mat[i][j]);
			printf("|\n");			
		}
}
