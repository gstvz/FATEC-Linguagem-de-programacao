/*
Escreva um programa que leia uma frase de ate 40 caracteres;
Gere uma segunda string sem os espacos em branco;
Exiba as duas strings;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{	char frase[40], branco[40];
	int i, j = 0;
	
	fflush(stdin);
	printf("Escreva uma frase: ");
	gets(frase);
	
	for(i = 0; i < strlen(frase); i++)
		if(frase[i] != ' ')
		{	branco[j] = frase[i];
			j++;
		}
	
	branco[j] = '\0';
		
	printf("\n\nA frase sem espacos: ");
	puts(branco);
}
