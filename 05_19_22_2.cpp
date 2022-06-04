/*
Escreva um programa, principal e funcao recursiva, que calcule a combinacao (n, p);
lembrando que n e p devem ser inteiros positivos e p menor que n;

combinacao(n, p) = n! / p! * (n - p)!
*/

#include<stdio.h>

int fatorial(int n)
{	if(n == 1)
		return 1;
	else return n * fatorial(n - 1);
}

main()
{	int n, p, arranjo;

	do 
	{	printf("Insira o valor de n: ");
		scanf("%d", &n);
	} while(n < 1);
	
	do
	{	printf("Insira o valor de p: ");
		scanf("%d", &p);		
	} while((p < 1) || (p >= n));
	
	printf("\n\Combinacao(%d, %d) = %.2f", n, p, float(fatorial(n)/(fatorial(p) * fatorial(n - p))));
}

