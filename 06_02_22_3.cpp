/*
Escreva uma funcao recursiva que retorne a soma dos digitos de um numero inteiro positivo
*/

#include <stdio.h>

int calculaSomaDigitos(int n)
{	if (n == 0)
		return 0;
	else return n%10 + calculaSomaDigitos(n/10);
}

main()
{	int n;

	do
	{	printf("Insira um numero inteiro positivo: ");
		scanf("%d", &n);
	}	while(n < 0);
	
	printf("A soma dos digitos de %d e: %d.", n, calculaSomaDigitos(n));
}
