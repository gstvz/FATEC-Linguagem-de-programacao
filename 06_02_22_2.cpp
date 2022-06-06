/*
Escreva uma funcao recursiva que exiba a tabuada de um numero n
*/

#include <stdio.h>

void exibeTabuada(int n, int pos)
{	if(pos == 0)
		return;
	else exibeTabuada(n, pos - 1);
	printf("\n\n%d x %d = %d", n, pos, n * pos);	
}


main()
{	int num;

	printf("Numero: ");
	scanf("%d", &num);
	printf("\nTabuada do %d\n", num);
	exibeTabuada(num, 10);	
}
