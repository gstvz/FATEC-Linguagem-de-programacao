/*
Escreva um programa que leia um vetor de 20 inteiros e inverta os valores do vetor.
Exiba o vetor antes e depois da inversao.
Funcoes:
Ler o vetor;
Exibir o vetor;
Inverter os valores;
*/

#include <stdio.h>

void le_vetor(int vetor[20])
{	int i;

	for(i = 0; i < 20; i++)
		{	printf("Vetor[%d][%d]: ", i, i);
			scanf("%d", &vetor[i]);
		}

	return;
}

void exibe_vetor(int vetor[20])
{	int i;	

	for(i = 0; i< 20; i++)
		printf("%d ", vetor[i]);

	return;
}

void inverter_vetor(int vetor[20])
{	int i, j = 19, aux;
	
	for(i = 0; i < 10; i++)
	{	aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		j--;		
	}
	
	return;	
}

main()
{	int vet[20];

	printf("Leitura do vetor\n\n");
	le_vetor(vet);
	
	printf("\n\nVetor antes da inversao: ");
	exibe_vetor(vet);
	
	printf("\n\nVetor apos a inversao: ");
	inverter_vetor(vet);
	exibe_vetor(vet);	
}
