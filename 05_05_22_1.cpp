/*
Escreva um programa que leia uma string de ate 80 caracteres;
Verifique se a palavra e um palindromo (e igual se lida de tras pra frente);

Ler a string (sem sinais de pontuacao ou letras acentuadas);
Retirar os espacos (gerar 2a string);
Gerar a inversa (gerar 3a string);
Verficar se as strings sao iguais;
Converter para maiusculo ou minusculo;

socorram me subi no onibus em marrocos;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{	char frase[80], fraseSemEspacos[80], fraseInversa[80];
	int i, j;

	fflush(stdin);
	printf("Escreva uma frase: ");
	gets(frase);
	
	// Gerar a string sem espacos;
	j = 0;
	for(i = 0; i < strlen(frase); i++)
		if(frase[i] != ' ')
		{	fraseSemEspacos[j] = frase[i];
			j++;
		}	
	fraseSemEspacos[j] = '\0';	
	
	// Inverter a string;
	for(i = 0; i < strlen(fraseSemEspacos); i++)
		fraseInversa[i] = fraseSemEspacos[(strlen(fraseSemEspacos) - 1 - i)];
		
	fraseInversa[i] = '\0';
	
	// Verificar se sao iguais;
	if(strcmp(fraseSemEspacos, fraseInversa) == 0)
		printf("As frases sao iguais");
	else printf("As frases nao sao iguais");
}
