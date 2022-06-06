/*
Escrever uma funcao recursiva que calcule o valor da serie S.
S = 2 + 3/4 + 4/9 + ...

n + 1 / n^2
*/

#include <stdio.h>

float serie(int n)
{	if (n == 1)
		return 2;
	else return (float)(n + 1)/(n * n) + serie(n - 1);
}

main()
{	int n;

	do
	{	printf("Insira um numero inteiro positivo: ");
		scanf("%d", &n);
	}	while(n < 0);
	
	printf("A soma da serie e %.2f", serie(n));
}
