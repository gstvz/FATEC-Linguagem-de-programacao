/*
Escreva um programa que leia uma frase de ate 40 caracteres;
Descubra a quantidade de letras 'a';
*/

#include <stdio.h>
#include <string.h>

main()
{	char frase[40];
	int i, qtd = 0;

	fflush(stdin);
	printf("Escreva uma frase: ");
	gets(frase);
	
	for(i = 0; i < strlen(frase); i++)
		if(frase[i] == 'a')
			qtd++;	
	
	
	printf("\n\nA frase '%s' possui %d letras 'a'.", frase, qtd);	
}
