/*
Inicializar um vetor de 50 inteiros.
Ordenar com o Metodo da Bolha.
Ler um numero inteiro.
Verificar se o numero existe no vetor, com a Busca Sequencial e Binaria.
Contar a quantidade de verificacoes em cada.
Exibir se foi ou nao localizado.
Exibir a quantidade de verificacoes realizadas.
*/

#include <stdio.h>

main()
{
	int vet[50], n, i, j, aux, qtdS = 0,  qtdB = 0, achou = 0, inicio, fim, meio;
	
	// Inicializar o vet;	
	for(i = 0; i < 50; i++)
	{
		printf("Vetor [%d]: ", i);
		scanf("%d", &vet[i]);
	}
		
	// Ordenar o vet;
	for(j = 49; j > 0; j--)
		for(i = 0; i < j; i++)
			if(vet[i] > vet[i + 1])
			{
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
			
	// Ler n
	printf("\n\nDigite um valor: ");
	scanf("%d", &n);
	
	// Verificar com busca sequencial
	i = 0;
	while((vet[i] <= n) && (i < 50))
	{
		if(vet[i] == n)
			achou = 1;
		qtdS++;
		i++;
	}	

	// Verificar com busca bin�ria
	achou = 0;
	inicio = 0;
	fim = 49;
	meio = (inicio + fim) / 2;
	
	while((!achou) && (inicio <= fim))
	{	if(vet[meio] == n)
			achou = 1;			
		else if(n < vet[meio])
				fim = meio - 1;
			else inicio = meio + 1;		
		meio = (inicio + fim) / 2;
		qtdB++;
	}	
	
		
	// Exibi��o	
	printf("\nForam necessarias %d verificacoes com a Busca Sequencial", qtdS);
	printf("\nForam necessarias %d verificacoes com a Busca Binaria", qtdB);
	
	if(achou)
		printf("\nO valor %d foi localizado no vetor", n);
	else printf("\nO valor %d nao foi localizado no vetor", n);
}
