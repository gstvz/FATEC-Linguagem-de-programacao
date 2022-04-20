/*
Receba dois numeros inteiros e retorne o maior deles.
*/

#include <stdio.h>

int maior_numero(int a, int b)
{	int maior;

	if(a > b) {
		maior = a;
	} else maior = b;
	
	return maior;
}

main()
{	int n1, n2, maior;

	printf("Insira um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("\nInsira mais um numero inteiro: ");
	scanf("%d", &n2);
	
	maior = maior_numero(n1, n2);
	
	if(maior == n1 && maior == n2) {
		printf("\n%d e %d sao iguais!", n1, n2);
	} else printf("\nO maior numero entre %d e %d e: %d", n1, n2, maior);
}
