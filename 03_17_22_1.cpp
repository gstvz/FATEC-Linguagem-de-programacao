/* 
Escreva um programa que leia uma matriz 4x4. 
Calcule e exiba a soma dos elementos da Diagional Principal.
Exiba a matriz. 
*/

#include<stdio.h>

main()
{	int mat[4][4], i, j, soma = 0;

	// Leitura;
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{	printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
		
	// Soma da Diagional Principal;
	for(i = 0; i < 4; i++)
		soma = soma + mat[i][i];
	
	// Exibicao;
	printf("\n\n Matriz \n\n");
	
	for(i = 0; i < 4; i++)
		{	printf("|");
			for(j = 0; j < 4; j++)
				printf("%4d", mat[i][j]);
			printf("|\n");
		}
		
	printf("\n Soma da Diagonal Principal: %d", soma);
}
