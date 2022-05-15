#include <stdio.h>
#include <string.h>

main()
{	char nome[50];
	fflush(stdin);
	printf("Nome: ");
	gets(nome);
	printf("\nNome digitado: ");
	puts(nome);	
}
