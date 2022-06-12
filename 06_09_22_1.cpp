/*
Escreva uma funcao recursiva que calcule a soma da seguinte serie:
S = 2 - 4 + 8 - 16 + ... 2^n
*/

#include <stdio.h>
#include <math.h>

int calcula_serie(int n)
{	if(n == 1)
		return 2;
	else if(n % 2 == 0)
			return - pow(2, n) + calcula_serie(n - 1);
		else return pow(2, n) + calcula_serie(n - 1);
}

main()
{	int n;

	do
	{	printf("Insira a potencia: ");
		scanf("%d", &n);
	}	while (n < 0);
	
	printf("A soma da serie e: %d", calcula_serie(n));
}

/*
Pilha:
n = 1	|	2						|	2
n = 2	|	-4 + calcula_serie(1)	|	-2
*/
