/*
Escrever um programa que leia uma frase de ate 40 caracteres;
Converta todas as letras para minuscula;
Exiba a string convertida;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{	char frase[40];
	int i;
	
	fflush(stdin);
	printf("Escreva uma frase: ");
	gets(frase);
	
	for(i = 0; i < strlen(frase); i++)
		frase[i] = tolower(frase[i]);
	
	printf("\n\nA frase convertida para maiusculo: ");
	puts(frase);
}
