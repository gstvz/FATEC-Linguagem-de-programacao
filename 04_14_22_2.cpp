/*
Escreva um programa que leia dois valores inteiro positivos (n e p), com p menor que n.
Escreva uma funcao que retorne o valor da combinacao (n e p).
*/

#include <stdio.h>

int calc_fatorial(int a)
{	int fat = 1, i;
	
	for(i = a; i > 0; i--)
		fat = fat * i;	
		
	return fat;
}

int calc_combinacao(int n, int k)
{	int fat_n, fat_k, fat_n_k, aux, resultado;
	
	fat_n = calc_fatorial(n);
	fat_k = calc_fatorial(k);
	aux = n - k;
	fat_n_k = calc_fatorial(aux);
	
	resultado = fat_n / (fat_k * fat_n_k);
	
	return resultado;
}

main()
{	int n, p, combinacao;
	
	printf("\nInsira um valor inteiro positivo: ");
	scanf("%d", &n);
	
	printf("\nInsira um valor inteiro positivo menor que o anterior: ");
	scanf("%d", &p);
	
	combinacao = calc_combinacao(n, p);
	
	printf("\n\nA combinacao de %d por %d e: %d", n, p, combinacao);
}
