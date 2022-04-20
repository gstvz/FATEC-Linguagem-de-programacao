/*
Escreva um programa que leia dois valores inteiros positivos (a e b).
Escreva uma funcao que retorne o valor de a elevado a b.
*/

#include <stdio.h>

int calc_potencia(int num, int exp)
{	int i, resultado = 1;

	if(exp == 0)
		return resultado;

	for(i = 0; i < exp; i++)
		resultado = resultado * num;
	
	return resultado;
}


main()
{	int a, b, potencia;

	printf("\nInsira um valor inteiro positivo: ");
	scanf("%d", &a);
	
	printf("\nInsira um expoente: ");
	scanf("%d", &b);
	
	potencia = calc_potencia(a, b);
	printf("\n\n%d elevado a %d e: %d", a, b, potencia);
}
