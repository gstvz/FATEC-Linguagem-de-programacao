/*
Escreva um programa que leia uma matriz de ordem L1xC1, e uma outra matriz de ordem L2xC2.
Exiba as duas matrizes.
Calcule e exiba a matriz soma, se possivel.
Calcule e exiba a matriz multiplicacao, se possivel.
Obs: L1, L2, C1 e C2 devem estar entre 2 e 10.
*/

#include <stdio.h>

main()
{	int m1[10][10], m2[10][10], m3[10][10], m4[10][10], i, j, k, L1, L2, C1, C2;

	// Ler a ordem da matriz 1 (L1 e C1);
	do {
		printf("\nIndique o numero de linhas da matriz, entre 2 e 10: \n");
		scanf("%d", &L1);
	} while((L1 < 2 || L1 > 10));
	
	do {
		printf("\nIndique o numero de colunas da matriz, entre 2 e 10: \n");
		scanf("%d", &C1);
	} while((C1 < 2 || C1 > 10));
	
	// Ler a matriz 1;
	for(i = 0; i < L1; i++)
		for(j = 0; j < C1; j++)
		{	printf("Matriz 1 [%d][%d]: ", i, j);
			scanf("%d", & m1[i][j]);
		};
	
	// Ler a ordem da matriz 2 (L2 e C2);
	do {
		printf("\nIndique o numero de linhas da matriz, entre 2 e 10: \n");
		scanf("%d", &L2);
	} while((L2 < 2 || L2 > 10));
	
	do {
		printf("\nIndique o numero de colunas da matriz, entre 2 e 10: \n");
		scanf("%d", &C2);
	} while((C2 < 2 || C2 > 10));
	
	
	// Ler a matriz 2;
	for(i = 0; i < L2; i++)
		for(j = 0; j < C2; j++)
		{	printf("Matriz 2 [%d][%d]: ", i, j);
			scanf("%d", & m2[i][j]);
		};
	
	// Exiba a matriz 1;
	printf("\n\nMatriz 1\n\n");
	for(i = 0; i < L1; i++)
	{	printf("|");
		for(j = 0; j < C1; j++)
			printf("%3d", m1[i][j]);
		printf("|\n");
	}
	
	// Exiba a matriz 2;
	printf("\n\nMatriz 2\n\n");
	for(i = 0; i < L2; i++)
	{	printf("|");
		for(j = 0; j < C2; j++)
			printf("%3d", m2[i][j]);
		printf("|\n");
	}
	
	// Verificar se e possivel gerar a matriz soma;
	if((L1 == L2) && (C1 == C2))	
	{	// Gerar a soma;
		for(i = 0; i < L1; i++)
			for(j = 0; j < C1; j++)
				m3[i][j] = m1[i][j] + m2[i][j];
				
		// Exibir a matriz soma;
		printf("\n\nMatriz Soma\n\n");
		for(i = 0; i < L1; i++)
		{	printf("|");
			for(j = 0; j < C1; j++)
				printf("%3d", m3[i][j]);
			printf("|\n");
		}
	} else printf("\nNao e possivel realizar a soma, pois a ordem das matrizes e diferente.\n");
			
	// Verificar se e possivel gerar a matriz multiplicacao;
	if(C1 == L2)
	{	// Zerar a matriz multiplicacao;
		for(i = 0; i < L1; i++)
			for(j = 0; j < C2; j++)
				m4[i][j] = 0;
		
		// Gerar a multiplicacao;
		for(i = 0; i < L1; i++)
			for(j = 0; j < C2; j++)
				for(k = 0; k < C1; k++)
					m4[i][j] = m4[i][j] + m1[i][k] * m2[k][j];				
					
		// Exibir a matriz multiplicacao;
		printf("\n\nMatriz Multiplicacao\n\n");
		for(i = 0; i < L1; i++)
		{	printf("|");
			for(j = 0; j < C1; j++)
				printf("%3d", m4[i][j]);
			printf("|\n");
		}
	} else printf("\nNao e possivel realizar a multiplicao, pois o numero de colunas da primeira e diferente do numero de linhas da segunda.\n");
}
