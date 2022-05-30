/*
Escreva uma funcao recursiva que calcule o valor da seguinte serie s:
S = 2/4 + 5/5 + 10/6 + 17/7 + ...

n^2 + 1 / n + 3;
*/

#include<stdio.h>

float serie(int n)
{	if(n == 1)
		return 0.5;
	else return(n * n + 1)/(n + 3) + serie (n - 1);	
}

main()
{	int n;

	printf("Insira o valor de n: ");
	scanf("%d", &n);
	
	printf("\n\nSerie S com n valendo %d: %.2f", n, serie(n));
}
