/*
Escreva uma funcao recursiva que retorne a quantidade de caracteres de um texto
*/

#include <stdio.h>

int conta_caracteres(char palavra[], int n)
{	if(palavra[n] == '\0')
		return 0;
	return	1 + conta_caracteres(palavra, n + 1);
}

main()
{	char texto[80];
	
	printf("Texto: ");
	gets(texto);
	
	printf("\nO texto possui %d caracteres", conta_caracteres(texto, 0));	
}

/*	
indice		call						resultado
0			1 + palava(CASA, 1)			1 + 3 = 4
1			1 + palavra(CASA, 2)		1 + 2 = 3
2			1 + palavra(CASA, 3)		1 + 1 = 2
3			1 + palavra(CASA, 4)		0
*/

