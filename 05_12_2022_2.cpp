/*
Escreva uma funcao recursiva que retorne o somatorio de um numero natural.
*/

#include <stdio.h>

int soma(int n) {
	if(n == 1)
		return 1;
	else return n + soma(n - 1);
} 

main()
{	int n;

	do 
	{	printf("Digite um numero natural: ");
		scanf("%d", &n);
	} while(n < 0);
	
	printf("O somatorio de %d e: %d", n, soma(n));
}
