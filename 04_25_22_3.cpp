#include <stdio.h>
#include <string.h>

main()
{	char nome[50];
	fflush(stdin);
	printf("Nome: ");
	gets(nome);
	printf("\nNome digitado: ");
	puts(nome);	
	printf("\nA quantidade de caracteres em %s e: %d caracteres", nome, strlen(nome));
}
