/*
Escreva um programa que leia uma matriz 4x4 e o valor de uma linha.
Calcule e exiba a soma da linha.
Funcoes:
Ler a matriz;
Exibir a matriz;
Calcular a soma da linha;
*/

#include <stdio.h>

void le_matriz(int matriz[4][4])
{	int i, j;

	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{	printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);			
		}
	
	return;	
}

void exibe_matriz(int matriz[4][4])
{	int i, j;

	for(i = 0; i < 4; i++)
	{	for(j = 0; j < 4; j++)
			printf("%3d", matriz[i][j]);
		printf("\n");
	}
	
	return;	
}

int soma_linha(int m[4][4], int l)
{	int j, soma = 0;

	for(j = 0; j < 4; j++)
		soma = soma + m[l][j];
	
	return soma;	
}


main()
{	int mat[4][4], linha, sm;

	printf("Leitura da matriz\n\n");
	le_matriz(mat);

	do {	printf("\nLinha: ");
			scanf("%d", &linha);
	}	while((linha < 0) || (linha > 3));
	
	sm = soma_linha(mat, linha);
	
	printf("Matriz\n\n");
	exibe_matriz(mat);
	
	printf("\n\nSoma da linha %d = %d", linha, sm);	
}
