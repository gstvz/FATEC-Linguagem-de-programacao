/*
Escreva uma funcao recursiva que calcule o valor da seguinte serie harmonica:
S = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n;

Qual a situacao mais simples?
(Que eu consigo saber a resposta)
Nesse caso sera quando n for 1.
Entao esse e nosso caso base.
Como fazer a chamada recursiva
(Temos que resolver de tras pra frente),
portanto sera:
1/n + restante da serie (que eh o nome_funcao (n - 1));
*/

#include <stdio.h>

float calcula_s(int n)
{	if(n == 1)
		return 1;
	else return (float) 1/n + calcula_s(n - 1);	
}

main()
{	int num;
	
	do 
	{	printf("Numero: ");
		scanf("%d", &num);		
	}	while(num < 1);
	
	printf("Serie S = %.2f", calcula_s(num));
}

