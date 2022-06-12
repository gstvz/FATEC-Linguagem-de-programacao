/*
Escreva uma funcao recursiva que retorne a quantidade de uma determinada letra numa string
*/

#include <stdio.h>

int conta_letras(char palavra[], char letra, int n)
{	if(palavra[n] == '\0')
		return 0;
	else if(palavra[n] == letra)
		return 1 + conta_letras(palavra, letra, n + 1);
	else return 0 + conta_letras(palavra, letra, n + 1);
}

main()
{	char texto[80], letra;
	
	printf("Texto: ");
	gets(texto);
	
	printf("Letra: ");
	scanf("%c", &letra);
	
	printf("\nO texto possui %d caracteres %c", conta_letras(texto, letra, 0), letra);
}

/*
indice		call								resultado
0			0 + conta_letra(CASA, A, 1)			0
1			1 + conta_letra(CASA, A, 2)			1
2			0 + conta_letra(CASA, A, 3)			1
3			1 + conta_letra(CASA, A, 4)			2
4			return 0;							2
*/

