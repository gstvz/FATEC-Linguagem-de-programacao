/*
Escrever um programa que leia um vetor de 20 posi��es de inteiros. 
Leia um valor n tamb�m inteiro.
Verificar quantos valores do vetor s�o divididos por n.
Exibir o vetor e a quantidade de valores encontrados.
Escrever fun��es para:
a) Leitura do vetor
b) Exibi��o do vetor
c) Verifica��o do vetor 
*/

#include <stdio.h>

void le_vetor(int vet[20])
{	int i;

	for(i = 0; i < 20; i++)
		{	printf("Vetor[%d]:", i);
			scanf("%d", &vet[i]);
		}
		
	return;
}

void exibe_vetor(int vet[20])
{	int i;

	for(i = 0; i < 20; i++)
		printf("%d ", vet[i]);

	return;	
}

int verifica(int vet[20], int x)
{	int i, qtd = 0;
	
	for(i = 0; i < 20; i++)
		if(vet[i] % x == 0)
			qtd++;
	
	return qtd;	
}

main()
{	int vetor[20], n; 

	printf("Leitura do vetor \n\n");
	le_vetor(vetor);
	
	printf("\nValor de n: ");
	scanf("%d", &n);
	
	printf("\n\nQtd de numeros de vetor divididos por %d = %d", n, verifica(vetor, n));
}
