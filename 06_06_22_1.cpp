/*
Escreva uma funcao recursiva que calcule a multiplicacao atraves da soma
*/

#include <stdio.h>

int mult(int num, int qtd)
{	if(qtd == 1)
		return num;
	return num + mult(num, qtd - 1);	
}

main()
{	int num, qtd;

	printf("Insira um numero inteiro positivo: ");
	scanf("%d", &num);

	do
	{	printf("Insira a quantidade: ");
		scanf("%d", &qtd);		
	} while(qtd < 1);
	
	printf("A multiplicacao de %d por %d e: %d", num, qtd, mult(num, qtd));
}

/*
n	qtd		call			resultado
2	3		2 + mult(2, 2)	2 + 4 = 6
2	2		2 + mult(2, 1)	2 + 2 = 4
2	1		return num		2				
*/
