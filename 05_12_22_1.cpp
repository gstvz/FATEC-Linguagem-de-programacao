/*
Escreva uma função recursiva que calcule o fatorial de um numero
*/

#include <stdio.h>

int fatorial(int n)
{	// caso base;
	if(n == 0 || n == 1)
		return 1;
	// chamada recursiva;	
	else return n * fatorial(n - 1);
}

main()
{	int n;

	do 
	{	printf("Digite um numero: ");
		scanf("%d", &n);
	} while(n < 0);	
	
	printf("O fatorial de %d e: %d", n, fatorial(n));
}
