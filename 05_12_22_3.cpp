/*
Escreva uma funcao recursiva que calcule o valor de a elevado a b.
*/

#include <stdio.h>

int potencia(int a, int b)
{	if(b == 1)
		return a;
	else return a * potencia(a, b - 1);
}

main()
{	int base, exp;
	
	do
	{	printf("Digite um numero maior que 0: ");
		scanf("%d", &base);
		printf("Digite um expoente maior que 0: ");
		scanf("%d", &exp);	
	} while(base < 0 || exp < 0);
	
	printf("%d elevado a %d e: %d", base, exp, potencia(base, exp));
}
