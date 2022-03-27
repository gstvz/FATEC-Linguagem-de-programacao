/* Escrever um programa que simule o jogo de adivinhar um n�mero entre um jogador e o computador;
O computador deve gerar um n�mero aleat�rio entre 1 e 100;
Repetir: o jogador chuta, o computador diz se acertou ou n�o e se � maior ou menor, e incrementa a quantidade de tentativas;
Se o valor gerado for 0, assumir que � 1;

Na vez do computador:
O usu�rio pensa num n�mero de 1 a 100;
O computador chuta com a busca bin�ria, o usu�rio diz se acertou ou n�o e se � maior ou menor, e incrementa a quantidade de tentativas;

No final, exibir o placar com a quantidade de tentativas de cada e vence quem teve menos;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{	int vet[100], i, numeroComputador, numeroChute, acertou = 0, achou = 0, resposta, inicio, fim, meio, tentativasHumano = 0, tentativasComputador =0;
	
	printf("JOGO DE ADIVINHACAO\n");
	printf("Adivinhe um numero entre 1 e 100!\n");
	printf("----------------------\n\n");
	
	// Geracao de numero aleatorio entre 1 e 100;
	srand(time(NULL));
	numeroComputador = rand()%100;
	if(numeroComputador == 0)
		numeroComputador = 1;

  // Exibir numero do computador para teste;
	// printf("%d\n", numeroComputador);
		
	// Chute do usuario;
	while(acertou == 0)
	{	printf("\nTente adivinhar o numero: \n");
		scanf("%d", &numeroChute);
		if(numeroChute == numeroComputador)
			{	acertou = 1;
				printf("\n\nParabens! Voce acertou!");
				printf("\n----------------------\n");
			}
		else if(numeroChute > numeroComputador)
				{	printf("\nO numero e menor!");
					printf("\n----------------------\n");					
				}
			else 
			{	printf("\nO numero e maior!");
				printf("\n----------------------\n");				
			}
			
		tentativasHumano++;
	}
	
	printf("\nAgora e a vez do computador adivinhar!\n");
	printf("Pense em um numero entre 1 e 100!\n");
	printf("----------------------\n");
	// Geracao do vetor de 100 elementos;
	for(i = 0; i < 100; i++)
		vet[i] = i + 1;
	
	// Chute do computador;
	inicio = 1;
	fim = 100;
	meio = (inicio + fim) / 2;
	
	while((resposta != 1) && (inicio <= fim))
	{	printf("\nO computador chutou %d!\n", meio);
		printf("\nDigite 1 se ele acertou, 2 se for menor ou 3 se for maior!\n");
		scanf("%d", &resposta);
		if(resposta == 1)
			{	printf("O computador acertou!\n");
				printf("\n----------------------\n");
			}			
		else if(resposta == 2)
				{	printf("\nO numero e menor!");
					printf("\n----------------------\n");
					fim = meio -1;					
				}
			else
			{	inicio = meio + 1;
				printf("\nO numero e maior!");
				printf("\n----------------------\n");
			}
		meio = (inicio + fim) / 2;
		tentativasComputador++;	
	}

	// Exibicao do placar;
	printf("\nTentativas Humano: %d x %d Tentativas Computador\n\n", tentativasHumano, tentativasComputador);
  if(inicio > fim)
    printf("O computador nao conseguiu acertar!\n");
	if(tentativasHumano == tentativasComputador)
		printf("Empatou!\n\n");
	else if(tentativasHumano > tentativasComputador)
			printf("O computador venceu!\n\n");
		else printf("Voce venceu!\n\n");	
}
