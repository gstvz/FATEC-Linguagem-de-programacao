/*
Escrever um programa que leia 5 números inteiros.
Calcule e exiba o valor do fatorial de cada número lido.
Função:
a) Cálculo do fatorial 
*/

#include <stdio.h>


int calc_fatorial(int a)
{	int fat = 1, i;
	
	for(i = a; i > 0; i--)
		fat = fat * i;	
		
	return fat;	
}


main()
{	int i, vet[5], vetFat[5];
	
	for(i = 0; i < 5; i++)
	{	printf("Digite o %do numero: ", i + 1);	
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 5; i++)
		vetFat[i] = calc_fatorial(vet[i]);
	
	for(i = 0; i < 5; i++)
		printf("\nO fatorial de %d e: %d\n", vet[i], vetFat[i]);
}

/*
Resolução prof

#include <stdio.h>

int fatorial(int x)
{	int i, f = 1;
	
	for(i = 2; i <= x; i++)
		f = f * i;
		
	return f;
}

main()
{	int a, i;
	
	for(i = 1; i <= 5; i++)
	{	do {	printf("\nNumero: ");
				scanf("%d", &a);
			} while(a < 0);
		printf("\n\nFatorial de %d = %d", a, fatorial(a));
	}
}
*/
