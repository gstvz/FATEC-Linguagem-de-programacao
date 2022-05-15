#include <stdio.h>
#include <string.h>

main()
{	char str1[20], str2[20];
	
	fflush(stdin);
	printf("Palavra: ");
	gets(str1);
	printf("\nPalavra: ");
	gets(str2);
	printf("\n\nPalavra 1: ");
	puts(str1);
	printf("\n\nPalavra 2: ");
	puts(str2);
}
