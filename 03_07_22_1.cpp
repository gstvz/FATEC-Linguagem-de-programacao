/* 
Gere um vetor de 50 posicoes de inteiros com numeros aleatorios de 0 a 100. 
Ordenar com o metodo da bolha. 
Ler um valor n(inteiro) e verificar se o valor encontra-se ou nao no vetor pelo metodo da Busca Binaria.
Exibir o vetor gerado, o valor n e uma mensagem se encontra-se ou nao 
*/

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

main()
{int vet[50], i, j, aux, n, achou, inicio, meio, fim;
	// Gerar vetor;
	srand(time(NULL));
	for(i = 0; i < 50; i++)
		vet[i] = rand()%100;	
		
			
	// Ordenar vetor com metodo da bolha;
	for(j = 49; j > 0; j--)
		{	for(i = 0; i < j; i++)
			{	if(vet[i] > vet[i + 1])
				{	aux = vet[i];
					vet[i] = vet[i + 1];
					vet[i + 1] = aux;
				}
			}
		}
		
	// Ler o valor n;
	printf("\n\nDigite um valor de 0 a 100: ");
	scanf("%d", &n);
	
	// Busca binaria
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
		}
		
	// Exibicoes
	printf("\n\nVetor: ");
	for(i =0; i < 50; i++)
		printf("%d ", vet[i]);
		
	printf("\nValor n: %d", n);
	
	if(achou)
		printf("\nValor %d encontrado no vetor", n);
	else printf("\nValor %d nao encontrado no vetor", n);
}
