/*
Escreva uma funcao recursiva que exiba a soma dos numeros pares de um determinado numero de elementos do vetor
*/

#include <stdio.h>

int exibe_soma(int vet[], int n)
{	if(n == 0)
	{	if(vet[n] % 2 == 0)
			return vet[n];		
		else return 0;
	} else if(vet[n] % 2 == 0)
			return vet[n] + exibe_soma(vet, n - 1);
		else return 0 + exibe_soma(vet, n - 1);
}


main()
{	int n, i, vet[n];

	do
	{	printf("Insira a quantidade de elementos: ");
		scanf("%d", &n);
	}	while (n < 0);
	
	for(i = 0; i < n; i++)
	{	printf("Vetor[%d]: ", i);
		scanf("%d", &vet[i]);		
	}
	
	printf("A soma e: %d", exibe_soma(vet, n - 1));
}
