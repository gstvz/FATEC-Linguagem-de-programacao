/*
Escreva uma funcao recursiva que retorne a quantidade de digitos de um numero inteiro positivo
*/

#include <stdio.h>

int calculaQtdDigitos(int n)
{	if (n == 0)
		return 0;
	return 1 + calculaQtdDigitos(n / 10);
}

main()
{	int n;

	do
	{	printf("Insira um numero inteiro positivo: ");
		scanf("%d", &n);		
	}	while(x < 0);	
	
	printf("O numero %d contem %d digitos.", n, calculaQtdDigitos(n));
}

