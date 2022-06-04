/*
Escreva um programa, principal e funcao recursiva, que exiba o correspondente em binario de um numero inteiro;
*/

#include<stdio.h>

void exibe_binario(int n)
{	if(n == 0)
		return;
	else exibe_binario(n / 2);
	printf("%d ", n % 2);
}

main()
{	int x;

	printf("Num: ");
	scanf("%d", &x);
	printf("Base binaria: ");
	exibe_binario(x);
}

