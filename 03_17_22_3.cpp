/* 
Escreva um programa que leia uma matriz 5x5. 
Gere uma segunda matriz sendo a inversa da matriz lida.
Exibir as duas matrizes. 
*/

#include<stdio.h>

main()
{	int matPrincipal[5][5], matInversa[5][5], i, j;

	// Leitura da Matriz Principal;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
		{	printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matPrincipal[i][j]);
		}
		
	// Geracao da Matriz Inversa;
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			matInversa[i][j] = matPrincipal[j][i];
			
	// Exibicao da Matriz Principal;
	printf("\n\n Matriz Principal \n\n");
	
	for(i = 0; i < 5; i++)
		{	printf("|");
			for(j = 0; j < 5; j++)
				printf("%4d", matPrincipal[i][j]);
			printf("|\n");
		}

	// Exibicao da Matriz Inversa;
	printf("\n\n Matriz Inversa \n\n");
	
	for(i = 0; i < 5; i++)
		{	printf("|");
			for(j = 0; j < 5; j++)
				printf("%4d", matInversa[i][j]);
			printf("|\n");
		}
}
