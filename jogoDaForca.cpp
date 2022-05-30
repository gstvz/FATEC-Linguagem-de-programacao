#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<windows.h>

void gotoxy(int x, int y)
{	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){x - 1, y - 1});
}

void exibirErros(int erros, char letras[20])
{	int i;
	gotoxy(8, 8);
	printf("%d", erros);
	
	gotoxy(13, 10);
	for(i = 0; i < strlen(letras); i++)
		printf("%c ", toupper(letras[i]));
}

void converterPalavra(char palavra[20])
{	int i;

	for(i = 0; i < strlen(palavra); i++)
		palavra[i] = tolower(palavra[i]);
		
	return;	
}

void lerPalavra(char palavra[20])
{	int i;

	fflush(stdin);
	printf("Insira uma palavra: ");
	gets(palavra);
	converterPalavra(palavra);
	
	printf("\n\n");
	
	for (i = 0; i < strlen(palavra); i++)
		printf("_ ");
		
	printf("\n\n");
	
	printf("Erros: \n\n");
	printf("Tentativas: \n\n");
		
	printf("*******************************************************************");
	
	return;
}

void exibirResultado(int acertos, char palavra[20])
{	gotoxy(1, 17);
	
	printf("*******************************************************************");
	
	gotoxy(1, 19);
	
	if(acertos != strlen(palavra))
		printf("Voce perdeu! Acabaram as tentativas!");
	else printf("Voce venceu!");
	
	printf("\n\n*******************************************************************\n\n");
}

void lerLetras(char palavra[20])
{	char letra[2], letras[20];
	int i, j, aux, tentativas = 6, acertos = 0, erros = 0;

	while(tentativas > 0 && acertos != strlen(palavra))
	{	gotoxy(1, 14);
		printf("Voce tem %d tentativas!", tentativas);
		fflush(stdin);
		gotoxy(1, 15);
		printf("Insira uma letra: ");
		gets(letra);
		
		tentativas--;
		strcat(letras, letra);		
  		aux = 1;
  		j = 0;
  		
		for(i = 0; i < strlen(palavra); i++)
		{	if(palavra[i] == tolower(letra[0]))
			{	acertos++;
				j++;			
				gotoxy(i + aux, 6);				
				printf("%c", toupper(letra[0]));			
			}
			aux++;
		}		
		
		if(j == 0)
			erros++;
		
		exibirErros(erros, letras);	
	}
	
	if(tentativas == 0)
	{	gotoxy(1, 14);
		printf("Voce tem %d tentativas!", tentativas);
	};
	
	exibirResultado(acertos, palavra);
	
	return;
}

main()
{	char palavra[20];

	printf("************************** Jogo da Forca **************************\n\n");

	lerPalavra(palavra);
	lerLetras(palavra);
}

