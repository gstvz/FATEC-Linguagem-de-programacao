/*
Escrever um programa que leia dois valores inteiros (a, b).
Calcule e exiba o valor de a elevado a b.
Função:
a) Cálculo de a elevado a b 
*/

#include <stdio.h>

int calc_potencia(int a, int b)
{	int pot = a, aux;

	for(aux = 1; aux < b; aux++)
		pot = pot * a;	

	return pot;
}

main()
{	int a, b, pot;

	printf("Insira o numero: ");
	scanf("%d", &a);
	
	printf("Insira o expoente: ");
	scanf("%d", &b);
	
	pot = calc_potencia(a, b);	
	printf("\nA potencia de %d elevado a %d e: %d", a, b, pot);
}


/*
Resolucao prof

#include <stdio.h>

int potencia(int x, int y)
{	int i, p = 1;

	for(i = 1; i <= y; i++)
		p = p * x;
	
	return p;
}

main()
{	int a, b;

	printf("A: ");
	scanf("%d", &a);
	
	printf("B: ");
	scanf("%d", &b);
	
	printf("\n\nO valor de %d elevado a %d = %d", a, b, potencia(a, b));
}
*/

