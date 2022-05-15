#include <stdio.h>

main()
{	char nome[50];
	
	fflush(stdin);
	printf("Nome: ");
	scanf("%s", &nome);
	printf("\n\nNome digitado: %s", nome);
}
